#include <iostream>
#include "joueur.hpp"
using namespace std;
#pragma once

int main() {
    Joueur joueur;

    joueur.initialiserPosition(5, 5);

    cout << "Position initiale du joueur : ";
    joueur.afficherPosition();

    joueur.deplacer(2, -1);

    cout << "Nouvelle position du joueur après déplacement : ";
    joueur.afficherPosition();

    return 0;
}