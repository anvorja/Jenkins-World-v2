/**
  Archivo: Personaje.h
  Autor:  anvorja
  Licencia: GNU-GPL
*/

#ifndef VORJAJPN3_PERSONAJE_H
#define VORJAJPN3_PERSONAJE_H

#include <iostream>
using namespace std;

class Personaje{
    // Atributos
private:
    bool murio = false;
    int ejercito,mana, vida, tipo;


    // Métodos
public:
    Personaje();
    ~Personaje();
    int  getTipo();
    int  getVida();
    int  getMana();
    int  getIndex();
    int  getEjercito();
    bool getMuerte();
    virtual void setTipo(int val);
    virtual void quitarVida(int cantidad);
    virtual void setEjercito(int val);
    virtual void setMuerte(bool val);
    virtual void quitarMana(int cantidad);
    void atacar(Personaje *enemigo);
};
#endif //VORJAJPN3_PERSONAJE_H
