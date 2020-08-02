#include <iostream>
#include "Chaton.h"
#include "Player.h"

int main()
{
    
    Chaton * link = new Chaton("Link");
    link->afficher();
    
    Player * myself = new Player("Selene");
    
    myself->nourrir(link);
    link->afficher();
    link->crier();

    return 0;
}
