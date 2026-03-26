#include "mainwindow.h"
#include "ui_mainwindow.h"

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

// Часть 1: выбрать наименьшее и наибольшее, третье число заменить разностью
void MainWindow::on_pushButton_clicked()
{
    double x = ui->x->text().toDouble();
    double y = ui->y->text().toDouble();
    double z = ui->z->text().toDouble();

    double minVal = x;
    double maxVal = x;

    if (y < minVal) minVal = y;
    if (z < minVal) minVal = z;
    if (y > maxVal) maxVal = y;
    if (z > maxVal) maxVal = z;

    if (x != minVal && x != maxVal)
        ui->x->setText(QString::number(maxVal - minVal));
    else if (y != minVal && y != maxVal)
        ui->y->setText(QString::number(maxVal - minVal));
    else
        ui->z->setText(QString::number(maxVal - minVal));

    ui->label->setText("min=" + QString::number(minVal) + " max=" + QString::number(maxVal));
}

// Часть 2: если числа упорядочены по убыванию - удвоить, иначе - сменить знак
void MainWindow::on_pushButton_2_clicked()
{
    double x = ui->x->text().toDouble();
    double y = ui->y->text().toDouble();
    double z = ui->z->text().toDouble();

    if (x >= y && y >= z) {
        ui->x->setText(QString::number(x * 2));
        ui->y->setText(QString::number(y * 2));
        ui->z->setText(QString::number(z * 2));
        ui->label->setText("Удвоены");
    } else {
        ui->x->setText(QString::number(-x));
        ui->y->setText(QString::number(-y));
        ui->z->setText(QString::number(-z));
        ui->label->setText("Знак изменен");
    }
}

