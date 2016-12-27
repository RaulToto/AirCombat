#include "bullet.h"
#include "game.h"
#include "basicenemy.h"
#include <QTimer>
#include <QDebug>
#include <QGraphicsScene>
#include <QList>
#include <typeinfo>
//extern variable
extern Game *game;
Bullet::Bullet(int speed)
{
    this->vel=speed;
    //draw the bullet
    if (speed>0)
    {
        setPixmap(QPixmap(":/images/images/Bullet.png"));
        setTransformOriginPoint(50,50);
        setRotation(180);
    }
    else
        setPixmap(QPixmap(":/images/images/Missle.png"));
    //connect
    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);
}
void Bullet::move()
{
    //if bullet collides with enemy ,destroy both
    QList<QGraphicsItem *> colliding_items=collidingItems();
    if(this->vel<0){


        for (int i = 0, n = colliding_items.size();i<n; ++i) {
            if(typeid(*(colliding_items[i]))==typeid(BasicEnemy))
            {
                game->score->increase();
                //game->basicenemy->enemyLiveDecrease();
                //remove them bhot
                scene()->removeItem(colliding_items[i]);
                scene()->removeItem(this);
                //delete them
                delete colliding_items[i];
                delete this;
                return ;

            }

        }


    }
    int j=0;
    if(this->vel>0)
    {
        for (int i = 0, n = colliding_items.size();i<n; ++i) {
            if(typeid(*(colliding_items[i]))==typeid(Player))
            {
                j++;

            }
        }
        if(j==1)
        {
            game->healht->decrease();

        }
    }



    //move bullet up
    setPos(x(),y()+this->vel);
    if(pos().y()<0)
    {
        scene()->removeItem(this);
        delete this;
        //qDebug() << "delete bullet" ;

    }

}
