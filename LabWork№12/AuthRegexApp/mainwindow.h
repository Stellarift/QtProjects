#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>

struct User {
    QString login;
    QString password;
};

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
    void on_btn_Login_clicked();

private:
    Ui::MainWindow *ui;
    QVector<User> users;
    void loadUsers();
};

#endif // MAINWINDOW_H
