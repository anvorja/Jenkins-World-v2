/**
  Archivo: Personaje.cpp
  Autor:  anvorja
  Licencia: GNU-GPL
*/

#include "Personaje.h"

Personaje::Personaje(){
    mana = 50;
    vida = 50;
    tipo = 0;
    ejercito = 0;
}
Personaje::~Personaje(){}

void Personaje::setTipo(int _tipo){
    tipo = _tipo;
}

void Personaje::setEjercito(int idEjercito){
    ejercito = idEjercito;
}

int Personaje::getTipo(){
    return tipo;
}

int Personaje::getMana(){
    return mana;
}

int Personaje::getVida(){
    return vida;
}

int Personaje::getEjercito(){
    return ejercito;
}

void Personaje::setMuerte(bool alive){
    murio = alive;
}

bool Personaje::getMuerte(){
    return murio;
}

void Personaje::quitarVida(int cantV){
    vida = vida - cantV;
}


void Personaje::quitarMana(int cantM){
    mana = mana - cantM;
}
void Personaje::atacar(Personaje *enemigo){
    if(!enemigo->getMuerte()){

        switch(tipo){
          /**
          El Caballero quita 50 puntos de vida y 50 de maná (si su maná es mayor a 30 puntos, de lo contario no ataca). Si un caballero se encuentra con otro caballero, no se hacen daño.
          */
            case 0:
                if(mana>30 && enemigo->getTipo() != 0){
                    enemigo->quitarVida(50);
                    enemigo->quitarMana(50);
                }
                break;
            /**
            El Draconarius quita 20 puntos de vida y 30 de maná si ataca a un caballero, sino quita 15 puntos de vida y 20 de maná.
            */
            case 1:
                if(enemigo->getTipo() == 1){
                    enemigo->quitarVida(20);
                    enemigo->quitarMana(30);
                }else{
                    enemigo->quitarVida(15);
                    enemigo->quitarMana(20);
                }
                break;
            /**
             El Arquero quita 30 puntos de vida y 10 de maná mientras tenga una vida menor de 25 puntos, sino no causa ningún daño.
            */
            case 2:
                if(vida<25){
                    enemigo->quitarVida(30);
                    enemigo->quitarMana(10);
                }
                break;

            /*
            El Mago quita 50 de maná, si su maná está entre 35 y 50, sino no causa ningún daño.
            */
            case 3:
                if(mana<50 && mana>35 ){
                    enemigo->quitarVida(50);
                }
                break;
        }

        if(enemigo->getVida() <= 0){
            enemigo->setMuerte(true);
        }
    }
}