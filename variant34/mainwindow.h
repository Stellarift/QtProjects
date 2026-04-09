#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <list>

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
    void on_btn_CreateList_clicked();
    void on_btn_RemoveRange_clicked();
    void on_btn_CreateLinkList_clicked();
    void on_btn_SortList_clicked();

private:
    Ui::MainWindow *ui;
    QList<int> myList;
    std::list<int> myLinkList;
};

#endif // MAINWINDOW_H