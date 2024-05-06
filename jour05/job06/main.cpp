#include "Personne.hpp"
#pragma once
int main() {
    Personne personne("Clement", 100, 50.0f);
    personne.afficherInfos();

    personne.modifierNom("Bob");
    personne.modifierPointsDeVie(80);
    personne.modifierDefense(60.5f);

    personne.afficherInfos();

    return 0;
}