#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QObject>
#include <QTimer>
#include <QList>
#include "Cuadro.h"
#include "Zombie.h"


class Bullet: public QObject,public QGraphicsPixmapItem {
public:
    //! Maneja las colisiones de los disparos
    //! \param dir coordenadas del disparo
    //! \param parent
    Bullet(int torre,int dir,  QGraphicsItem * parent=0);
    //! Maneja el movimiento del disparo
    void move();
private:
    int cont =1;
    int direccion =0;
    int contDist =0;
    int tirador;

};

#endif // BULLET_H
