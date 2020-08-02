#ifndef MAGE_CPP
#define MAGE_CPP

#include <iostream>
#include <string>
#include <vector>
#include "Mage.h"

   /* int _healthPoints;
    int _currentMana;
    int _totalMana;
    std::string _nom;*/
/*vector<Carte> _hand; vector<Carte> _bin; vecotr<Carte> _board;*/
  
    void Mage::playerCard(int positionDansLaMain) {
        /*Une carte dans le vector main et on veut la mettre dans le vectr board*/
        _board.push_back(_hand[positionDansLaMain]);
    }
    
    void Mage::regainMana() {
        _currentMana=_totalMana;
    }
    
    void Mage::afficherPartie() /*= 0 devient une virtual pure*/ {
        std::cout << _nom << "possède" << _healthPoints << "Hp et " 
                << _currentMana << "/" << _totalMana << "MP" <<  std::endl;
        _hand[0]->affiche();
    }
    
    Mage::Mage(std::string name, std::vector<Carte*> mainDuMage) :
         _nom(name), _healthPoints(20), _currentMana(0), _totalMana(0), _hand(mainDuMage) {} 
    
};

#endif