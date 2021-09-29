

#ifndef CEVSESTUDIANTES_TORRESPOPUP_H
#define CEVSESTUDIANTES_TORRESPOPUP_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QtWidgets/QPushButton>
#include "Cuadro.h"
#include <QMessageBox>

using namespace std;
//! Clase que crea las torres
class TorresPopUp: public QGraphicsView{
public:
    TorresPopUp(QWidget * parent=0);
    string torre = "";
    Cuadro* C;
private:
    //!Botones de los cuatro tipos de torres
    QPushButton* torre1;
    QPushButton* torre2;
    QPushButton* torre3;
    QPushButton* torre4;
    //!@brief maneja la torre 1, la coloca y asigna el espacio como ocupado
    void handletorre1();
    //!@brief maneja la torre 2, la coloca y asigna el espacio como ocupado
    void handletorre2();
    //!@brief maneja la torre 3, la coloca y asigna el espacio como ocupado
    void handletorre3();
    //!@brief maneja la torre 4, la coloca y asigna el espacio como ocupado
    void handletorre4();

public:
    void setC(Cuadro *c);


};


#endif //CEVSESTUDIANTES_TORRESPOPUP_H
