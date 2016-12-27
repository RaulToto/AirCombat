/**
  *
  *
  */
#include "game.h"
#include "player.h"
#include "bullet.h"
#include "basicenemy.h"
#include "bossenemy.h"
#include <QKeyEvent>
#include <QDebug>
int velocidad = 20;
extern Game *game;
Player::Player()
{
    setPixmap(QPixmap(":/images/images/Player.png"));

}

void Player::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Left || event->key()=='A' )
    {
        if(pos().x()>0)
        setPos(x()-velocidad,y());
    }
    else if(event->key()==Qt::Key_Right || event->key()=='D')
    {
        if(pos().x()+100<800)
        setPos(x()+velocidad,y());
    }
    /*else if(event->key()==Qt::Key_Up)
    {
        setPos(x(),y()-velocidad);
    }
    else if(event->key()==Qt::Key_Down)
    {
        setPos(x(),y()+velocidad);
    }*/
    else if (event->key()==Qt::Key_Space || event->key()=='X')
    {
        Bullet *bullet = new Bullet(-10);
        bullet->setPos(x(),y());
        scene()->addItem(bullet);

        Bullet *bullet1= new Bullet(-10);
        bullet1->setPos(x()+100,y());
        scene()->addItem(bullet1);

    }
}

void Player::spawn()
{
    //create a enemy
    BasicEnemy *basicenemy= new BasicEnemy();
    //enemy->shoot();
    scene()->addItem(basicenemy);
    Bullet *bullet = new Bullet(+10);
    bullet->setPos(basicenemy->pos().x(),basicenemy->pos().y()+70);
    scene()->addItem(bullet);
    //qDebug() << game->basicenemy->getLive();
}
