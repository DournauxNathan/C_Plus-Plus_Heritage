#ifndef PLAYER_CPP
#define PLAYER_CPP

#include <string>
#include "Player.h"
#include "Animal.h"

// std::string _playerName;
  
  
    void Player::amuser(Animal * cible){
        cible->jouer();
    }
    
    void Player::nourrir(Animal * cible){
        cible->manger(20);
    }
    
    void Player::border(Animal * cible){
        cible->dormir(1);    
    }
    void Player::crier(Animal * cible){
        cible->crier();    
    }
    
    
    Player::Player(std::string nomPlayer): _playerName(nomPlayer) {}
    
#endif