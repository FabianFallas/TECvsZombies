
#ifndef CEVSESTUDIANTES_MENU_H
#define CEVSESTUDIANTES_MENU_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QtWidgets/QPushButton>
#include <cstdlib>
#include "Cuadro.h"
#include "Game.h"

using namespace std;
class Menu :public QGraphicsView{
public:
    Menu(QWidget * parent=0);
    QGraphicsScene* scene;
    QList<QGraphicsItem *> zombieL;
private:
    //! @brief Maneja el evento de hacer click con el mouse
    //! \param event
    void mousePressEvent(QMouseEvent *event);
    QPushButton* btn1;
    QPushButton* btn2;
    QPushButton* btn3;

    //!@brief Maneja el botón 1
    void handlebtn1();
    //!@brief Maneja el botón 2
    void handlebtn2();
    void handlebtn3();
    //!@brief Crea la generación de zombies
    void genZomb();
};


#endif //CEVSESTUDIANTES_MENU_H
