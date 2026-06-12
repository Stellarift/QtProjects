#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRegularExpression>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("Замена чисел на слова");
    setFixedSize(500, 400);

    ui->textEdit_Output->setReadOnly(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_Replace_clicked()
{
    QString inputText = ui->textEdit_Input->toPlainText();
    QString outputText = inputText;

    // Соответствие: число слово
    QStringList numbers = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
    QStringList words = {"один", "два", "три", "четыре", "пять",
                         "шесть", "семь", "восемь", "девять"};

    for (int i = 0; i < numbers.size(); ++i) {
        // \\b - граница слова (чтобы не заменить 10 на "один0")
        QRegularExpression regex("\\b" + numbers[i] + "\\b");
        outputText.replace(regex, words[i]);
    }

    ui->textEdit_Output->setText(outputText);
}