#ifndef CARTE_H
#define CARTE_H

#include <string>

class Carte{
  protected:
    int _manaCost;
    std::string _nom;
    std::string _flavorText;
  
  public:
  
    int getManaCost();
    
    void virtual afficher() /*= 0 devient une virtual pure*/;
    
    Carte(std::string name, int coutEnMana, std::string description);
    
};

#endif