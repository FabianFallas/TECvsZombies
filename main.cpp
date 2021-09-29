#include <QApplication>
#include "grafica/Game.h"
#include "path/lista.h"
#include "path/A_star.h"
#include "path/Backtracking.h"
#include "grafica/Menu.h"

using namespace std;
Game * game;
Menu * menu;




int main(int argc, char *argv[]){

    QApplication a(argc, argv);

    menu = new Menu();
    game = new Game();
    menu->show();


    return a.exec();
}

