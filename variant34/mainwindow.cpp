#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QTime>
#include <QRandomGenerator>

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

// часть 1
void MainWindow::on_btn_CreateList_clicked()
{
    int size = ui->lineEdit_Size->text().toInt();

    if (size <= 0) {
        QMessageBox::information(this, "Ошибка", "Размер должен быть больше 0!");
        return;
    }

    myList.clear();

    for (int i = 0; i < size; i++) {
        myList.append(QRandomGenerator::global()->bounded(100));
    }

    QString result;
    for (int i = 0; i < myList.size(); i++) {
        result += QString::number(myList[i]) + " ";
    }
    ui->textEdit_List->setText(result);
    ui->lbl_Result->setText("Создан список из " + QString::number(size) + " элементов");
}

void MainWindow::on_btn_RemoveRange_clicked()
{
    if (myList.isEmpty()) {
        QMessageBox::information(this, "Ошибка", "Сначала создайте список!");
        return;
    }

    int N = ui->lineEdit_N->text().toInt();
    int K = ui->lineEdit_K->text().toInt();

    if (N < 0 || K >= myList.size() || N > K) {
        QMessageBox::information(this, "Ошибка",
                                 "Неверные позиции! N от 0 до " +
                                     QString::number(myList.size()-1));
        return;
    }

    for (int i = N; i <= K; i++) {
        myList.removeAt(N);
    }

    QString result;
    for (int i = 0; i < myList.size(); i++) {
        result += QString::number(myList[i]) + " ";
    }

    if (myList.isEmpty()) result = "Список пуст";

    ui->textEdit_List->setText(result);
    ui->lbl_Result->setText("Удалены элементы с " + QString::number(N) +
                            " по " + QString::number(K));
}

// часть 2
void MainWindow::on_btn_CreateLinkList_clicked()
{
    int size = ui->lineEdit_SizeLink->text().toInt();

    if (size <= 0) {
        QMessageBox::information(this, "Ошибка", "Размер должен быть больше 0!");
        return;
    }

    myLinkList.clear();

    for (int i = 0; i < size; i++) {
        myLinkList.push_back(QRandomGenerator::global()->bounded(100));
    }

    QString result;
    for (std::list<int>::iterator it = myLinkList.begin(); it != myLinkList.end(); ++it) {
        result += QString::number(*it) + " ";
    }
    ui->textEdit_LinkList->setText(result);
}

void MainWindow::on_btn_SortList_clicked()
{
    if (myLinkList.empty()) {
        QMessageBox::information(this, "Ошибка", "Сначала создайте связный список!");
        return;
    }

    // Сортировка по убыванию
    myLinkList.sort(std::greater<int>());

    QString result;
    for (std::list<int>::iterator it = myLinkList.begin(); it != myLinkList.end(); ++it) {
        result += QString::number(*it) + " ";
    }
    ui->textEdit_LinkList->setText(result);
}