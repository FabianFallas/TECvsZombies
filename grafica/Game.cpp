#include <QtWidgets/QMessageBox>
#include "Game.h"


Game::Game(QWidget *parent){
    // create the scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,900,950); // make the scene 800x600 instead of infinity by infinity (default)
    int gapy=50;
    cred=new QLabel(this);
    cred->setGeometry(10,0,100,50);
    cred->setText("Creditos: "+QString::number(creditos));
    QPalette palette;
    palette.setColor(QPalette::Text, Qt::white);
    cred->setPalette(palette);

    tipo=new QLabel(this);
    tipo->setGeometry(450,0,250,50);
    tipo->setPalette(palette);

    vida=new QLabel(this);
    vida->setGeometry(680,0,100,50);
    vida->setPalette(palette);

    velocidad=new QLabel(this);
    velocidad->setGeometry(835,0,100,50);
    velocidad->setPalette(palette);

    olead=new QLabel(this);
    olead->setGeometry(110,0,100,50);
    olead->setText("Oleada: "+QString::number(oleada));
    olead->setPalette(palette);


    // make the newly created scene the scene to visualize (since Game is a QGraphicsView Widget,
    // it can be used to visualize scenes)
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(900,950);
    scene->setBackgroundBrush(QColor(72,37,37));

    btnA1 = new Cuadro("A1");
    btnA2 = new Cuadro("A2");
    btnA3 = new Cuadro("A3");
    btnA4 = new Cuadro("A4");
    btnA5 = new Cuadro("A5");
    btnA6 = new Cuadro("A6");
    btnA7 = new Cuadro("A7");
    btnA8 = new Cuadro("A8");
    btnA9 = new Cuadro("A9");
    btnA10 = new Cuadro("A10");

    btnB1 = new Cuadro("B1");
    btnB2 = new Cuadro("B2");
    btnB3 = new Cuadro("B3");
    btnB4 = new Cuadro("B4");
    btnB5 = new Cuadro("B5");
    btnB6 = new Cuadro("B6");
    btnB7 = new Cuadro("B7");
    btnB8 = new Cuadro("B8");
    btnB9 = new Cuadro("B9");
    btnB10 = new Cuadro("B10");

    btnC1 = new Cuadro("C1");
    btnC2 = new Cuadro("C2");
    btnC3 = new Cuadro("C3");
    btnC4 = new Cuadro("C4");
    btnC5 = new Cuadro("C5");
    btnC6 = new Cuadro("C6");
    btnC7 = new Cuadro("C7");
    btnC8 = new Cuadro("C8");
    btnC9 = new Cuadro("C9");
    btnC10 = new Cuadro("C10");

    btnD1 = new Cuadro("D1");
    btnD2 = new Cuadro("D2");
    btnD3 = new Cuadro("D3");
    btnD4 = new Cuadro("D4");
    btnD5 = new Cuadro("D5");
    btnD6 = new Cuadro("D6");
    btnD7 = new Cuadro("D7");
    btnD8 = new Cuadro("D8");
    btnD9 = new Cuadro("D9");
    btnD10 = new Cuadro("D10");

    btnE1 = new Cuadro("E1");
    btnE2 = new Cuadro("E2");
    btnE3 = new Cuadro("E3");
    btnE4 = new Cuadro("E4");
    btnE5 = new Cuadro("E5");
    btnE6 = new Cuadro("E6");
    btnE7 = new Cuadro("E7");
    btnE8 = new Cuadro("E8");
    btnE9 = new Cuadro("E9");
    btnE10 = new Cuadro("E10");

    btnF1 = new Cuadro("F1");
    btnF2 = new Cuadro("F2");
    btnF3 = new Cuadro("F3");
    btnF4 = new Cuadro("F4");
    btnF5 = new Cuadro("F5");
    btnF6 = new Cuadro("F6");
    btnF7 = new Cuadro("F7");
    btnF8 = new Cuadro("F8");
    btnF9 = new Cuadro("F9");
    btnF10 = new Cuadro("F10");

    btnG1 = new Cuadro("G1");
    btnG2 = new Cuadro("G2");
    btnG3 = new Cuadro("G3");
    btnG4 = new Cuadro("G4");
    btnG5 = new Cuadro("G5");
    btnG6 = new Cuadro("G6");
    btnG7 = new Cuadro("G7");
    btnG8 = new Cuadro("G8");
    btnG9 = new Cuadro("G9");
    btnG10 = new Cuadro("G10");

    btnH1 = new Cuadro("H1");
    btnH2 = new Cuadro("H2");
    btnH3 = new Cuadro("H3");
    btnH4 = new Cuadro("H4");
    btnH5 = new Cuadro("H5");
    btnH6 = new Cuadro("H6");
    btnH7 = new Cuadro("H7");
    btnH8 = new Cuadro("H8");
    btnH9 = new Cuadro("H9");
    btnH10 = new Cuadro("H10");

    btnI1 = new Cuadro("I1");
    btnI2 = new Cuadro("I2");
    btnI3 = new Cuadro("I3");
    btnI4 = new Cuadro("I4");
    btnI5 = new Cuadro("I5");
    btnI6 = new Cuadro("I6");
    btnI7 = new Cuadro("I7");
    btnI8 = new Cuadro("I8");
    btnI9 = new Cuadro("I9");
    btnI10 = new Cuadro("I10");

    btnJ1 = new Cuadro("J1");
    btnJ2 = new Cuadro("J2");
    btnJ3 = new Cuadro("J3");
    btnJ4 = new Cuadro("J4");
    btnJ5 = new Cuadro("J5");
    btnJ6 = new Cuadro("J6");
    btnJ7 = new Cuadro("J7");
    btnJ8 = new Cuadro("J8");
    btnJ9 = new Cuadro("J9");
    btnJ10 = new Cuadro("J10");

    btnA1->setPos(0,gapy);
    scene->addItem(btnA1);
    buttonsL.append(btnA1);

    btnA2->setPos(90,gapy);
    scene->addItem(btnA2);
    buttonsL.append(btnA2);

    btnA3->setPos(180,gapy);
    scene->addItem(btnA3);
    buttonsL.append(btnA3);

    btnA4->setPos(270,gapy);
    scene->addItem(btnA4);
    buttonsL.append(btnA4);

    btnA5->setPos(360,gapy);
    scene->addItem(btnA5);
    buttonsL.append(btnA5);

    btnA6->setPos(450,gapy);
    scene->addItem(btnA6);
    buttonsL.append(btnA6);

    btnA7->setPos(540,gapy);
    scene->addItem(btnA7);
    buttonsL.append(btnA7);

    btnA8->setPos(630,gapy);
    scene->addItem(btnA8);
    buttonsL.append(btnA8);

    btnA9->setPos(720,gapy);
    scene->addItem(btnA9);
    buttonsL.append(btnA9);

    btnA10->setPos(810,gapy);
    scene->addItem(btnA10);
    buttonsL.append(btnA10);

    btnB1->setPos(0,gapy+90);
    scene->addItem(btnB1);
    buttonsL.append(btnB1);

    btnB2->setPos(90,gapy+90);
    scene->addItem(btnB2);
    buttonsL.append(btnB2);

    btnB3->setPos(180,gapy+90);
    scene->addItem(btnB3);
    buttonsL.append(btnB3);

    btnB4->setPos(270,gapy+90);
    scene->addItem(btnB4);
    buttonsL.append(btnB4);

    btnB5->setPos(360,gapy+90);
    scene->addItem(btnB5);
    buttonsL.append(btnB5);

    btnB6->setPos(450,gapy+90);
    scene->addItem(btnB6);
    buttonsL.append(btnB6);

    btnB7->setPos(540,gapy+90);
    scene->addItem(btnB7);
    buttonsL.append(btnB7);

    btnB8->setPos(630,gapy+90);
    scene->addItem(btnB8);
    buttonsL.append(btnB8);

    btnB9->setPos(720,gapy+90);
    scene->addItem(btnB9);
    buttonsL.append(btnB9);

    btnB10->setPos(810,gapy+90);
    scene->addItem(btnB10);
    buttonsL.append(btnB10);

    btnC1->setPos(0,gapy+180);
    scene->addItem(btnC1);
    buttonsL.append(btnC1);

    btnC2->setPos(90,gapy+180);
    scene->addItem(btnC2);
    buttonsL.append(btnC2);

    btnC3->setPos(180,gapy+180);
    scene->addItem(btnC3);
    buttonsL.append(btnC3);

    btnC4->setPos(270,gapy+180);
    scene->addItem(btnC4);
    buttonsL.append(btnC4);

    btnC5->setPos(360,gapy+180);
    scene->addItem(btnC5);
    buttonsL.append(btnC5);

    btnC6->setPos(450,gapy+180);
    scene->addItem(btnC6);
    buttonsL.append(btnC6);

    btnC7->setPos(540,gapy+180);
    scene->addItem(btnC7);
    buttonsL.append(btnC7);

    btnC8->setPos(630,gapy+180);
    scene->addItem(btnC8);
    buttonsL.append(btnC8);

    btnC9->setPos(720,gapy+180);
    scene->addItem(btnC9);
    buttonsL.append(btnC9);

    btnC10->setPos(810,gapy+180);
    scene->addItem(btnC10);
    buttonsL.append(btnC10);

    btnD1->setPos(0,gapy+270);
    scene->addItem(btnD1);
    buttonsL.append(btnD1);

    btnD2->setPos(90,gapy+270);
    scene->addItem(btnD2);
    buttonsL.append(btnD2);

    btnD3->setPos(180,gapy+270);
    scene->addItem(btnD3);
    buttonsL.append(btnD3);

    btnD4->setPos(270,gapy+270);
    scene->addItem(btnD4);
    buttonsL.append(btnD4);

    btnD5->setPos(360,gapy+270);
    scene->addItem(btnD5);
    buttonsL.append(btnD5);

    btnD6->setPos(450,gapy+270);
    scene->addItem(btnD6);
    buttonsL.append(btnD6);

    btnD7->setPos(540,gapy+270);
    scene->addItem(btnD7);
    buttonsL.append(btnD7);

    btnD8->setPos(630,gapy+270);
    scene->addItem(btnD8);
    buttonsL.append(btnD8);

    btnD9->setPos(720,gapy+270);
    scene->addItem(btnD9);
    buttonsL.append(btnD9);

    btnD10->setPos(810,gapy+270);
    scene->addItem(btnD10);
    buttonsL.append(btnD10);

    btnE1->setPos(0,gapy+360);
    scene->addItem(btnE1);
    buttonsL.append(btnE1);

    btnE2->setPos(90,gapy+360);
    scene->addItem(btnE2);
    buttonsL.append(btnE2);

    btnE3->setPos(180,gapy+360);
    scene->addItem(btnE3);
    buttonsL.append(btnE3);

    btnE4->setPos(270,gapy+360);
    scene->addItem(btnE4);
    buttonsL.append(btnE4);

    btnE5->setPos(360,gapy+360);
    scene->addItem(btnE5);
    buttonsL.append(btnE5);

    btnE6->setPos(450,gapy+360);
    scene->addItem(btnE6);
    buttonsL.append(btnE6);

    btnE7->setPos(540,gapy+360);
    scene->addItem(btnE7);
    buttonsL.append(btnE7);

    btnE8->setPos(630,gapy+360);
    scene->addItem(btnE8);
    buttonsL.append(btnE8);

    btnE9->setPos(720,gapy+360);
    scene->addItem(btnE9);
    buttonsL.append(btnE9);

    btnE10->setPos(810,gapy+360);
    scene->addItem(btnE10);
    buttonsL.append(btnE10);

    btnF1->setPos(0,gapy+450);
    scene->addItem(btnF1);
    buttonsL.append(btnF1);

    btnF2->setPos(90,gapy+450);
    scene->addItem(btnF2);
    buttonsL.append(btnF2);

    btnF3->setPos(180,gapy+450);
    scene->addItem(btnF3);
    buttonsL.append(btnF3);

    btnF4->setPos(270,gapy+450);
    scene->addItem(btnF4);
    buttonsL.append(btnF4);

    btnF5->setPos(360,gapy+450);
    scene->addItem(btnF5);
    buttonsL.append(btnF5);

    btnF6->setPos(450,gapy+450);
    scene->addItem(btnF6);
    buttonsL.append(btnF6);

    btnF7->setPos(540,gapy+450);
    scene->addItem(btnF7);
    buttonsL.append(btnF7);

    btnF8->setPos(630,gapy+450);
    scene->addItem(btnF8);
    buttonsL.append(btnF8);

    btnF9->setPos(720,gapy+450);
    scene->addItem(btnF9);
    buttonsL.append(btnF9);

    btnF10->setPos(810,gapy+450);
    scene->addItem(btnF10);
    buttonsL.append(btnF10);

    btnG1->setPos(0,gapy+540);
    scene->addItem(btnG1);
    buttonsL.append(btnG1);

    btnG2->setPos(90,gapy+540);
    scene->addItem(btnG2);
    buttonsL.append(btnG2);

    btnG3->setPos(180,gapy+540);
    scene->addItem(btnG3);
    buttonsL.append(btnG3);

    btnG4->setPos(270,gapy+540);
    scene->addItem(btnG4);
    buttonsL.append(btnG4);

    btnG5->setPos(360,gapy+540);
    scene->addItem(btnG5);
    buttonsL.append(btnG5);

    btnG6->setPos(450,gapy+540);
    scene->addItem(btnG6);
    buttonsL.append(btnG6);

    btnG7->setPos(540,gapy+540);
    scene->addItem(btnG7);
    buttonsL.append(btnG7);

    btnG8->setPos(630,gapy+540);
    scene->addItem(btnG8);
    buttonsL.append(btnG8);

    btnG9->setPos(720,gapy+540);
    scene->addItem(btnG9);
    buttonsL.append(btnG9);

    btnG10->setPos(810,gapy+540);
    scene->addItem(btnG10);
    buttonsL.append(btnG10);

    btnH1->setPos(0,gapy+630);
    scene->addItem(btnH1);
    buttonsL.append(btnH1);

    btnH2->setPos(90,gapy+630);
    scene->addItem(btnH2);
    buttonsL.append(btnH2);

    btnH3->setPos(180,gapy+630);
    scene->addItem(btnH3);
    buttonsL.append(btnH3);

    btnH4->setPos(270,gapy+630);
    scene->addItem(btnH4);
    buttonsL.append(btnH4);

    btnH5->setPos(360,gapy+630);
    scene->addItem(btnH5);
    buttonsL.append(btnH5);

    btnH6->setPos(450,gapy+630);
    scene->addItem(btnH6);
    buttonsL.append(btnH6);

    btnH7->setPos(540,gapy+630);
    scene->addItem(btnH7);
    buttonsL.append(btnH7);

    btnH8->setPos(630,gapy+630);
    scene->addItem(btnH8);
    buttonsL.append(btnH8);

    btnH9->setPos(720,gapy+630);
    scene->addItem(btnH9);
    buttonsL.append(btnH9);

    btnH10->setPos(810,gapy+630);
    scene->addItem(btnH10);
    buttonsL.append(btnH10);

    btnI1->setPos(0,gapy+720);
    scene->addItem(btnI1);
    buttonsL.append(btnI1);

    btnI2->setPos(90,gapy+720);
    scene->addItem(btnI2);
    buttonsL.append(btnI2);
    maze[0][4]=1;

    btnI3->setPos(180,gapy+720);
    scene->addItem(btnI3);
    buttonsL.append(btnI3);

    btnI4->setPos(270,gapy+720);
    scene->addItem(btnI4);
    buttonsL.append(btnI4);

    btnI5->setPos(360,gapy+720);
    scene->addItem(btnI5);
    buttonsL.append(btnI5);

    btnI6->setPos(450,gapy+720);
    scene->addItem(btnI6);
    buttonsL.append(btnI6);

    btnI7->setPos(540,gapy+720);
    scene->addItem(btnI7);
    buttonsL.append(btnI7);

    btnI8->setPos(630,gapy+720);
    scene->addItem(btnI8);
    buttonsL.append(btnI8);

    btnI9->setPos(720,gapy+720);
    scene->addItem(btnI9);
    buttonsL.append(btnI9);

    btnI10->setPos(810,gapy+720);
    scene->addItem(btnI10);
    buttonsL.append(btnI10);

    btnJ1->setPos(0,gapy+810);
    scene->addItem(btnJ1);
    buttonsL.append(btnJ1);

    btnJ2->setPos(90,gapy+810);
    scene->addItem(btnJ2);
    buttonsL.append(btnJ2);

    btnJ3->setPos(180,gapy+810);
    scene->addItem(btnJ3);
    buttonsL.append(btnJ3);

    btnJ4->setPos(270,gapy+810);
    scene->addItem(btnJ4);
    buttonsL.append(btnJ4);

    btnJ5->setPos(360,gapy+810);
    scene->addItem(btnJ5);
    buttonsL.append(btnJ5);

    btnJ6->setPos(450,gapy+810);
    scene->addItem(btnJ6);
    buttonsL.append(btnJ6);

    btnJ7->setPos(540,gapy+810);
    scene->addItem(btnJ7);
    buttonsL.append(btnJ7);

    btnJ8->setPos(630,gapy+810);
    scene->addItem(btnJ8);
    buttonsL.append(btnJ8);

    btnJ9->setPos(720,gapy+810);
    scene->addItem(btnJ9);
    buttonsL.append(btnJ9);

    btnJ10->setPos(810,gapy+810);
    scene->addItem(btnJ10);
    buttonsL.append(btnJ10);


    // make/connect a timer to move() the bullet every so often
    QTimer * timer1 = new QTimer(this);
    connect(timer1,&QTimer::timeout,this,&Game::detectZombie);

    // start the timer
    timer1->start(100);

    QTimer * timer2 = new QTimer(this);
    connect(timer2,&QTimer::timeout,this,&Game::cool);

    // start the timer
    timer2->start(1000);

    QTimer * timer3 = new QTimer(this);
    connect(timer3,&QTimer::timeout,this,&Game::detectaOleada);

    // start the timer
    timer3->start(100);


}

Game::~Game() {

}
void Game::mousePressEvent(QMouseEvent *event) {
    QGraphicsView::mousePressEvent(event);
}

void Game::detectZombie() {
    cred->setText("Creditos: "+QString::number(creditos));
    if (!flag){
    for (Cuadro *item:buttonsL ){
        if (item->ocupado){
            for (QGraphicsItem *zomb :zombieL){
                //                                          //                                     //
                    if (zomb->y()>item->y() && zomb->y()<item->y()+90 && zomb->x()<item->x() && zomb->x()>item->x()-90*item->rango){
                        item->fire(0);
                        flag=true;
                    }else if(zomb->y()<item->y() && zomb->y()>item->y()-90*item->rango && zomb->x()<item->x() && zomb->x()>item->x()-90*item->rango){
                        item->fire(1);
                        flag=true;
                    }else if(zomb->y()>item->y()-90*item->rango && zomb->y()<item->y()&& zomb->x()>item->x() && zomb->x()<item->x()+90){
                        item->fire(2);
                        flag=true;
                    }else if(zomb->y()<item->y() && zomb->y()>item->y()-90*item->rango && zomb->x()>item->x()+90 && zomb->x()<item->x()+90+90*item->rango){
                        item->fire(3);
                        flag=true;
                    }else if(zomb->y()>item->y() && zomb->y()<item->y()+90 && zomb->x()>item->x()+90 && zomb->x()<item->x()+90+90*item->rango) {
                        item->fire(4);
                        flag=true;
                    }else if(zomb->y()>item->y()+90 && zomb->y()<item->y()+90+90*item->rango && zomb->x()>item->x()+90 && zomb->x()<item->x()+90+90*item->rango) {
                        item->fire(5);
                        flag=true;
                    }else if(zomb->y()>item->y()+90 && zomb->y()<item->y()+90+90*item->rango && zomb->x()>item->x() && zomb->x()<item->x()+90) {
                        item->fire(6);
                        flag=true;
                    }else if(zomb->y()>item->y()+90 && zomb->y()<item->y()+90+90*item->rango && zomb->x()>item->x() && zomb->x()<item->x()+90*item->rango) {
                        item->fire(7);
                        flag=true;
                    }
            }
            }
        }

    }
}

void Game::cool() {
    flag=false;

}

void Game::detectaOleada() {
    if (zombieL.length()<1){
        switch(oleada){
            case 1:
                for (int i = 0; i < 10; i++){
                    Zombie *z = new Zombie(PrimeraGen[i],1,PrimeraGen[i].getEsI());
                    solver1.Backtracking_Search(maze,0,i);
                    L=QList <string>();
                    for (int a=0;a<solver1.get_path()->size();a++){
                        L.append(solver1.get_path()->get_index(a));
                    }
                    z->setRuta(L);
                    zombieL.append(z);
                    scene->addItem(z);
                }
                olead->setText("Oleada: "+QString::number(oleada));
                oleada+=1;
                break;
            case 2:
                for (int i = 0; i < 10; i++){
                    Zombie *z = new Zombie(SegundaGen[i],1,SegundaGen[i].getEsI());

                    Pair src = make_pair(0, i);
                    Pair dest = make_pair(9, i);
                    solver.aStarSearch(maze, src, dest);
                    L=QList <string>();
                    for (int a=0;a<solver.get_path()->size();a++){
                        L.append(solver.get_path()->get_index(a));
                    }
                    z->setRuta(L);
                    zombieL.append(z);
                    scene->addItem(z);
                }
                olead->setText("Oleada: "+QString::number(oleada));
                oleada+=1;
                break;
            case 3:
                for (int i = 0; i < 10; i++){
                    Zombie *z = new Zombie(TerceraGen[i],1,TerceraGen[i].getEsI());
                    int y= rand()%9;
                    Pair src = make_pair(0, y);
                    Pair dest = make_pair(9, y);
                    solver.aStarSearch(maze, src, dest);
                    L=QList <string>();
                    for (int a=0;a<solver.get_path()->size();a++){
                        L.append(solver.get_path()->get_index(a));
                    }
                    z->setRuta(L);
                    zombieL.append(z);
                    scene->addItem(z);
                }
                olead->setText("Oleada: "+QString::number(oleada));
                oleada+=1;
                break;
            case 4:
                for (int i = 0; i < 10; i++){
                    Zombie *z = new Zombie(CuartaGen[i],1,CuartaGen[i].getEsI());
                    int y= rand()%9;
                    Pair src = make_pair(0, y);
                    Pair dest = make_pair(9, y);
                    solver.aStarSearch(maze, src, dest);
                    L=QList <string>();
                    for (int a=0;a<solver.get_path()->size();a++){
                        L.append(solver.get_path()->get_index(a));
                    }
                    z->setRuta(L);
                    zombieL.append(z);
                    scene->addItem(z);
                }
                olead->setText("Oleada: "+QString::number(oleada));
                oleada+=1;
                break;
            case 5:
                if (modo==0){
                    close();
                    modo=-1;
                    QMessageBox mens = QMessageBox();
                    mens.setText("Victory Royale");
                    mens.exec();

                }else if (modo==1){
                    close();
                    modo=-1;
                    QMessageBox mens = QMessageBox();
                    mens.setText("Se Graduaron: "+ QString::number(zombiesPass));
                    mens.exec();
                }


                break;
            case 6:
                for (int i = 0; i < 10; i++){
                    Zombie *z = new Zombie(QuintaGen[i],1,QuintaGen[i].getEsI());
                    int y= rand()%9;
                    Pair src = make_pair(0, y);
                    Pair dest = make_pair(9, y);
                    solver.aStarSearch(maze, src, dest);
                    L=QList <string>();
                    for (int a=0;a<solver.get_path()->size();a++){
                        L.append(solver.get_path()->get_index(a));
                    }
                    z->setRuta(L);
                    zombieL.append(z);
                    scene->addItem(z);
                }

                olead->setText("Oleada: "+QString::number(oleada));
                oleada+=1;
        }
    }


}

void Game::paso() {
    if (modo==0){
        close();
        modo=-1;
        QMessageBox mens = QMessageBox();
        mens.setText("Game Over");
        mens.exec();


    }else if(modo==1){
        zombiesPass+=1;
    }
}

void Game::stats(Estudiantes stud) {
    switch(stud.getEsI()+1){
        case 1:
            tipo->setText("Tipo: Ogro Armado");
            break;
        case 2:
            tipo->setText("Tipo: Esqueleto Oscuro");
            break;
        case 3:
            tipo->setText("Tipo: Harpía Salvaje");
            break;
        case 4:
            tipo->setText("Tipo: Mercenario de la URSS");
            break;
    }

    //vida->setText("Vida: "+QString::number(stud.getVid()));
    velocidad->setText("Vida: "+QString::number(stud.getVelocidad()));
}




