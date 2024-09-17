//
// Created by aulas on 17/09/2024.
//

#ifndef STRUCTURA_CLASEPID_H
#define STRUCTURA_CLASEPID_H


class clasePID {
    int kp;
    int ti;
    int td;
public:
    clasePID();
    clasePID(int k);
    void mostrarPID();
};


#endif //STRUCTURA_CLASEPID_H
