#ifndef CHATON_CPP
#define CHATON_CPP

#include <iostream>
#include "Chaton.h"
#include "Animal.h"

/*    int _ennui; int _fatigue; int _faim; std::string _nom; */
  

    void Chaton::jouer(){
        _ennui-=10;
        if(_ennui<0) _ennui=0;
        _faim+=20;
        _fatigue+=30;
    }
    
    void Chaton::manger(int calories){
        _faim-=calories;
        if(_faim<0) _faim=0;
        _ennui+=10;
        _fatigue+=30;
    }
    
    void Chaton::dormir(int heures){
        _fatigue-=heures*10;
        if(_fatigue<0) _fatigue=0;
        _ennui+=10;
        _faim+=30;
    }
    
    void Chaton::crier(){
        std::cout << _nom << " miaule" << std::endl;
    
    }
    
    void Chaton::afficher(){
        std::cout << _nom << " est un chaton, a une faim de " 
                << _faim << "/100, une fatigue de "
                << _fatigue << "/100, et un ennui de " << _ennui << "/100." << std::endl;
    }
    
    Chaton::Chaton(std::string name) : Animal(name) {}

#endif