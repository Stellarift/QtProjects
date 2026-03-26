/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_Number;
    QLineEdit *lineEdit_Number;
    QPushButton *pushButton_Number;
    QLabel *lbl_NumberResult;
    QLabel *label_X;
    QLabel *label_Y;
    QLabel *label_Z;
    QLineEdit *lineEdit_X;
    QLineEdit *lineEdit_Y;
    QLineEdit *lineEdit_Z;
    QPushButton *pushButton_Sort;
    QLabel *lbl_SortResult;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_Number = new QLabel(centralwidget);
        label_Number->setObjectName("label_Number");
        label_Number->setGeometry(QRect(80, 30, 201, 16));
        lineEdit_Number = new QLineEdit(centralwidget);
        lineEdit_Number->setObjectName("lineEdit_Number");
        lineEdit_Number->setGeometry(QRect(90, 60, 113, 21));
        pushButton_Number = new QPushButton(centralwidget);
        pushButton_Number->setObjectName("pushButton_Number");
        pushButton_Number->setGeometry(QRect(90, 80, 111, 31));
        lbl_NumberResult = new QLabel(centralwidget);
        lbl_NumberResult->setObjectName("lbl_NumberResult");
        lbl_NumberResult->setGeometry(QRect(80, 110, 291, 71));
        label_X = new QLabel(centralwidget);
        label_X->setObjectName("label_X");
        label_X->setGeometry(QRect(20, 210, 16, 16));
        label_Y = new QLabel(centralwidget);
        label_Y->setObjectName("label_Y");
        label_Y->setGeometry(QRect(160, 210, 21, 16));
        label_Z = new QLabel(centralwidget);
        label_Z->setObjectName("label_Z");
        label_Z->setGeometry(QRect(280, 210, 21, 16));
        lineEdit_X = new QLineEdit(centralwidget);
        lineEdit_X->setObjectName("lineEdit_X");
        lineEdit_X->setGeometry(QRect(20, 230, 113, 21));
        lineEdit_Y = new QLineEdit(centralwidget);
        lineEdit_Y->setObjectName("lineEdit_Y");
        lineEdit_Y->setGeometry(QRect(150, 230, 113, 21));
        lineEdit_Z = new QLineEdit(centralwidget);
        lineEdit_Z->setObjectName("lineEdit_Z");
        lineEdit_Z->setGeometry(QRect(270, 230, 113, 21));
        pushButton_Sort = new QPushButton(centralwidget);
        pushButton_Sort->setObjectName("pushButton_Sort");
        pushButton_Sort->setGeometry(QRect(120, 270, 181, 31));
        lbl_SortResult = new QLabel(centralwidget);
        lbl_SortResult->setObjectName("lbl_SortResult");
        lbl_SortResult->setGeometry(QRect(110, 330, 201, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 29));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_Number->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\276 (-999 \320\264\320\276 999):", nullptr));
        pushButton_Number->setText(QCoreApplication::translate("MainWindow", "\320\236\320\277\320\270\321\201\320\260\321\202\321\214 \321\207\320\270\321\201\320\273\320\276", nullptr));
        lbl_NumberResult->setText(QString());
        label_X->setText(QCoreApplication::translate("MainWindow", "X:", nullptr));
        label_Y->setText(QCoreApplication::translate("MainWindow", "Y:", nullptr));
        label_Z->setText(QCoreApplication::translate("MainWindow", "Z:", nullptr));
        pushButton_Sort->setText(QCoreApplication::translate("MainWindow", "\320\243\320\277\320\276\321\200\321\217\320\264\320\276\321\207\320\270\321\202\321\214 \320\277\320\276 \321\203\320\261\321\213\320\262\320\260\320\275\320\270\321\216", nullptr));
        lbl_SortResult->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
