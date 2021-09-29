//
// Created by joshua on 24/10/19.
//

#ifndef GENETICO_ESTUDIANTES_H
#define GENETICO_ESTUDIANTES_H


#include <cstdlib>     /* srand, rand *//* time */
#include <iostream>
using namespace std;

class Estudiantes{

private:

    //Estudiantes Gen[10];
    int res_total;

    //Se generarán aleatoriamente la cantidad de caracteristicas de los estudiantes
    int vel;
    int res_arq;
    int res_mag;
    int res_art;
    int res_lan;
    double vid;
public:
    double getVid() const;

    void setVid(double vid);

private:
    int id;

    //Atributos asociados a los ogros
    int velocidad;
    int res_arqueros;
    int res_magos;
    int res_artilleros;
    int res_lanzafuego;
    int vida;

    int es_i;

    int resistencia_total;



public:

    Estudiantes();

    void Estadisticas();

    void ID(int ID);


    int getEsI() const;

    int getResistenciaTotal() const;


    int getVelocidad() const;

    void setVelocidad(int velocidad);


    int getResArqueros() const;

    void setResArqueros(int resArqueros);


    int getResMagos() const;

    void setResMagos(int resMagos);


    int getResArtilleros() const;

    void setResArtilleros(int resArtilleros);


    int getResLanzafuego() const;

    void setResLanzafuego(int resLanzafuego);

    int getRandomNumber(int minimun_Number, int max_Range);
};


#endif //GENETICO_ESTUDIANTES_H
