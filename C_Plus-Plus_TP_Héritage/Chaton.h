#ifndef CHATON_H
#define CHATON_H

#include <string>
#include "Animal.h"

class Chaton : public Animal {

  public:
  
    void jouer();
    void manger(int calories);
    void dormir(int heures);
    void crier();
    
    void afficher();
    
    Chaton(std::string name);
    
};

#endif