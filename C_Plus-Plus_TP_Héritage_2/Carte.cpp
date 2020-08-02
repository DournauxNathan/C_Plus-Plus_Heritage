#ifndef CARTE_CPP
#define CARTE_CPP

#include <iostream>
#include "Carte.h"

/*  int _mana;  std::string _nom;  std::string _description;*/
  
    int Carte::getManaCost() {
        return _manaCost;
    }
    
    
    void Carte::afficher(){
        std::cout << "Attentoin on essaie d'exécuter une méthode virtuelle !!! " << std::endl;
    }
    
    Carte::Carte(std::string name, int coutEnMana, std::string description): 
        _manaCost(coutEnMana), _nom(name), _flavorText(description){}

#endif