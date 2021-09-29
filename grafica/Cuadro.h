

#ifndef CEVSESTUDIANTES_CUADRO_H
#define CEVSESTUDIANTES_CUADRO_H

#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QObject>
#include <QTimer>
#include <QDebug>


using namespace std;
class Cuadro: public QObject, public QGraphicsPixmapItem{
public:

    Cuadro(QString id, QGraphicsItem * parent=0);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    bool ocupado = false;
    int rango = 1;
    void fire(int dir);
    void actMatriz();
    int xm=0;
    int ym=0;
    QString iD;
    int torre;
    bool ocupar();


};

#endif //CEVSESTUDIANTES_CUADRO_H
