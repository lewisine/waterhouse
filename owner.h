#ifndef OWNER_H
#define OWNER_H

#include <QObject>
#include <aquarium.h>

class owner : public QObject
{
    Q_OBJECT
public:
    explicit owner(QObject *parent = 0);
    Aquarium house;
    
signals:
    
public slots:
    
};

#endif // OWNER_H
