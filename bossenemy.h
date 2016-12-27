#ifndef BOSSENEMY_H
#define BOSSENEMY_H
#include "enemy.h"
#include <QGraphicsPixmapItem>
#include <QObject>
class BossEnemy:public QObject,public QGraphicsPixmapItem//public Enemy
{

public:
    BossEnemy();
    void shoot();
public slots:
    void move();
private:
    int live;
};

#endif // BOSSENEMY_H
