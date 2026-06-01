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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
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
    QPushButton *btn_OpenFile;
    QTextEdit *textEdit_Content;
    QGroupBox *groupBox_Info;
    QLabel *lbl_Modified;
    QLabel *lbl_ModifiedValue;
    QLabel *lbl_FileName;
    QLabel *lbl_FileNameValue;
    QLabel *lbl_Created;
    QLabel *lbl_CreatedValue;
    QLabel *lbl_Size;
    QLabel *lbl_SizeValue;
    QLabel *lbl_Attributes;
    QLabel *lbl_AttributesValue;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        btn_OpenFile = new QPushButton(centralwidget);
        btn_OpenFile->setObjectName("btn_OpenFile");
        btn_OpenFile->setGeometry(QRect(30, 10, 161, 31));
        textEdit_Content = new QTextEdit(centralwidget);
        textEdit_Content->setObjectName("textEdit_Content");
        textEdit_Content->setGeometry(QRect(10, 50, 441, 131));
        groupBox_Info = new QGroupBox(centralwidget);
        groupBox_Info->setObjectName("groupBox_Info");
        groupBox_Info->setGeometry(QRect(10, 180, 281, 281));
        lbl_Modified = new QLabel(groupBox_Info);
        lbl_Modified->setObjectName("lbl_Modified");
        lbl_Modified->setGeometry(QRect(10, 40, 121, 41));
        lbl_ModifiedValue = new QLabel(groupBox_Info);
        lbl_ModifiedValue->setObjectName("lbl_ModifiedValue");
        lbl_ModifiedValue->setGeometry(QRect(120, 50, 121, 21));
        lbl_FileName = new QLabel(groupBox_Info);
        lbl_FileName->setObjectName("lbl_FileName");
        lbl_FileName->setGeometry(QRect(10, 100, 91, 16));
        lbl_FileNameValue = new QLabel(groupBox_Info);
        lbl_FileNameValue->setObjectName("lbl_FileNameValue");
        lbl_FileNameValue->setGeometry(QRect(90, 100, 111, 20));
        lbl_Created = new QLabel(groupBox_Info);
        lbl_Created->setObjectName("lbl_Created");
        lbl_Created->setGeometry(QRect(10, 130, 111, 51));
        lbl_CreatedValue = new QLabel(groupBox_Info);
        lbl_CreatedValue->setObjectName("lbl_CreatedValue");
        lbl_CreatedValue->setGeometry(QRect(110, 150, 131, 21));
        lbl_Size = new QLabel(groupBox_Info);
        lbl_Size->setObjectName("lbl_Size");
        lbl_Size->setGeometry(QRect(10, 190, 61, 31));
        lbl_SizeValue = new QLabel(groupBox_Info);
        lbl_SizeValue->setObjectName("lbl_SizeValue");
        lbl_SizeValue->setGeometry(QRect(70, 200, 101, 21));
        lbl_Attributes = new QLabel(groupBox_Info);
        lbl_Attributes->setObjectName("lbl_Attributes");
        lbl_Attributes->setGeometry(QRect(10, 230, 71, 21));
        lbl_AttributesValue = new QLabel(groupBox_Info);
        lbl_AttributesValue->setObjectName("lbl_AttributesValue");
        lbl_AttributesValue->setGeometry(QRect(80, 230, 111, 21));
        QFont font;
        font.setItalic(false);
        lbl_AttributesValue->setFont(font);
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
        btn_OpenFile->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        groupBox_Info->setTitle(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \321\204\320\260\320\271\320\273\320\265", nullptr));
        lbl_Modified->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217: ", nullptr));
        lbl_ModifiedValue->setText(QString());
        lbl_FileName->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \321\204\320\260\320\271\320\273\320\260:", nullptr));
        lbl_FileNameValue->setText(QString());
        lbl_Created->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \321\201\320\276\320\267\320\264\320\260\320\275\320\270\321\217: ", nullptr));
        lbl_CreatedValue->setText(QString());
        lbl_Size->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200:", nullptr));
        lbl_SizeValue->setText(QString());
        lbl_Attributes->setText(QCoreApplication::translate("MainWindow", "\320\220\321\202\321\200\320\270\320\261\321\203\321\202\321\213: ", nullptr));
        lbl_AttributesValue->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
