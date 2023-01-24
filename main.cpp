/**
  Archivo: main.cpp
  Autor:  anvorja
  Licencia: GNU-GPL
*/

#include <iostream>
#include "Personaje.h"
#include "Ejercito.h"


int main() {

    Ejercito *ptrEj1 = new Ejercito();
    Ejercito *ptrEj2 = new Ejercito();
    ptrEj1->crearEjercito(1);
    ptrEj2->crearEjercito(2);

    ptrEj1->atacarEjercito(ptrEj2);
}