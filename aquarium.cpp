#include "aquarium.h"
#include <QTimer>
Aquarium::Aquarium(QObject *parent) :
    QObject(parent)
{
    int i;
    for(i=0;i<MAXFISH;i++)
    {
        fishes[i].age=1;
        fishes[i].eat=1;
        fishes[i].gender=1;
        fishes[i].health=100;
        fishes[i].size=1;
    }
    feed[0]=1000;
}
int Aquarium::feedfish()
{
    if(feed[0]<0)
        return -1; //飼料不足
    feed[0]--;
    if(fishes[0].eat>0)
    {
        fishes[0].eat--;
    }
        return 0;
}
