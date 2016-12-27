#ifndef BUTTON_H
#define BUTTON_H
#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsScene>

class Button:public QGraphicsRectItem

{
public:
    Button(QString name,QGraphicsItem *parent=NULL);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
signals:
    void clicked();
private:
    QGraphicsTextItem *text;
};

#endif // BUTTON_H
