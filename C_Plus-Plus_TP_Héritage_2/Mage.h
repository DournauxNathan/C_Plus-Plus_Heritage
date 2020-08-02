#ifndef MAGE_H
#define MAGE_H

#include <string>
#include <vector>
#include "Carte.h"

class Mage{
  private:
    int _healthPoints;
    int _currentMana;
    int _totalMana;
    std::string _nom;
    std::vector<Carte*> _hand;
    std::vector<Carte*> _bin;
    std::vector<Carte*> _board;
  
  public:
  
    void playerCard(int positionDansLaMain);
    
    void regainMana();
    
    void afficherPartie() /*= 0 devient une virtual pure*/;
    
    Mage(std::string name, std::vector<Carte*> mainDuMage); 
    
};

#endif