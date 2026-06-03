#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRandomGenerator>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Заполняем исходный список числами от 1 до 20
    for (int i = 1; i <= 20; ++i) {
        numbers.append(i);
    }

    // Показываем исходные числа
    QString inputText;
    for (int i = 0; i < numbers.size(); ++i) {
        inputText += QString::number(numbers[i]);
        if (i < numbers.size() - 1) inputText += ", ";
    }
    ui->textEdit_Input->setText(inputText);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_Generate_clicked()
{
    //копия исходного списка
    QList<int> shuffled = numbers;

    //алгоритм Фишера-Йетса
    for (int i = shuffled.size() - 1; i > 0; --i) {
        int j = QRandomGenerator::global()->bounded(i + 1);

        shuffled.swapItemsAt(i, j);

    }

    //результат
    QString resultText;
    for (int i = 0; i < shuffled.size(); ++i) {
        resultText += QString::number(shuffled[i]);
        if (i < shuffled.size() - 1) resultText += ", ";
    }
    ui->textEdit_Result->setText(resultText);
}
