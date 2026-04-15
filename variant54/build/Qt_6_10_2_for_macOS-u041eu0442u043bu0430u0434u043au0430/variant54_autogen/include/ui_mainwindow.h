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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbl_Countries;
    QLabel *lbl_Cars;
    QComboBox *combo_Country;
    QComboBox *combo_Car;
    QPushButton *btn_AddSupply;
    QListWidget *list_Supplies;
    QPushButton *btn_Analyze;
    QTextEdit *textEdit_Result;
    QPushButton *btn_ClearResult;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(90, 20, 241, 511));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lbl_Countries = new QLabel(layoutWidget);
        lbl_Countries->setObjectName("lbl_Countries");

        verticalLayout_2->addWidget(lbl_Countries);

        lbl_Cars = new QLabel(layoutWidget);
        lbl_Cars->setObjectName("lbl_Cars");

        verticalLayout_2->addWidget(lbl_Cars);

        combo_Country = new QComboBox(layoutWidget);
        combo_Country->setObjectName("combo_Country");

        verticalLayout_2->addWidget(combo_Country);

        combo_Car = new QComboBox(layoutWidget);
        combo_Car->setObjectName("combo_Car");

        verticalLayout_2->addWidget(combo_Car);

        btn_AddSupply = new QPushButton(layoutWidget);
        btn_AddSupply->setObjectName("btn_AddSupply");

        verticalLayout_2->addWidget(btn_AddSupply);

        list_Supplies = new QListWidget(layoutWidget);
        list_Supplies->setObjectName("list_Supplies");

        verticalLayout_2->addWidget(list_Supplies);

        btn_Analyze = new QPushButton(layoutWidget);
        btn_Analyze->setObjectName("btn_Analyze");

        verticalLayout_2->addWidget(btn_Analyze);

        textEdit_Result = new QTextEdit(layoutWidget);
        textEdit_Result->setObjectName("textEdit_Result");

        verticalLayout_2->addWidget(textEdit_Result);

        btn_ClearResult = new QPushButton(centralwidget);
        btn_ClearResult->setObjectName("btn_ClearResult");
        btn_ClearResult->setGeometry(QRect(430, 100, 151, 31));
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
        lbl_Countries->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\201\321\202\321\200\320\260\320\275\321\203", nullptr));
        lbl_Cars->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\274\320\260\321\200\320\272\321\203", nullptr));
        btn_AddSupply->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\276\321\201\321\202\320\260\320\262\320\272\321\203", nullptr));
        btn_Analyze->setText(QCoreApplication::translate("MainWindow", "\320\220\320\275\320\260\320\273\320\270\320\267\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        btn_ClearResult->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
