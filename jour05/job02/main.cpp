#include <iostream>
#include "Joueur.hpp"
using namespace std;
#pragma once

int main() {
    Joueur joueur1;
    Joueur joueur2(10, 10);

    joueur1.initialiserPosition(5, 5);
    joueur2.initialiserPosition(10, 5);


    cout << "Position initiale du joueur : ";
    joueur1.afficherPosition();

    joueur1.deplacer(2, -1);

    cout << "Nouvelle position du joueur après déplacement : ";
    joueur1.afficherPosition();

    return 0;
}



