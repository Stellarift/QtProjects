#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStack>
#include <cmath>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // Цифры
    void on_btn_0_clicked();
    void on_btn_1_clicked();
    void on_btn_2_clicked();
    void on_btn_3_clicked();
    void on_btn_4_clicked();
    void on_btn_5_clicked();
    void on_btn_6_clicked();
    void on_btn_7_clicked();
    void on_btn_8_clicked();
    void on_btn_9_clicked();
    void on_btn_Dot_clicked();
    void on_btn_Clear_clicked();
    void on_btn_PM_clicked();

    // Арифметика
    void on_btn_Add_clicked();
    void on_btn_Sub_clicked();
    void on_btn_Mul_clicked();
    void on_btn_Div_clicked();
    void on_btn_Equals_clicked();

    // Память
    void on_btn_MS_clicked();
    void on_btn_MR_clicked();
    void on_btn_MC_clicked();
    void on_btn_MPlus_clicked();
    void on_btn_MMinus_clicked();

    // НОВЫЕ КНОПКИ (3 группа)
    void on_btn_Tan_clicked();      // тангенс
    void on_btn_10x_clicked();      // 10 в степени x
    void on_btn_Pow3_clicked();     // x в кубе
    void on_btn_Fact_clicked();     // факториал

private:
    Ui::MainWindow *ui;
    QStack<QString> stack;
    double memory;

    void calculate(const QString &sgn);
    double factorial(double n);
};

#endif // MAINWINDOW_H