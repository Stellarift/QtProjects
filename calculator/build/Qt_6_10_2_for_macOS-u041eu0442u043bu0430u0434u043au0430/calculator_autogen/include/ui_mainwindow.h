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
#include <QtWidgets/QGridLayout>
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
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btn_Tan;
    QPushButton *btn_Div;
    QPushButton *btn_0;
    QPushButton *btn_MPlus;
    QPushButton *btn_Equals;
    QPushButton *btn_2;
    QPushButton *btn_MR;
    QPushButton *btn_MS;
    QPushButton *btn_5;
    QPushButton *btn_Dot;
    QPushButton *btn_Sub;
    QPushButton *btn_4;
    QPushButton *btn_8;
    QPushButton *btn_Mul;
    QPushButton *btn_7;
    QPushButton *btn_3;
    QPushButton *btn_Add;
    QPushButton *btn_9;
    QPushButton *btn_1;
    QPushButton *btn_MC;
    QPushButton *btn_6;
    QPushButton *btn_MMinus;
    QPushButton *btn_Clear;
    QPushButton *btn_PM;
    QPushButton *btn_10x;
    QPushButton *btn_Pow3;
    QPushButton *btn_Fact;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(210, 90, 241, 81));
        QFont font;
        font.setPointSize(16);
        lineEdit->setFont(font);
        lineEdit->setMaxLength(10);
        lineEdit->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(210, 170, 241, 71));
        lineEdit_2->setFont(font);
        lineEdit_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(210, 240, 244, 236));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_Tan = new QPushButton(layoutWidget);
        btn_Tan->setObjectName("btn_Tan");

        gridLayout->addWidget(btn_Tan, 5, 3, 1, 1);

        btn_Div = new QPushButton(layoutWidget);
        btn_Div->setObjectName("btn_Div");

        gridLayout->addWidget(btn_Div, 0, 0, 1, 1);

        btn_0 = new QPushButton(layoutWidget);
        btn_0->setObjectName("btn_0");

        gridLayout->addWidget(btn_0, 3, 3, 1, 1);

        btn_MPlus = new QPushButton(layoutWidget);
        btn_MPlus->setObjectName("btn_MPlus");

        gridLayout->addWidget(btn_MPlus, 5, 1, 1, 1);

        btn_Equals = new QPushButton(layoutWidget);
        btn_Equals->setObjectName("btn_Equals");

        gridLayout->addWidget(btn_Equals, 4, 2, 1, 1);

        btn_2 = new QPushButton(layoutWidget);
        btn_2->setObjectName("btn_2");

        gridLayout->addWidget(btn_2, 3, 1, 1, 1);

        btn_MR = new QPushButton(layoutWidget);
        btn_MR->setObjectName("btn_MR");

        gridLayout->addWidget(btn_MR, 4, 0, 1, 1);

        btn_MS = new QPushButton(layoutWidget);
        btn_MS->setObjectName("btn_MS");

        gridLayout->addWidget(btn_MS, 5, 0, 1, 1);

        btn_5 = new QPushButton(layoutWidget);
        btn_5->setObjectName("btn_5");

        gridLayout->addWidget(btn_5, 2, 1, 1, 1);

        btn_Dot = new QPushButton(layoutWidget);
        btn_Dot->setObjectName("btn_Dot");

        gridLayout->addWidget(btn_Dot, 4, 3, 1, 1);

        btn_Sub = new QPushButton(layoutWidget);
        btn_Sub->setObjectName("btn_Sub");

        gridLayout->addWidget(btn_Sub, 1, 3, 1, 1);

        btn_4 = new QPushButton(layoutWidget);
        btn_4->setObjectName("btn_4");

        gridLayout->addWidget(btn_4, 2, 0, 1, 1);

        btn_8 = new QPushButton(layoutWidget);
        btn_8->setObjectName("btn_8");

        gridLayout->addWidget(btn_8, 1, 1, 1, 1);

        btn_Mul = new QPushButton(layoutWidget);
        btn_Mul->setObjectName("btn_Mul");

        gridLayout->addWidget(btn_Mul, 0, 3, 1, 1);

        btn_7 = new QPushButton(layoutWidget);
        btn_7->setObjectName("btn_7");

        gridLayout->addWidget(btn_7, 1, 0, 1, 1);

        btn_3 = new QPushButton(layoutWidget);
        btn_3->setObjectName("btn_3");

        gridLayout->addWidget(btn_3, 3, 2, 1, 1);

        btn_Add = new QPushButton(layoutWidget);
        btn_Add->setObjectName("btn_Add");

        gridLayout->addWidget(btn_Add, 2, 3, 1, 1);

        btn_9 = new QPushButton(layoutWidget);
        btn_9->setObjectName("btn_9");

        gridLayout->addWidget(btn_9, 1, 2, 1, 1);

        btn_1 = new QPushButton(layoutWidget);
        btn_1->setObjectName("btn_1");

        gridLayout->addWidget(btn_1, 3, 0, 1, 1);

        btn_MC = new QPushButton(layoutWidget);
        btn_MC->setObjectName("btn_MC");

        gridLayout->addWidget(btn_MC, 4, 1, 1, 1);

        btn_6 = new QPushButton(layoutWidget);
        btn_6->setObjectName("btn_6");

        gridLayout->addWidget(btn_6, 2, 2, 1, 1);

        btn_MMinus = new QPushButton(layoutWidget);
        btn_MMinus->setObjectName("btn_MMinus");

        gridLayout->addWidget(btn_MMinus, 5, 2, 1, 1);

        btn_Clear = new QPushButton(layoutWidget);
        btn_Clear->setObjectName("btn_Clear");

        gridLayout->addWidget(btn_Clear, 0, 1, 1, 1);

        btn_PM = new QPushButton(layoutWidget);
        btn_PM->setObjectName("btn_PM");

        gridLayout->addWidget(btn_PM, 0, 2, 1, 1);

        btn_10x = new QPushButton(layoutWidget);
        btn_10x->setObjectName("btn_10x");

        gridLayout->addWidget(btn_10x, 6, 3, 1, 1);

        btn_Pow3 = new QPushButton(layoutWidget);
        btn_Pow3->setObjectName("btn_Pow3");

        gridLayout->addWidget(btn_Pow3, 6, 2, 1, 1);

        btn_Fact = new QPushButton(layoutWidget);
        btn_Fact->setObjectName("btn_Fact");

        gridLayout->addWidget(btn_Fact, 6, 1, 1, 1);

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
        btn_Tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        btn_Div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btn_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btn_MPlus->setText(QCoreApplication::translate("MainWindow", "M+", nullptr));
        btn_Equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btn_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn_MR->setText(QCoreApplication::translate("MainWindow", "MR", nullptr));
        btn_MS->setText(QCoreApplication::translate("MainWindow", "MS", nullptr));
        btn_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn_Dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        btn_Sub->setText(QCoreApplication::translate("MainWindow", "\342\200\223", nullptr));
        btn_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn_Mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btn_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btn_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btn_Add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btn_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn_MC->setText(QCoreApplication::translate("MainWindow", "MC", nullptr));
        btn_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btn_MMinus->setText(QCoreApplication::translate("MainWindow", "M\342\200\223", nullptr));
        btn_Clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        btn_PM->setText(QCoreApplication::translate("MainWindow", "+/\342\200\223", nullptr));
        btn_10x->setText(QCoreApplication::translate("MainWindow", "10\313\243", nullptr));
        btn_Pow3->setText(QCoreApplication::translate("MainWindow", "x\302\263", nullptr));
        btn_Fact->setText(QCoreApplication::translate("MainWindow", "x!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
