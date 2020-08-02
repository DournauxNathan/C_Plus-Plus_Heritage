#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Animal.h"

class Player{
  private:
    std::string _playerName;
  
  public:
  
    void amuser(Animal * cible);
    void nourrir(Animal * cible);
    void border(Animal * cible);
    void crier(Animal * cible);
    
    
    Player(std::string nomPlayer);
    
};

#endif