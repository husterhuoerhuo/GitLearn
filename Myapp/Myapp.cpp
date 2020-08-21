#include "Myapp.h"

Myapp::Myapp(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    this->setWindowIcon(QIcon(":/Myapp/Resource/03.ico"));

    mSystemTrayIcon = new QSystemTrayIcon(this);
    Btn = new QPushButton(this);
    Btn->move(100, 100);
    Btn->setText(QString("click"));
    connect(Btn, &QPushButton::clicked, this, &Myapp::on_clicked);
}

void Myapp::on_clicked()
{
    this->hide();
    mSystemTrayIcon->setIcon(QIcon(":/Myapp/Resource/02.ico"));
    mSystemTrayIcon->setToolTip(QString("hello world"));
    mSystemTrayIcon->show();
}
