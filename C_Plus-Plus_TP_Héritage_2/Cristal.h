#ifndef CRISTAL_H
#define CRISTAL_H

#include <string>

class Cristal : public Carte /*Ma class cristal hérite de la class cartie*/{

    private:
    int _value;

  public:
  
    
    void afficher() /*= 0 devient une virtual pure*/;
    
    Cristal(std::string name, int coutEnMana, std::string description, int valeur);
    
};

#endif