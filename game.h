#ifndef GAME_H
#define GAME_H
//file includes
#include "score.h"
#include "basicenemy.h"
#include "player.h"
#include "bullet.h"
#include "healht.h"
//qt includes
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsWidget>


class Game:public QGraphicsView
{
public:
    Game(QWidget *parent=0);
    void start();
    void displayMainMenu();
    //void gameOver(bool);
    ~Game()
    {
        if(healht->getHealth()<0)
            delete player;
    }


    //----------objects
    QGraphicsScene *scene;
    Player *player;
    Player *player1;
    Score *score;
    Healht *healht;
    BasicEnemy *basicenemy;

};

#endif // GAME_H
