#ifndef PLAYER_H
#define PLAYER_H
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QObject>
class Player:public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Player();
    void keyPressEvent(QKeyEvent *event);

public slots:
    void spawn();
};

#endif // PLAYER_H
