#include <QGraphicsScene>
#include <QObject>
#include <QGraphicsItem>
#include <QKeyEvent>
#include "player.h"

Player::Player(QGraphicsItem *parent): QGraphicsRectItem(parent)
{}
void Player::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Left) {
        // limite para não sair da tela
        if(pos().x() > 0)
            setPos(x()-10,y());
    }else if(event->key() == Qt::Key_Right)
    {
        // limite para não sair da tela
        if(pos().x() + 100 < 800 )
            setPos(x()+10,y());
    }
}
