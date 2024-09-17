//
// Created by asgarcia on 2024-09-17.
//

#include "pid.h"

// Función para mostrar la estructura
void mostrarEstructura(const TPID p) {
    std::cout << "Valores del PID:\n";
    std::cout << "Kp: " << p.kp << "\n";
    std::cout << "Ti: " << p.ti << "\n";
    std::cout << "Td: " << p.td << "\n" << std::endl;
}

// Función para modificar los valores de la estructura
void modificarEstructura(TPID  &p) {
    std::cout << "Introduce el nuevo valor para Kp: ";
    std::cin >> p.kp;
    std::cout << "Introduce el nuevo valor para Ti: ";
    std::cin >> p.ti;
    std::cout << "Introduce el nuevo valor para Td: ";
    std::cin >> p.td;
}

// Función para guardar la estructura en un fichero
void guardarEnFichero(const TPID& estructura, const std::string& nombreArchivo) {
    std::ofstream archivo(nombreArchivo, std::ios::binary);
    if (archivo.is_open()) {
        archivo.write(reinterpret_cast<const char*>(&estructura), sizeof(TPID));
        archivo.close();
        std::cout << "PID guardado en el archivo: " << nombreArchivo << std::endl;
    } else {
        std::cerr << "No se pudo abrir el archivo para escribir.\n";
    }
}

// Función para cargar la estructura desde un fichero
bool cargarDesdeFichero(TPID& estructura, const std::string& nombreArchivo) {
    std::ifstream archivo(nombreArchivo, std::ios::binary);
    if (archivo.is_open()) {
        archivo.read(reinterpret_cast<char*>(&estructura), sizeof(TPID));
        archivo.close();
        return true;
    } else {
        std::cerr << "No se pudo abrir el archivo para leer.\n";
        return false;
    }
}
