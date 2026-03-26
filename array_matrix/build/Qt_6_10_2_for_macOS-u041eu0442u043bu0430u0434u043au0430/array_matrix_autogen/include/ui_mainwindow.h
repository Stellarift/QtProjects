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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *lineEdit_N;
    QTextEdit *textEdit_Array;
    QPushButton *pushButton_Array;
    QLabel *label_ArrayResult;
    QLabel *label_m;
    QLabel *label_n;
    QLineEdit *lineEdit_m;
    QLineEdit *lineEdit_n;
    QTextEdit *textEdit_Matrix;
    QPushButton *pushButton_Matrix;
    QLabel *label_MatrixResult;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 40, 151, 16));
        lineEdit_N = new QLineEdit(centralwidget);
        lineEdit_N->setObjectName("lineEdit_N");
        lineEdit_N->setGeometry(QRect(90, 80, 261, 31));
        textEdit_Array = new QTextEdit(centralwidget);
        textEdit_Array->setObjectName("textEdit_Array");
        textEdit_Array->setGeometry(QRect(90, 120, 301, 71));
        pushButton_Array = new QPushButton(centralwidget);
        pushButton_Array->setObjectName("pushButton_Array");
        pushButton_Array->setGeometry(QRect(90, 210, 181, 31));
        label_ArrayResult = new QLabel(centralwidget);
        label_ArrayResult->setObjectName("label_ArrayResult");
        label_ArrayResult->setGeometry(QRect(80, 260, 201, 121));
        label_m = new QLabel(centralwidget);
        label_m->setObjectName("label_m");
        label_m->setGeometry(QRect(450, 60, 161, 16));
        label_n = new QLabel(centralwidget);
        label_n->setObjectName("label_n");
        label_n->setGeometry(QRect(620, 60, 151, 16));
        lineEdit_m = new QLineEdit(centralwidget);
        lineEdit_m->setObjectName("lineEdit_m");
        lineEdit_m->setGeometry(QRect(460, 100, 113, 21));
        lineEdit_n = new QLineEdit(centralwidget);
        lineEdit_n->setObjectName("lineEdit_n");
        lineEdit_n->setGeometry(QRect(630, 100, 113, 21));
        textEdit_Matrix = new QTextEdit(centralwidget);
        textEdit_Matrix->setObjectName("textEdit_Matrix");
        textEdit_Matrix->setGeometry(QRect(450, 130, 331, 121));
        pushButton_Matrix = new QPushButton(centralwidget);
        pushButton_Matrix->setObjectName("pushButton_Matrix");
        pushButton_Matrix->setGeometry(QRect(530, 250, 161, 51));
        label_MatrixResult = new QLabel(centralwidget);
        label_MatrixResult->setObjectName("label_MatrixResult");
        label_MatrixResult->setGeometry(QRect(490, 340, 241, 131));
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
        label->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200 \320\274\320\260\321\201\321\201\320\270\320\262\320\260 N:", nullptr));
        lineEdit_N->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 N:", nullptr));
        textEdit_Array->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\321\213 \321\207\320\265\321\200\320\265\320\267 \320\277\321\200\320\276\320\261\320\265\320\273", nullptr));
        pushButton_Array->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\321\202\321\214 \320\274\320\260\321\201\321\201\320\270\320\262", nullptr));
        label_ArrayResult->setText(QString());
        label_m->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\321\200\320\276\320\272 m:", nullptr));
        label_n->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\320\276\320\273\320\261\321\206\320\276\320\262 n:", nullptr));
        lineEdit_m->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 m", nullptr));
        lineEdit_n->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 n:", nullptr));
        textEdit_Matrix->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\274\320\260\321\202\321\200\320\270\321\206\321\203 \320\277\320\276 \321\201\321\202\321\200\320\276\320\272\320\260\320\274, \321\207\320\270\321\201\320\273\320\260 \321\207\320\265\321\200\320\265\320\267 \320\277\321\200\320\276\320\261\320\265\320\273", nullptr));
        pushButton_Matrix->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\320\261\320\276\321\202\320\260\321\202\321\214 \320\274\320\260\321\202\321\200\320\270\321\206\321\203", nullptr));
        label_MatrixResult->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
