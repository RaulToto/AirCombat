#include "basicenemy.h"
#include "bullet.h"
#include <QGraphicsScene>
#include <QDebug>
#include <QTimer>
#include <QList>
#include <typeinfo>
//lib c++11
#include <iostream>
#include <random>
#include <ctime>
#include <iomanip>
#include <stdlib.h>
using namespace std;

BasicEnemy::BasicEnemy()

{
    //default_random_engine motor(static_cast<unsigned int>(time(0)));
    //uniform_int_distribution<unsigned int> intAleatorio(0,700);
    //pos of enemy
    //qDebug() << intAleatorio(motor) ;
    //live of enemy
    this->live=20;
    int random_number= rand()%700;
    setPos(random_number,0);

    setPixmap(QPixmap(":/images/images/BasicEnemy.png"));
    QTimer *timer= new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(40);
}


void BasicEnemy::move()
{

    setPos(x(),y()+10);
}
