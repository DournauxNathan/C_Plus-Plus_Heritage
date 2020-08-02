#ifndef Animal_CPP
#define Animal_CPP

#include <iostream>
#include "Animal.h"

/*    int _ennui; int _fatigue; int _faim; std::string _nom; */
  

    void Animal::jouer(){    }
    
    void Animal::manger(int calories){    }
    
    void Animal::dormir(int heures){    }
    
    void Animal::crier() {}
    
    void Animal::afficher(){
        std::cout << _nom << " est un animal, a une faim de " 
                << _faim << "/100, une fatigue de "
                << _fatigue << "/100, et un ennui de " << _ennui << "/100." << std::endl;
    }
    
    Animal::Animal(std::string name) : _nom(name), _ennui(0), _fatigue(0), _faim(0)  {}

#endif