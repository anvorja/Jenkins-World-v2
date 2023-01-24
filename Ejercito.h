/**
  Archivo: Ejercito.h
  Autor:  anvorja
  Licencia: GNU-GPL
*/

#ifndef VORJAJPN3_EJERCITO_H
#define VORJAJPN3_EJERCITO_H
#include <iostream>
#include <vector>
#include "Personaje.h"

class Ejercito{
    // Atributos
private:
    int cantidadPersonajes;
    //vector de Punteros Personaje llamado personajes
    vector<Personaje*> personajes;

    // Métodos
public:
   //constructor
    Ejercito();
   //destructor
    ~Ejercito();

    void crearEjercito(int ejercito);
    void atacarEjercito(Ejercito *enemigo);
    int contarVivos();
};

#endif //VORJAJPN3_EJERCITO_H
