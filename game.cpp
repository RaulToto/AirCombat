#include "game.h"
#include "healht.h"
#include "basicenemy.h"
#include <iostream>
#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include <QImage>
using namespace std;
Game::Game(QWidget *parent)
{
    //create the scene---------------------------------------
    scene= new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);//make the scene 800X600
    setBackgroundBrush(QBrush(QImage(":/images/images/Background.png")));

    setScene(scene);
    //difine size of scene-----------------------------------
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);//size of scene

    //crete player--------------------------------------------
    player= new Player();
    player->setPos(400,500);//pos of player in start game
    //make a setFocusable-------------------------------------
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    //add player at to scene----------------------------------
    scene->addItem(player);
    //create a score------------------------------------------
    score= new Score();
    scene->addItem(score);

    //create a health-----------------------------------------
    healht = new Healht();
    healht->setPos(score->pos().x(),score->pos().y()+20);
    scene->addItem(healht);
    //spawn de enmies-----------------------------------------
    QTimer *timer= new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),player,SLOT(spawn()));


    timer->start(2000);
    //cout <<healht->vida;

    show();


}
