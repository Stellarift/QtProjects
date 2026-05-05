#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , memory(0)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Цифры
void MainWindow::on_btn_0_clicked() { ui->lineEdit->insert("0"); }
void MainWindow::on_btn_1_clicked() { ui->lineEdit->insert("1"); }
void MainWindow::on_btn_2_clicked() { ui->lineEdit->insert("2"); }
void MainWindow::on_btn_3_clicked() { ui->lineEdit->insert("3"); }
void MainWindow::on_btn_4_clicked() { ui->lineEdit->insert("4"); }
void MainWindow::on_btn_5_clicked() { ui->lineEdit->insert("5"); }
void MainWindow::on_btn_6_clicked() { ui->lineEdit->insert("6"); }
void MainWindow::on_btn_7_clicked() { ui->lineEdit->insert("7"); }
void MainWindow::on_btn_8_clicked() { ui->lineEdit->insert("8"); }
void MainWindow::on_btn_9_clicked() { ui->lineEdit->insert("9"); }

// Точка
void MainWindow::on_btn_Dot_clicked()
{
    QString text = ui->lineEdit->text();
    if (text.length() == 0 || text.contains('.')) {
        return;
    }
    ui->lineEdit->setText(text + ".");
}

// Очистка
void MainWindow::on_btn_Clear_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    stack.clear();
}

// Смена знака
void MainWindow::on_btn_PM_clicked()
{
    QString text = ui->lineEdit->text();
    if (text.length() == 0) {
        return;
    }
    if (text[0] == '-') {
        ui->lineEdit->setText(text.remove(0, 1));
    } else {
        ui->lineEdit->setText("-" + text);
    }
}

// Арифметические операции
void MainWindow::calculate(const QString &sgn)
{
    if (ui->lineEdit->text().length() == 0) {
        return;
    }

    if (stack.length() >= 2) {
        double val2 = ui->lineEdit->text().toDouble();
        QString sign = stack.pop();
        double val1 = stack.pop().toDouble();

        if (sign == "+") {
            stack.push(QString::number(val1 + val2));
        } else if (sign == "-") {
            stack.push(QString::number(val1 - val2));
        } else if (sign == "*") {
            stack.push(QString::number(val1 * val2));
        } else if (sign == "/") {
            if (val2 == 0) {
                stack.push(QString::number(val1));
            } else {
                stack.push(QString::number(val1 / val2));
            }
        }
        stack.push(sgn);
    } else {
        stack.push(ui->lineEdit->text());
        stack.push(sgn);
    }

    ui->lineEdit->clear();
    ui->lineEdit_2->setText(stack.toList().join(" "));
}

void MainWindow::on_btn_Add_clicked() { calculate("+"); }
void MainWindow::on_btn_Sub_clicked() { calculate("-"); }
void MainWindow::on_btn_Mul_clicked() { calculate("*"); }
void MainWindow::on_btn_Div_clicked() { calculate("/"); }

// Равенство
void MainWindow::on_btn_Equals_clicked()
{
    if (ui->lineEdit->text().length() != 0 && stack.length() == 2) {
        stack.push(ui->lineEdit->text());
    }

    if (stack.length() < 3) {
        return;
    }

    double val2 = stack.pop().toDouble();
    QString sign = stack.pop();
    double val1 = stack.pop().toDouble();
    double result = 0;

    if (sign == "+") {
        result = val1 + val2;
    } else if (sign == "-") {
        result = val1 - val2;
    } else if (sign == "*") {
        result = val1 * val2;
    } else if (sign == "/") {
        if (val2 == 0) {
            result = val1;
        } else {
            result = val1 / val2;
        }
    }

    stack.push(QString::number(result));
    ui->lineEdit->setText(QString::number(result));
    ui->lineEdit_2->clear();
    stack.clear();
}

// Память
void MainWindow::on_btn_MS_clicked()
{
    if (ui->lineEdit->text().length() > 0) {
        memory = ui->lineEdit->text().toDouble();
    }
}

void MainWindow::on_btn_MR_clicked()
{
    ui->lineEdit->setText(QString::number(memory));
}

void MainWindow::on_btn_MC_clicked()
{
    memory = 0;
}

void MainWindow::on_btn_MPlus_clicked()
{
    if (ui->lineEdit->text().length() > 0) {
        memory += ui->lineEdit->text().toDouble();
    }
}

void MainWindow::on_btn_MMinus_clicked()
{
    if (ui->lineEdit->text().length() > 0) {
        memory -= ui->lineEdit->text().toDouble();
    }
}

// новые функции 3 группа

// Тангенс (в радианах)
void MainWindow::on_btn_Tan_clicked()
{
    QString text = ui->lineEdit->text();
    if (text.length() == 0) {
        return;
    }
    double val = text.toDouble();
    double result = tan(val);
    ui->lineEdit->setText(QString::number(result));
    ui->lineEdit_2->setText("tan(" + text + ")");
}

// 10 в степени x
void MainWindow::on_btn_10x_clicked()
{
    QString text = ui->lineEdit->text();
    if (text.length() == 0) {
        return;
    }
    double val = text.toDouble();
    double result = pow(10, val);
    ui->lineEdit->setText(QString::number(result));
    ui->lineEdit_2->setText("10^(" + text + ")");
}

// x в кубе
void MainWindow::on_btn_Pow3_clicked()
{
    QString text = ui->lineEdit->text();
    if (text.length() == 0) {
        return;
    }
    double val = text.toDouble();
    double result = val * val * val;
    ui->lineEdit->setText(QString::number(result));
    ui->lineEdit_2->setText("(" + text + ")³");
}

// Факториал (целое число >= 0)
double MainWindow::factorial(double n)
{
    int num = static_cast<int>(n);
    if (num < 0) return 0;
    double result = 1;
    for (int i = 2; i <= num; ++i) {
        result *= i;
    }
    return result;
}

void MainWindow::on_btn_Fact_clicked()
{
    QString text = ui->lineEdit->text();
    if (text.length() == 0) {
        return;
    }
    double val = text.toDouble();

    // Проверка: факториал только для целых неотрицательных чисел
    if (val < 0 || val != static_cast<int>(val)) {
        ui->lineEdit->setText("Ошибка");
        return;
    }

    double result = factorial(val);
    ui->lineEdit->setText(QString::number(result, 'f', 0)); // без дробной части
    ui->lineEdit_2->setText(text + "!");
}