#ifndef CRISTAL_CPP
#define CRISTAL_CPP

#include <iostream>
#include "Carte.h"

/*  int _mana;  std::string _nom;  std::string _description;*/

    void cristal::afficher(){
        std::cout << _nom << "est une cristal d'une valeur de " << _value 
                << "et dont la description est " << _description << std::endl;
    }
    
    cristal::cristal(std::string name, int coutEnMana, std::string description, int valeur): 
        cristal(name, coutEnMana, description), _value(valeur) {}

#endif