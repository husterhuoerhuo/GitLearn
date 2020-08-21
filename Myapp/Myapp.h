#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Myapp.h"
#include<qsystemtrayicon.h>
#include<qpushbutton.h>
class Myapp : public QMainWindow
{
    Q_OBJECT

public:
    Myapp(QWidget *parent = Q_NULLPTR);
public slots:
    void on_clicked();
private:
    Ui::MyappClass ui;
    QSystemTrayIcon* mSystemTrayIcon;
    QPushButton* Btn;
};
