#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRandomGenerator>
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

// стэк
void MainWindow::updateStackDisplay()
{
    QString result;
    for (int i = 0; i < myStack.size(); ++i) {
        result += QString("%1 ").arg(myStack[i]);
    }
    ui->textEdit_Stack->setText(result);
}

void MainWindow::on_btn_CreateStack_clicked()
{
    myStack.clear();
    for (int i = 0; i < 8; ++i) {
        myStack.push(QRandomGenerator::global()->bounded(1, 11));
    }
    updateStackDisplay();
    ui->lbl_StackResult->setText("Стек сформирован (8 чисел)");
}

void MainWindow::on_btn_TransformStack_clicked()
{
    if (myStack.size() != 8) {
        QMessageBox::warning(this, "Ошибка", "Сначала создайте стек!");
        return;
    }

    for (int i = 0; i < 4; ++i) {
        int product = myStack[i] * myStack[7 - i];
        myStack[i] = product;
        myStack[7 - i] = product;
    }

    updateStackDisplay();
    ui->lbl_StackResult->setText("Замена выполнена");
}

// очередь
void MainWindow::updateQueueDisplay()
{
    QString result;
    QList<int> list = myQueue.toList();
    for (int i = 0; i < list.size(); ++i) {
        result += QString("%1 ").arg(list[i]);
    }
    ui->textEdit_Queue->setText(result);
}

void MainWindow::on_btn_CreateQueue_clicked()
{
    myQueue.clear();
    for (int i = 0; i < 8; ++i) {
        int value = QRandomGenerator::global()->bounded(-20, 51);
        myQueue.enqueue(value);
    }
    updateQueueDisplay();
    ui->lbl_QueueResult->setText("Очередь заполнена");
}

void MainWindow::on_btn_AvgQueue_clicked()
{
    if (myQueue.size() != 8) {
        QMessageBox::warning(this, "Ошибка", "Сначала создайте очередь!");
        return;
    }

    QQueue<int> newQueue;
    QList<int> list = myQueue.toList();

    for (int i = 0; i < list.size() - 1; ++i) {
        int avg = (list[i] + list[i + 1]) / 2;
        newQueue.enqueue(avg);
    }

    myQueue = newQueue;
    updateQueueDisplay();
    ui->lbl_QueueResult->setText("Ср.арифм. соседей");
}
