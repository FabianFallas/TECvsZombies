

#ifndef CEVSESTUDIANTES_ZOMBIE_H
#define CEVSESTUDIANTES_ZOMBIE_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include "../genetico/Estudiantes.h"


using namespace std;
class Zombie: public QObject, public QGraphicsPixmapItem{
public:
    Zombie(Estudiantes est=Estudiantes(), int ventana=0, int zombie=0, QGraphicsItem * parent=0);
    void setRuta(QList<string> lista );
    int *gapy =new int(50);
    Estudiantes estud;


private:
    int move();

    QList <int> destinoX = QList<int> {};
    QList <int> destinoY = QList<int> {};
    QList <int> L = QList<int> {};
    int random=0;
    int vel=5;
    int ventanaN;
    string rutaOgro="../art/ogro";
    string rutaDark="../art/dark";
    string rutaArpia="../art/arpia";
    string rutaMerc="../art/mercenario";
    int zombienum=1;
    int cont=1;


    void mousePressEvent(QGraphicsSceneMouseEvent *event);
};


#endif //CEVSESTUDIANTES_ZOMBIE_H
