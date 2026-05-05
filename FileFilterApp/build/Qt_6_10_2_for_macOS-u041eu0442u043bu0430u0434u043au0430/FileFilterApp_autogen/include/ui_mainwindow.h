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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
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
    QLabel *lbl_InputFile;
    QLineEdit *lineEdit_InputFile;
    QPushButton *btn_SelectInput;
    QLabel *lbl_OutputFile;
    QLineEdit *lineEdit_OutputFile;
    QPushButton *btn_SelectOutput;
    QGroupBox *groupBox_Filters;
    QCheckBox *cb_Even;
    QCheckBox *cb_DivisibleBy3Not7;
    QCheckBox *cb_PerfectSquares;
    QPushButton *btn_Process;
    QTextEdit *textEdit_Result;
    QLabel *lbl_Status;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lbl_InputFile = new QLabel(centralwidget);
        lbl_InputFile->setObjectName("lbl_InputFile");
        lbl_InputFile->setGeometry(QRect(40, 30, 111, 21));
        lineEdit_InputFile = new QLineEdit(centralwidget);
        lineEdit_InputFile->setObjectName("lineEdit_InputFile");
        lineEdit_InputFile->setGeometry(QRect(160, 20, 161, 41));
        btn_SelectInput = new QPushButton(centralwidget);
        btn_SelectInput->setObjectName("btn_SelectInput");
        btn_SelectInput->setGeometry(QRect(340, 20, 111, 31));
        lbl_OutputFile = new QLabel(centralwidget);
        lbl_OutputFile->setObjectName("lbl_OutputFile");
        lbl_OutputFile->setGeometry(QRect(30, 80, 131, 21));
        lineEdit_OutputFile = new QLineEdit(centralwidget);
        lineEdit_OutputFile->setObjectName("lineEdit_OutputFile");
        lineEdit_OutputFile->setGeometry(QRect(170, 70, 121, 41));
        btn_SelectOutput = new QPushButton(centralwidget);
        btn_SelectOutput->setObjectName("btn_SelectOutput");
        btn_SelectOutput->setGeometry(QRect(300, 70, 121, 31));
        groupBox_Filters = new QGroupBox(centralwidget);
        groupBox_Filters->setObjectName("groupBox_Filters");
        groupBox_Filters->setGeometry(QRect(30, 110, 251, 151));
        cb_Even = new QCheckBox(groupBox_Filters);
        cb_Even->setObjectName("cb_Even");
        cb_Even->setGeometry(QRect(10, 30, 121, 21));
        cb_DivisibleBy3Not7 = new QCheckBox(groupBox_Filters);
        cb_DivisibleBy3Not7->setObjectName("cb_DivisibleBy3Not7");
        cb_DivisibleBy3Not7->setGeometry(QRect(10, 60, 201, 31));
        cb_PerfectSquares = new QCheckBox(groupBox_Filters);
        cb_PerfectSquares->setObjectName("cb_PerfectSquares");
        cb_PerfectSquares->setGeometry(QRect(10, 100, 161, 21));
        btn_Process = new QPushButton(centralwidget);
        btn_Process->setObjectName("btn_Process");
        btn_Process->setGeometry(QRect(40, 270, 100, 32));
        textEdit_Result = new QTextEdit(centralwidget);
        textEdit_Result->setObjectName("textEdit_Result");
        textEdit_Result->setGeometry(QRect(30, 300, 361, 181));
        lbl_Status = new QLabel(centralwidget);
        lbl_Status->setObjectName("lbl_Status");
        lbl_Status->setGeometry(QRect(50, 500, 58, 16));
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
        lbl_InputFile->setText(QCoreApplication::translate("MainWindow", "\320\222\321\205\320\276\320\264\320\275\320\276\320\271 \321\204\320\260\320\271\320\273 f:", nullptr));
        lineEdit_InputFile->setPlaceholderText(QCoreApplication::translate("MainWindow", "input.txt", nullptr));
        btn_SelectInput->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        lbl_OutputFile->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264\320\275\320\276\320\271 \321\204\320\260\320\271\320\273 g:", nullptr));
        lineEdit_OutputFile->setPlaceholderText(QCoreApplication::translate("MainWindow", "output.txt", nullptr));
        btn_SelectOutput->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        groupBox_Filters->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\270\320\273\321\214\321\202\321\200\321\213", nullptr));
        cb_Even->setText(QCoreApplication::translate("MainWindow", "\320\247\321\221\321\202\320\275\321\213\320\265 \321\207\320\270\321\201\320\273\320\260", nullptr));
        cb_DivisibleBy3Not7->setText(QCoreApplication::translate("MainWindow", "\320\224\320\265\320\273\321\217\321\211\320\270\320\265\321\201\321\217 \320\275\320\260 3 \320\270 \320\275\320\265 \320\275\320\260 7", nullptr));
        cb_PerfectSquares->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\321\207\320\275\321\213\320\265 \320\272\320\262\320\260\320\264\321\200\320\260\321\202\321\213", nullptr));
        btn_Process->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\320\261\320\276\321\202\320\260\321\202\321\214", nullptr));
        lbl_Status->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\321\202\320\276\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
