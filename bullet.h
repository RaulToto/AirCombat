#ifndef BULLET_H
#define BULLET_H
#include <QGraphicsPixmapItem>
#include <QObject>
class Bullet:public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Bullet(int);
public slots:
    void move();
private:
    int vel;

};

#endif // BULLET_H
