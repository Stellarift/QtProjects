#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QFileInfo>
#include <QTextStream>
#include <QMessageBox>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_OpenFile_clicked()
{
    // Выбор файла через диалог
    QString filePath = QFileDialog::getOpenFileName(this,
                                                    "Выберите текстовый файл", "", "Текстовые файлы (*.txt);;Все файлы (*)");

    if (filePath.isEmpty()) {
        return;
    }

    QFile file(filePath);

    // Чтение содержимого файла
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream stream(&file);
        QString content = stream.readAll();
        ui->textEdit_Content->setText(content);
        file.close();
    } else {
        QMessageBox::warning(this, "Ошибка", "Не удалось открыть файл для чтения!");
        return;
    }

    // Получение информации о файле
    QFileInfo fileInfo(filePath);

    // Имя файла
    ui->lbl_FileNameValue->setText(fileInfo.fileName());

    // Размер файла (в байтах)
    qint64 size = fileInfo.size();
    ui->lbl_SizeValue->setText(QString::number(size) + " байт");

    // Дата создания
    QDateTime created = fileInfo.birthTime();
    ui->lbl_CreatedValue->setText(created.toString("dd.MM.yyyy hh:mm:ss"));

    // Дата последнего изменения
    QDateTime modified = fileInfo.lastModified();
    ui->lbl_ModifiedValue->setText(modified.toString("dd.MM.yyyy hh:mm:ss"));

    // Атрибуты файла
    QString attributes;

    if (fileInfo.isReadable()) {
        attributes += "Читаемый ";
    }
    if (fileInfo.isWritable()) {
        attributes += "Доступный для записи ";
    }
    if (fileInfo.isHidden()) {
        attributes += "Скрытый ";
    }
    if (fileInfo.isExecutable()) {
        attributes += "Исполняемый ";
    }
    if (fileInfo.isSymLink()) {
        attributes += "Символическая ссылка ";
    }

    if (attributes.isEmpty()) {
        attributes = "Нет дополнительных атрибутов";
    }

    ui->lbl_AttributesValue->setText(attributes);
}