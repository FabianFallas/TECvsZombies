
#include "Estudiantes.h"
using namespace std;
int Estudiantes::getRandomNumber(int minimun_Number, int max_Range) {
    int random = (std::rand() % max_Range) + minimun_Number;
    return random;
}

Estudiantes::Estudiantes() {


    /*---------------------------------------------------------------------------------------------------
                                    *CARACTERISITCAS DE ESTUDIANTES*
     ----------------------------------------------------------------------------------------------------*/
    //Se generarán aleatoriamente la cantidad de caracteristicas de los estudiantes
    vel = random();
    res_arq = rand() % 3 + 1;
    res_mag = rand() % 3 + 1;
    res_art = rand() % 3 + 1;
    res_lan = rand() % 3 + 1;
    vid = rand() % 3 + 1;
    id = rand() % 4 + 0;

    //Atributos asociados a los ogros
    velocidad = vel;
    res_arqueros = res_arq;
    res_magos = res_mag;
    res_artilleros = res_art;
    res_lanzafuego = res_lan;
    vida = vid;

     es_i = id;

    resistencia_total = velocidad + res_arqueros + res_artilleros +
                            res_magos + res_lanzafuego + vida;

}
//Esta función calculará toda la resistencia del ogro según los atributos asociados
    void Estudiantes::ID(int id){
        //ID para diferenciar a los ogros

        switch(id){
            case 0:
                cout << "Ogro" << endl;
                break;
            case 1:
                cout << "Elfos Oscuros" << endl;
                break;
            case 2:
                cout << "Harpías" << endl;
                break;
            case 3:
                cout << "Mercernarios" << endl;
                break;
        }
    }

    //Tomar uno de los atributos de forma aleatoria para insertarle la mutación




    /*--------------------------------------------------------------------------------
                           *IMPRIMIR ESTADISITICAS DE ESTUDIANTES*
    ----------------------------------------------------------------------------------*/

    //Función para imprimir todas las caracteristicas de cada uno de los estudiantes
    void  Estudiantes::Estadisticas (){
        cout << "Vida: " << getVid( ) <<"\n";
        cout <<"Res_Arqueros: "<< getResArqueros() << "\n";
        cout <<"Res_Magos: "<< getResMagos() << "\n";
        cout <<"Res_Artilleros: " << getResArtilleros() << "\n";
        cout <<"Res_LanzaFuego: "<< getResLanzafuego() << "\n";
        cout <<"Velocidad: "<< getVelocidad() << "\n";
        cout <<"Resistencia Total: " << getResistenciaTotal() << "\n";
        cout << "ID: " << getEsI() << "\n";
        ID(getEsI());
    }


/*--------------------------------------------------
                *GETTERS AND SETTERS*
----------------------------------------------------*/

int Estudiantes::getResArqueros() const {
    return res_arqueros;
}
void Estudiantes::setResArqueros(int resArqueros) {
    res_arqueros = resArqueros;
}


int Estudiantes::getResMagos() const {
    return res_magos;
}
void Estudiantes::setResMagos(int resMagos) {
    res_magos = resMagos;
}


int Estudiantes::getResArtilleros() const {
    return res_artilleros;
}
void Estudiantes::setResArtilleros(int resArtilleros) {
    res_artilleros = resArtilleros;
}


int Estudiantes::getResLanzafuego() const {
    return res_lanzafuego;
}
void Estudiantes::setResLanzafuego(int resLanzafuego) {
    res_lanzafuego = resLanzafuego;
}


int Estudiantes::getResistenciaTotal() const {
    return resistencia_total;
}



int Estudiantes::getVelocidad() const {
    cout << velocidad << "\n";
    return velocidad;
}
void Estudiantes::setVelocidad(int velocidad) {
    Estudiantes::velocidad = velocidad;
}





int Estudiantes::getEsI() const {
    return es_i;
}

double Estudiantes::getVid() const {
    return vid;
}

void Estudiantes::setVid(double vid) {
    Estudiantes::vid = vid;
}




