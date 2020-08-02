#include <iostream>
#include <string>
#include <vector>
#include "Carte.h"
#include "Mage.h"
#include "Cristal.h"

int main()
{
    /*Carte maCarte = Carte("Carte nulle", 0, "Une carte très nullle");
    maCarte;afficher();*/
    
    Cristal * maCarte = new Cristal("Cristal de base", 0, "Un cristal élémentaire", 1);
    maCarte->afficher();
    
    std::vector<Carte*> mainGandalf;
    mainGandalf.push_back(maCarte);
    //Appeler une autre carte: mainGandalf.push_back(maCarte);
    
    Mage  gandalf = Mage("Gandalf", mainGandalf);
    gandalf.afficherPartie();
    return 0;
}
