//
// Created by aulas on 17/09/2024.
//

#include "clasePID.h"
#include <iostream>


clasePID::clasePID(){
    kp=33;
    ti=50;
    td=10;
}

clasePID::clasePID(int k){
    kp=k;
    ti=0;
    td=0;

}
void clasePID::mostrarPID(){

    std::cout << "Valores del PID:\n";
    std::cout << "Kp: " << kp << "\n";
    std::cout << "Ti: " << ti << "\n";
    std::cout << "Td: " << td << "\n" << std::endl;
}