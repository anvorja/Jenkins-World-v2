/**
  Archivo: Ejercito.cpp
  Autor:  anvorja
  Licencia: GNU-GPL
*/

#include "Ejercito.h"

Ejercito::Ejercito(){

    cantidadPersonajes = 4;

}

Ejercito::~Ejercito(){}

void Ejercito::crearEjercito(int ejercito){
    for(int i = 0; i<cantidadPersonajes; i++){

        Personaje *munieco = new Personaje();
        munieco -> setTipo(i);
        munieco -> setEjercito(ejercito);
        personajes.push_back(munieco);
    }
}

void Ejercito::atacarEjercito(Ejercito *enemigo){

// El caballero del ejercito 1 ataca a un draconarius del ejercito 2
  personajes[0]->atacar(enemigo->personajes[1]);
  cout<<"El personaje 0 del ejercito 1 ha atacado al personaje 1 del ejercito 2"<<endl;

// El caballero del ejercito 1 ataca a un arquero del ejercito 2
  personajes[0]->atacar(enemigo->personajes[2]);
   cout<<"El personaje 0 del ejercito 1 ha atacado al personaje 2 del ejercito 2"<<endl;

// El caballero del ejercito 2 ataca a un draconarius del ejercito 1
  enemigo->personajes[0]->atacar(personajes[1]);
   cout<<"El personaje 0 del ejercito 2 ha atacado al personaje 1 del ejercito 1"<<endl;

  // El caballero del ejercito 1 ataca a un mago del ejercito 2.
  personajes[0]->atacar(enemigo->personajes[3]);
  cout<<"El personaje 0 del ejercito 1 ha atacado al personaje 3 del ejercito 2"<<endl;

  // Imprimir en consola
  cout << "Ejercito 1 ha quedado con: " << contarVivos() << " de " << personajes.size() << endl;
  cout << "Ejercito 2 ha quedado con: " << enemigo->contarVivos() << " de " << enemigo->personajes.size() << endl;

  if(contarVivos()){
    cout << "Ejercito 1 ganador" << endl;
  }else if(enemigo->contarVivos()){
    cout << "Ejercito 2 ganador" << endl;
  }
}

//cantidad de jugadores vivos
int Ejercito::contarVivos(){
    int vivos = 0;
    for(int i = 0; i<personajes.size(); i++){
        if(!(personajes[i]->getMuerte())) vivos++;
    }
    return vivos;
}