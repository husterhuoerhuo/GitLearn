/********************************************************************************
** Form generated from reading UI file 'Myapp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYAPP_H
#define UI_MYAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyappClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyappClass)
    {
        if (MyappClass->objectName().isEmpty())
            MyappClass->setObjectName(QString::fromUtf8("MyappClass"));
        MyappClass->resize(600, 400);
        menuBar = new QMenuBar(MyappClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        MyappClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyappClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MyappClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(MyappClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MyappClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MyappClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MyappClass->setStatusBar(statusBar);

        retranslateUi(MyappClass);

        QMetaObject::connectSlotsByName(MyappClass);
    } // setupUi

    void retranslateUi(QMainWindow *MyappClass)
    {
        MyappClass->setWindowTitle(QApplication::translate("MyappClass", "Myapp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyappClass: public Ui_MyappClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYAPP_H
