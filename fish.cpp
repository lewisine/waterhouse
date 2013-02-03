#include "fish.h"
#include <QDebug>
#include <QTimer>
fish::fish(QObject *parent) :
    QObject(parent)
{

    clock=0;
}
int fish::initclock()
{
    timer=new QTimer(this);
    connect(this->timer, SIGNAL(timeout()), this, SLOT(live()));
    timer->start(60000);
    return 0;
}
int fish::live()
{
    clock++;
    if(clock % 480 == 0) //8 hr = 480 min
    {
        eat=health/10*size;
      //  qDebug()<<"eat clock"<<clock;

    }
    else if(clock % 1440 == 0)
    {
        age++;
        clock=0;
    }
    else if(clock % 60 == 0)
    {
        if(eat<(health/10*size))
            eat++;
    }
    //qDebug()<<"clock"<<clock;
    return 0;
}

