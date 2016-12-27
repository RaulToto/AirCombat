#ifndef HEALHT_H
#define HEALHT_H
#include <QGraphicsTextItem>
//#include "game.h"

class Healht:public QGraphicsTextItem
{
public:
    Healht(QGraphicsTextItem *parent=0);
    void decrease();
    void decremento();
    int getHealth()
    {
        return vida;
    }
    bool getLive()
    {
        if(vida>0)
        {
            return true;
        }
        else
            return false;
    }

private:
    int vida;

};

#endif // HEALHT_H
