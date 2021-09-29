
#ifndef CEVSESTUDIANTES_BACKTRACKING_H
#define CEVSESTUDIANTES_BACKTRACKING_H

// Bibliotecas
#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include "lista.h"

using namespace std;

/*-------------------- NOTA ----------------------------
  Como convencion usamos las casillas disponibles como 0
  y las casillas con obstaculo como 1
  -----------------------------------------------------*/

//!
//! \brief The Pathfinding class
//!
class Backtracking{

    string _path;//!< Ruta que encuentra el algoritmo
    Lista *strpath = new Lista;

    //!
    //! \brief is_safe
    //! \param x
    //! \param y
    //! \return
    //!
    bool is_safe_Bt(int (*maze)[10],int x, int y);

    //!
    //! \brief print_solution
    //! \param path
    //!
    void trace_path(Lista *path);

public:

    //! @brief Constructor
    Backtracking();

    //! @brief Implementacion del algoritmo de busqueda Backtracking.
    //! @param[in] maze: Matriz sobre el que se realiza la busqueda.
    //! @return[out] Ruta encontrada para salir del laberinto.
    string Backtracking_Search(int maze[][10],int x, int y);

    //!
    //! \brief solve_Bt
    //! \param x celda de inicio(fila)
    //! \param y celda de inicio (columna)
    //! \param path
    //! \return
    //!
    bool Backtracking_Solver(int (*maze)[10], int x, int y, Lista *path);
    //! \brief conversion de coordenadas a los nombres de las celdas en la interfaz
    //! \param cell numero de columna
    //! \param letra de la fila
    void trace_strpath(char cell, string letra);
    //! \brief getter del path
    //! \return
    Lista * get_path();

    void print_maze(int(*maze)[10]);

};

#endif //CEVSESTUDIANTES_BACKTRACKING_H
