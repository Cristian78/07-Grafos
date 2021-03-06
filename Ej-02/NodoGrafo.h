#ifndef INC_07_GRAFOS_NODOGRAFO_H
#define INC_07_GRAFOS_NODOGRAFO_H

#include "Arco.h"

template <class T>
class Arco;

template <class T>
class NodoGrafo{
private:
    T dato;
    NodoGrafo *next;
    Arco<T> *arcoapuntado;
    int posicion;
public:
    NodoGrafo(){
        next = nullptr;
        arcoapuntado = nullptr;
    }

    NodoGrafo(T d, NodoGrafo *n, Arco<T> *a, int p){
        dato = d;
        next = n;
        arcoapuntado = a;
        posicion = p;
    }

    void setDato(int d) {dato = d;}

    void setNext(NodoGrafo *n) {next = n;}

    void setArcos(Arco<T> *a) {arcoapuntado = a;}

    T getDato() { return dato;}

    NodoGrafo *getNext(){return next;}

    Arco<T> *getarcoapuntado(){return arcoapuntado;}

    int getPosicion() { return posicion;}
};

#endif //INC_07_GRAFOS_NODOGRAFO_H
