#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStack>
#include <QQueue>

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
    void on_btn_CreateStack_clicked();
    void on_btn_TransformStack_clicked();
    void on_btn_CreateQueue_clicked();
    void on_btn_AvgQueue_clicked();

private:
    Ui::MainWindow *ui;
    QStack<int> myStack;
    QQueue<int> myQueue;

    void updateStackDisplay();
    void updateQueueDisplay();
};

#endif // MAINWINDOW_H