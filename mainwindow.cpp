#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QTimer>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    qDebug()<<"fish0 age"<<jay.house.fishes[0].age;
    jay.house.fishes[0].initclock();
    qDebug()<<"clock"<<jay.house.fishes[0].clock<<" "<<jay.house.fishes[0].timer->isActive();
    QTimer *timer=new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(pool()));
    timer->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::pool()
{
    qDebug()<<"clock"<<jay.house.fishes[0].clock;
}
