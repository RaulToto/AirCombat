/**
  * @file main.cpp
  * @version 1.0
  * @date 25/12/16
  * @author Raul Edgar Quispe Totocayo
  * @title main
  */

#include <QApplication>
#include "game.h"
Game *game;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    game= new Game();
    //game->gameOver();
    game->show();

    return a.exec();

}
