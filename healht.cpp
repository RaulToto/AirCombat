#include "healht.h"
#include <QFont>
Healht::Healht(QGraphicsTextItem *parent)
    :QGraphicsTextItem(parent)
{
    this->vida=30;
    setPlainText(QString("Health:")+QString::number(this->vida));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",16));

}
void Healht::decrease()
{
    this->vida--;
    setPlainText(QString("Health:")+QString::number(this->vida));
    if(this->vida<0)
    {
        setPlainText(QString("GAME OVER"));
        //Game *game = new Game();
        //delete game->player;
        //delete this;
    }
}

