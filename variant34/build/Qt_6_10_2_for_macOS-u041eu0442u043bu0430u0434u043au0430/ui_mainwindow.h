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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *lbl_Result;
    QLabel *label_4;
    QLineEdit *lineEdit_SizeLink;
    QTextEdit *textEdit_LinkList;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_SortList;
    QPushButton *btn_CreateLinkList;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_Size;
    QPushButton *btn_CreateList;
    QLineEdit *lineEdit_N;
    QLineEdit *lineEdit_K;
    QPushButton *btn_RemoveRange;
    QTextEdit *textEdit_List;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lbl_Result = new QLabel(centralwidget);
        lbl_Result->setObjectName("lbl_Result");
        lbl_Result->setGeometry(QRect(60, 420, 201, 91));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(360, 50, 161, 21));
        lineEdit_SizeLink = new QLineEdit(centralwidget);
        lineEdit_SizeLink->setObjectName("lineEdit_SizeLink");
        lineEdit_SizeLink->setGeometry(QRect(380, 90, 111, 21));
        textEdit_LinkList = new QTextEdit(centralwidget);
        textEdit_LinkList->setObjectName("textEdit_LinkList");
        textEdit_LinkList->setGeometry(QRect(340, 220, 231, 121));
        textEdit_LinkList->setReadOnly(true);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(340, 130, 213, 66));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btn_SortList = new QPushButton(layoutWidget);
        btn_SortList->setObjectName("btn_SortList");

        verticalLayout->addWidget(btn_SortList);

        btn_CreateLinkList = new QPushButton(layoutWidget);
        btn_CreateLinkList->setObjectName("btn_CreateLinkList");

        verticalLayout->addWidget(btn_CreateLinkList);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(30, 20, 258, 381));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        lineEdit_Size = new QLineEdit(layoutWidget1);
        lineEdit_Size->setObjectName("lineEdit_Size");

        verticalLayout_2->addWidget(lineEdit_Size);

        btn_CreateList = new QPushButton(layoutWidget1);
        btn_CreateList->setObjectName("btn_CreateList");

        verticalLayout_2->addWidget(btn_CreateList);

        lineEdit_N = new QLineEdit(layoutWidget1);
        lineEdit_N->setObjectName("lineEdit_N");

        verticalLayout_2->addWidget(lineEdit_N);

        lineEdit_K = new QLineEdit(layoutWidget1);
        lineEdit_K->setObjectName("lineEdit_K");

        verticalLayout_2->addWidget(lineEdit_K);

        btn_RemoveRange = new QPushButton(layoutWidget1);
        btn_RemoveRange->setObjectName("btn_RemoveRange");

        verticalLayout_2->addWidget(btn_RemoveRange);

        textEdit_List = new QTextEdit(layoutWidget1);
        textEdit_List->setObjectName("textEdit_List");
        textEdit_List->setReadOnly(true);

        verticalLayout_2->addWidget(textEdit_List);

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
        lbl_Result->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200 \321\201\320\262\321\217\320\267\320\275\320\276\320\263\320\276 \321\201\320\277\320\270\321\201\320\272\320\260", nullptr));
        lineEdit_SizeLink->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\200\320\260\320\267\320\274\320\265\321\200", nullptr));
        btn_SortList->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\276 \321\203\320\261\321\213\320\262\320\260\320\275\320\270\321\216", nullptr));
        btn_CreateLinkList->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \321\201\320\262\321\217\320\267\320\275\321\213\320\271 \321\201\320\277\320\270\321\201\320\276\320\272", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200:", nullptr));
        lineEdit_Size->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\200\320\260\320\267\320\274\320\265\321\200", nullptr));
        btn_CreateList->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272", nullptr));
        lineEdit_N->setPlaceholderText(QCoreApplication::translate("MainWindow", "N", nullptr));
        lineEdit_K->setPlaceholderText(QCoreApplication::translate("MainWindow", "K", nullptr));
        btn_RemoveRange->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201 N \320\277\320\276 K", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
