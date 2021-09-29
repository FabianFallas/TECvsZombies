

#include <QtWidgets/QMessageBox>
#include "Menu.h"


extern Game * game;
Menu::Menu(QWidget *parent) {
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,450,475); // make the scene 800x600 instead of infinity by infinity (default)
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(450,475);
    setBackgroundBrush(QBrush(QImage("../art/tec.jpg")));

    btn1 = new QPushButton("Aprobación \nIndividual",this);
    btn1->setFont(QFont("times",16,63));
    btn1->setGeometry(140, 120, 180 , 90);
    connect(btn1 ,&QPushButton::clicked, this, &Menu::handlebtn1);
    btn1->setStyleSheet("QPushButton { border-image: url(../art/butBG.png); color: white;}");

    btn2 = new QPushButton("Aprobación \nColectiva",this);
    btn2->setFont(QFont("times",16,63));
    btn2->setGeometry(140, 250, 180 , 90);
    connect(btn2 ,&QPushButton::clicked, this, &Menu::handlebtn2);
    btn2->setStyleSheet("QPushButton { border-image: url(../art/butBG.png); color: white;}");

    btn2 = new QPushButton("Modos\n de\n juego",this);
    btn2->setFont(QFont("times",16,63));
    btn2->setGeometry(0, 0, 130 , 70);
    connect(btn2 ,&QPushButton::clicked, this, &Menu::handlebtn3);
    btn2->setStyleSheet("QPushButton { border-image: url(../art/butBG.png); color: white;}");

    QTimer * timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this, &Menu::genZomb);

    // start the timer
    timer->start(100);

}

void Menu::mousePressEvent(QMouseEvent *event) {
    QGraphicsView::mousePressEvent(event);
}

void Menu::handlebtn1() {
    for (QGraphicsItem * zomb:zombieL){
        scene->removeItem(zomb);
        delete zomb;
    }
    close();
    game->oleada=1;
    game->modo=0;
    game->show();
}

void Menu::handlebtn2() {
    for (QGraphicsItem * zomb:zombieL){
        scene->removeItem(zomb);
        delete zomb;
    }
    close();
    game->oleada=1;
    game->modo=1;
    game->show();
}
void Menu::genZomb() {

    int random = rand() % 5;
    Zombie *z = new Zombie(Estudiantes(),0,random);
    zombieL.append(z);
    QList<string> List = {"Menu"};
    z->setRuta(List);
    z->gapy = new int (0);
    scene->addItem(z);
}

void Menu::handlebtn3() {
    QMessageBox mens = QMessageBox();
    mens.setText("Individual:\n"
                 "El juego se acaba cuando el primer estudiante llega a la zona de clasificacion\n"
                 "\n"
                 "Colectivo:\n"
                 "El juego se acaba despues de 6 oleadas y se mostrara la cantidad de estudiantes que llegaron a zona de aprobación\n");
    mens.exec();
}
