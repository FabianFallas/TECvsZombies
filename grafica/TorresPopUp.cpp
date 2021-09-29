

#include "TorresPopUp.h"
#include "Game.h"

extern Game * game;
TorresPopUp::TorresPopUp(QWidget * parent){

    torre1 = new QPushButton("", this);
    torre1->setGeometry(10, 10, 90 , 90);
    connect(torre1 ,&QPushButton::clicked, this, &TorresPopUp::handletorre1);

    torre2 = new QPushButton("", this);
    torre2->setGeometry(110, 10, 90 , 90);
    connect(torre2 ,&QPushButton::clicked, this,&TorresPopUp::handletorre2);

    torre3 = new QPushButton("", this);
    torre3->setGeometry(210, 10, 90 , 90);
    connect(torre3 ,&QPushButton::clicked, this, &TorresPopUp::handletorre3);

    torre4 = new QPushButton("", this);
    torre4->setGeometry(310, 10, 90 , 90);
    connect(torre4 ,&QPushButton::clicked, this, &TorresPopUp::handletorre4);


    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(410,110);

    QPixmap pix1("../art/torre1.png");
    QPixmap pixA = pix1.scaled(90, 90, Qt::IgnoreAspectRatio);
    torre1->setIcon(pixA);
    torre1->setIconSize(pixA.rect().size());

    QPixmap pix2("../art/torre2.png");
    QPixmap pixB = pix2.scaled(90, 90, Qt::IgnoreAspectRatio);
    torre2->setIcon(pixB);
    torre2->setIconSize(pixB.rect().size());

    QPixmap pix3("../art/torre3.png");
    QPixmap pixC = pix3.scaled(90, 90, Qt::IgnoreAspectRatio);
    torre3->setIcon(pixC);
    torre3->setIconSize(pixC.rect().size());


    QPixmap pix4("../art/torre4.png");
    QPixmap pixD = pix4.scaled(90, 90, Qt::IgnoreAspectRatio);
    torre4->setIcon(pixD);
    torre4->setIconSize(pixD.rect().size());
}

void TorresPopUp::handletorre1() {
    torre ="../art/blocktorre1.png";
    if (C->iD.contains("A")){
        close();
        QMessageBox mens = QMessageBox();
        mens.setText("No puede poner una torre en la linea de llegada");
        mens.exec();

    }else {
        if (C->ocupado){
            if (game->creditos < 0) {
                close();
                QMessageBox mens = QMessageBox();
                mens.setText("No dispone de suficientes creditos");
                mens.exec();
            } else {
                QPixmap pixa(torre.c_str());
                QPixmap pixb = pixa.scaled(90, 90, Qt::IgnoreAspectRatio);
                if(C->ocupar()){
                    C->setPixmap(pixb);
                    C->torre = 1;
                    game->creditos -= 0;
                }else{
                    close();
                    QMessageBox mens = QMessageBox();
                    mens.setText("No puede cerrar el camino");
                    mens.exec();
                }


            }
        }else {
            if (game->creditos < 5) {
                QMessageBox mens = QMessageBox();
                mens.setText("No dispone de suficientes creditos");
                mens.exec();
            } else {
                QPixmap pixa(torre.c_str());
                QPixmap pixb = pixa.scaled(90, 90, Qt::IgnoreAspectRatio);
                if(C->ocupar()){
                    C->setPixmap(pixb);
                    C->torre = 1;
                    game->creditos -= 5;
                }else{
                    close();
                    QMessageBox mens = QMessageBox();
                    mens.setText("No puede cerrar el camino");
                    mens.exec();
                }

            }
        }
        close();
    }

}

void TorresPopUp::handletorre2() {
    torre = "../art/blocktorre2.png";
    if (C->iD.contains("A")) {
        close();
        QMessageBox mens = QMessageBox();
        mens.setText("No puede poner una torre en la linea de llegada");
        mens.exec();

    } else {
        if (C->ocupado){
            if (game->creditos < 5) {
                QMessageBox mens = QMessageBox();
                mens.setText("No dispone de suficientes creditos");
                mens.exec();
            } else {
                QPixmap pixa(torre.c_str());
                QPixmap pixb = pixa.scaled(90, 90, Qt::IgnoreAspectRatio);
                if(C->ocupar()){
                    C->setPixmap(pixb);
                    C->torre = 2;
                    game->creditos -= 5;
                }else{
                    close();
                    QMessageBox mens = QMessageBox();
                    mens.setText("No puede cerrar el camino");
                    mens.exec();
                }
            }
        }else {
            if (game->creditos < 10) {
                QMessageBox mens = QMessageBox();
                mens.setText("No dispone de suficientes creditos");
                mens.exec();
            } else {
                QPixmap pixa(torre.c_str());
                QPixmap pixb = pixa.scaled(90, 90, Qt::IgnoreAspectRatio);
                if(C->ocupar()){
                    C->setPixmap(pixb);
                    C->torre = 2;
                    game->creditos -= 10;
                }else{
                    close();
                    QMessageBox mens = QMessageBox();
                    mens.setText("No puede cerrar el camino");
                    mens.exec();
                }

            }
        }
        close();
    }
}


void TorresPopUp::handletorre3() {
    torre = "../art/blocktorre3.png";
    if (C->iD.contains("A")) {
        close();
        QMessageBox mens = QMessageBox();
        mens.setText("No puede poner una torre en la linea de llegada");
        mens.exec();

    } else {
        if (C->ocupado){
            if (game->creditos < 10) {
                QMessageBox mens = QMessageBox();
                mens.setText("No dispone de suficientes creditos");
                mens.exec();
            } else {
                QPixmap pixa(torre.c_str());
                QPixmap pixb = pixa.scaled(90, 90, Qt::IgnoreAspectRatio);
                if(C->ocupar()){
                    C->setPixmap(pixb);
                    C->torre = 3;
                    game->creditos -= 10;
                }else{
                    close();
                    QMessageBox mens = QMessageBox();
                    mens.setText("No puede cerrar el camino");
                    mens.exec();
                }
            }
        }else {
            if (game->creditos < 15) {
                QMessageBox mens = QMessageBox();
                mens.setText("No dispone de suficientes creditos");
                mens.exec();
            } else {
                QPixmap pixa(torre.c_str());
                QPixmap pixb = pixa.scaled(90, 90, Qt::IgnoreAspectRatio);
                if(C->ocupar()){
                    C->setPixmap(pixb);
                    C->torre = 3;
                    game->creditos -= 15;
                }else{
                    close();
                    QMessageBox mens = QMessageBox();
                    mens.setText("No puede cerrar el camino");
                    mens.exec();
                }
            }
        }
        close();
    }
}

void TorresPopUp::handletorre4() {
    torre = "../art/blocktorre4.png";
    if (C->iD.contains("A")) {
        close();
        QMessageBox mens = QMessageBox();
        mens.setText("No puede poner una torre en la linea de llegada");
        mens.exec();

    } else {
        if (C->ocupado){
            if (game->creditos < 15) {
                QMessageBox mens = QMessageBox();
                mens.setText("No dispone de suficientes creditos");
                mens.exec();
            } else {
                QPixmap pixa(torre.c_str());
                QPixmap pixb = pixa.scaled(90, 90, Qt::IgnoreAspectRatio);
                if(C->ocupar()){
                    C->setPixmap(pixb);
                    C->torre = 4;
                    game->creditos -= 15;
                }else{
                    close();
                    QMessageBox mens = QMessageBox();
                    mens.setText("No puede cerrar el camino");
                    mens.exec();
                }
            }
        }else {
            if (game->creditos < 20) {
                QMessageBox mens = QMessageBox();
                mens.setText("No dispone de suficientes creditos");
                mens.exec();
            } else {
                QPixmap pixa(torre.c_str());
                QPixmap pixb = pixa.scaled(90, 90, Qt::IgnoreAspectRatio);
                if(C->ocupar()){
                    C->setPixmap(pixb);
                    C->torre = 4;
                    game->creditos -= 20;
                }else{
                    close();
                    QMessageBox mens = QMessageBox();
                    mens.setText("No puede cerrar el camino");
                    mens.exec();
                }
            }
        }
        close();
    }
}


