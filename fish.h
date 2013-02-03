#ifndef FISH_H
#define FISH_H
#include <QTimer>
#include <QObject>

class fish : public QObject
{
    Q_OBJECT
public:
    explicit fish(QObject *parent = 0);
    int age;
    int gender;
    int size;
    int eat;
    int health;
    int clock;
    QTimer *timer;
    int initclock();
signals:
    
public slots:

     int live();
    
};

#endif // FISH_H
