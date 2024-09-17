//
// Created by asgarcia on 2024-09-17.
//

#ifndef STRUCTURA_PID_H
#define STRUCTURA_PID_H

#include <iostream>
#include <fstream>
#include <string>

struct TPID {
    int kp;
    int ti;
    int td;
};

// Función para mostrar la estructura
void mostrarEstructura(const TPID p);

// Función para modificar los valores de la estructura
void modificarEstructura(TPID& p) ;

// Función para guardar la estructura en un fichero
void guardarEnFichero(const TPID& estructura, const std::string& nombreArchivo) ;

// Función para cargar la estructura desde un fichero
bool cargarDesdeFichero(TPID& estructura, const std::string& nombreArchivo) ;
#endif //STRUCTURA_PID_H
