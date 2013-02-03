#ifndef AQUARIUM_H
#define AQUARIUM_H

#define MAXFISH 1
#include <QObject>
#include <fish.h>
#include <beautify.h>
class Aquarium : public QObject
{
    Q_OBJECT
public:
    explicit Aquarium(QObject *parent = 0);
        int width;
        int height;
        int deep;
        beautify room;
        fish fishes[MAXFISH];
        int feedfish();
        int feed[10];
        QTimer *timer;
signals:
    
public slots:
    
};

#endif // AQUARIUM_H
