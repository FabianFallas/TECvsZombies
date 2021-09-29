

#include "Cuadro.h"
#include "Game.h"
#include "TorresPopUp.h"
#include "Bullet.h"

extern Game * game;

Cuadro::Cuadro(QString id, QGraphicsItem *parent) {
    setPixmap(QPixmap("../art/block.png"));
    iD=id;

}

void Cuadro::mousePressEvent(QGraphicsSceneMouseEvent *event) {
    TorresPopUp* popUp = new TorresPopUp();
    popUp->show();
    popUp->C=this;
}

void Cuadro::fire(int dir) {
    Bullet *b=new Bullet(torre,dir);
    b->setPos(this->x()+22,this->y()+22);
    scene()->addItem(b);

}

void Cuadro::actMatriz() {

    if(iD.contains("J")){
        xm=0;
    }else if(iD.contains( "I")){
        xm=1;
    }else if(iD.contains("H")){
        xm=2;
    }else if(iD.contains("G")){
        xm=3;
    }else if(iD.contains("F")){
        xm=4;
    }else if(iD.contains("E")){
        xm=5;
    }else if(iD.contains("D")){
        xm=6;
    }else if(iD.contains("C")){
        xm=7;
    }else if(iD.contains("B")){
        xm=8;
    }else if(iD.contains("A")){
        xm=9;
    }

    if(iD.contains("1")){
        ym=0;
    }
    else if(iD.contains("2")){
        ym=1;
    }else if(iD.contains("3")){
        ym=2;
    }else if(iD.contains("4")){
        ym=3;
    }else if(iD.contains("5")){
        ym=4;
    }else if(iD.contains("6")){
        ym=5;
    }else if(iD.contains("7")){
        ym=6;
    }else if(iD.contains("8")){
        ym=7;
    }else if(iD.contains("9")){
        ym=8;
    }else if(iD.contains("10")){
        ym=9;
    }

}

bool Cuadro::ocupar() {
    actMatriz();
    switch (ym){
        case 0:
            if (game->maze[xm][1] == 1) {
                return false;
            } else {
                this->ocupado = true;
                game->maze[xm][ym] = 1;
                return true;
            }
        case 9:
            if (game->maze[xm][8] == 1) {
                return false;
            } else {
                this->ocupado = true;
                game->maze[xm][ym] = 1;
                return true;
            }

        default:
            if (game->maze[xm][ym+1] == 1) {
                return false;
            }else if (game->maze[xm][ym-1] == 1) {
                return false;
            } else {
                this->ocupado = true;
                game->maze[xm][ym] = 1;
                return true;
            }
    }


}

