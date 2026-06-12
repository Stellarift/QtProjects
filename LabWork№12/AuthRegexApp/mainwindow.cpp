#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QRegularExpression>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("Авторизация");
    setFixedSize(400, 300);

    ui->textEdit_Result->setReadOnly(true);

    loadUsers();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadUsers()
{
    // 10 пользователей
    users.push_back({"admin", "admin123"});
    users.push_back({"user1", "pass1234"});
    users.push_back({"ivan", "ivan2024"});
    users.push_back({"petrov", "petrov567"});
    users.push_back({"sidorov", "sidor890"});
    users.push_back({"alex", "alex321"});
    users.push_back({"maria", "maria111"});
    users.push_back({"olga", "olga222"});
    users.push_back({"dmitry", "dmitry333"});
    users.push_back({"elena", "elena444"});
}

void MainWindow::on_btn_Login_clicked()
{
    QString login = ui->lineEdit_Login->text();
    QString password = ui->lineEdit_Password->text();

    // Регулярные выражения для проверки формата
    QRegularExpression loginRegex("^[a-zA-Z0-9]{3,15}$");
    QRegularExpression passwordRegex("^[a-zA-Z0-9!@#$%^&*]{4,20}$");

    if (!loginRegex.match(login).hasMatch()) {
        ui->textEdit_Result->setText("Ошибка: Логин должен содержать 3-15 букв или цифр");
        return;
    }

    if (!passwordRegex.match(password).hasMatch()) {
        ui->textEdit_Result->setText("Ошибка: Пароль должен содержать 4-20 символов");
        return;
    }

    // Поиск пользователя
    bool found = false;
    for (const User &user : users) {
        if (user.login == login && user.password == password) {
            found = true;
            break;
        }
    }

    if (found) {
        ui->textEdit_Result->setText("Авторизация успешна!\nДобро пожаловать, " + login + ".");
    } else {
        ui->textEdit_Result->setText("Ошибка: Неверный логин или пароль.");
    }
}