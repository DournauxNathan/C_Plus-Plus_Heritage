#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal{
  protected:
    int _ennui;
    int _fatigue;
    int _faim;
    std::string _nom;
  
  public:
  
    void virtual jouer();
    void virtual manger(int calories);
    void virtual dormir(int heures);
    void virtual crier();
    
    void afficher();
    
    Animal(std::string name);
    
};

#endif