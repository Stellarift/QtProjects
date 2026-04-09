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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_Stack;
    QVBoxLayout *verticalLayout;
    QLabel *lbl_StackResult;
    QPushButton *btn_CreateStack;
    QPushButton *btn_TransformStack;
    QTextEdit *textEdit_Stack;
    QGroupBox *groupBox_Queue;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbl_QueueResult;
    QPushButton *btn_CreateQueue;
    QPushButton *btn_AvgQueue;
    QTextEdit *textEdit_Queue;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox_Stack = new QGroupBox(centralwidget);
        groupBox_Stack->setObjectName("groupBox_Stack");
        groupBox_Stack->setGeometry(QRect(50, 80, 286, 339));
        verticalLayout = new QVBoxLayout(groupBox_Stack);
        verticalLayout->setObjectName("verticalLayout");
        lbl_StackResult = new QLabel(groupBox_Stack);
        lbl_StackResult->setObjectName("lbl_StackResult");

        verticalLayout->addWidget(lbl_StackResult);

        btn_CreateStack = new QPushButton(groupBox_Stack);
        btn_CreateStack->setObjectName("btn_CreateStack");

        verticalLayout->addWidget(btn_CreateStack);

        btn_TransformStack = new QPushButton(groupBox_Stack);
        btn_TransformStack->setObjectName("btn_TransformStack");

        verticalLayout->addWidget(btn_TransformStack);

        textEdit_Stack = new QTextEdit(groupBox_Stack);
        textEdit_Stack->setObjectName("textEdit_Stack");

        verticalLayout->addWidget(textEdit_Stack);

        groupBox_Queue = new QGroupBox(centralwidget);
        groupBox_Queue->setObjectName("groupBox_Queue");
        groupBox_Queue->setGeometry(QRect(390, 80, 286, 339));
        verticalLayout_2 = new QVBoxLayout(groupBox_Queue);
        verticalLayout_2->setObjectName("verticalLayout_2");
        lbl_QueueResult = new QLabel(groupBox_Queue);
        lbl_QueueResult->setObjectName("lbl_QueueResult");

        verticalLayout_2->addWidget(lbl_QueueResult);

        btn_CreateQueue = new QPushButton(groupBox_Queue);
        btn_CreateQueue->setObjectName("btn_CreateQueue");

        verticalLayout_2->addWidget(btn_CreateQueue);

        btn_AvgQueue = new QPushButton(groupBox_Queue);
        btn_AvgQueue->setObjectName("btn_AvgQueue");

        verticalLayout_2->addWidget(btn_AvgQueue);

        textEdit_Queue = new QTextEdit(groupBox_Queue);
        textEdit_Queue->setObjectName("textEdit_Queue");

        verticalLayout_2->addWidget(textEdit_Queue);

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
        groupBox_Stack->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\242\320\225\320\232 (8 \321\207\320\270\321\201\320\265\320\273)", nullptr));
        lbl_StackResult->setText(QString());
        btn_CreateStack->setText(QCoreApplication::translate("MainWindow", "\320\241\321\204\320\276\321\200\320\274\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\201\321\202\320\265\320\272", nullptr));
        btn_TransformStack->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\321\213", nullptr));
        groupBox_Queue->setTitle(QCoreApplication::translate("MainWindow", "\320\236\320\247\320\225\320\240\320\225\320\224\320\254 (8 \321\207\320\270\321\201\320\265\320\273, [-20;50])", nullptr));
        lbl_QueueResult->setText(QString());
        btn_CreateQueue->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\321\214 \320\276\321\207\320\265\321\200\320\265\320\264\321\214", nullptr));
        btn_AvgQueue->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200. \320\260\321\200\320\270\321\204\320\274. \321\201\320\276\321\201\320\265\320\264\320\265\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
