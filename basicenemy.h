#ifndef BASICENEMY_H
#define BASICENEMY_H
#include "enemy.h"
#include <QObject>
#include <QGraphicsPixmapItem>

class BasicEnemy:public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    BasicEnemy();


public slots:
    void move();
private:
    int live;
};


#endif // BASICENEMY_H
