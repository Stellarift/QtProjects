#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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

// Описать число словами
void MainWindow::on_pushButton_Number_clicked()
{
    int num = ui->lineEdit_Number->text().toInt();
    QString result;

    // проверка диапазона
    if (num < -999 || num > 999) {
        QMessageBox::information(this, "Ошибка", "Число должно быть от -999 до 999!");
        return;
    }

    if (num == 0) {
        result = "нулевое число";
    } else {
        if (num < 0) {
            result = "отрицательное ";
            num = -num;
        } else {
            result = "положительное ";
        }

        if (num >= 1 && num <= 9) {
            result += "однозначное число";
        } else if (num >= 10 && num <= 99) {
            result += "двузначное число";
        } else if (num >= 100 && num <= 999) {
            result += "трехзначное число";
        }
    }

    ui->lbl_NumberResult->setText("Результат: " + result);
}

void MainWindow::on_pushButton_Sort_clicked()
{
    double x = ui->lineEdit_X->text().toDouble();
    double y = ui->lineEdit_Y->text().toDouble();
    double z = ui->lineEdit_Z->text().toDouble();

    double arr[3] = {x, y, z};

    //пузырек
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (arr[i] < arr[j]) {
                double temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    ui->lineEdit_X->setText(QString::number(arr[0]));
    ui->lineEdit_Y->setText(QString::number(arr[1]));
    ui->lineEdit_Z->setText(QString::number(arr[2]));

    ui->lbl_SortResult->setText("Упорядочено: " +
                                QString::number(arr[0]) + " ≥ " +
                                QString::number(arr[1]) + " ≥ " +
                                QString::number(arr[2]));
}