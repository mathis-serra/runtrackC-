#include <iostream>
#include "Joueur.hpp"
using namespace std;
#pragma once

int main() {
    Joueur joueur1;

    Joueur joueur2(10, 20);

    Joueur joueur3(8, 3, "Kevin");


    joueur1.initialiserPosition(5, 5);
    joueur2.initialiserPosition(15, 5);
    joueur3.initialiserPosition(5, 10);


    cout << "Position initiale du joueur : ";
    joueur1.afficherPosition();

    joueur2.deplacer(2, -1);

    cout << "Nouvelle position du joueur après déplacement : ";
    joueur3.afficherPosition();

    return 0;
}