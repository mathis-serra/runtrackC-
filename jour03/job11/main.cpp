#include <iostream>
using namespace std;

const int TAILLE_MAX = 100;

int sommeElementsPairs(int tableau[], int taille) {
    int somme = 0;
    for (int i = 0; i < taille; ++i) {
        if (tableau[i] % 2 == 0) { // Vérifie si l'élément est pair
            somme += tableau[i]; // Ajoute l'élément pair à la somme
        }
    }
    return somme;
}

int main() {
    int taille;
    int tableau[TAILLE_MAX];

    // Demande à l'utilisateur de saisir la taille du tableau
    cout << "Entrez la taille du tableau : ";
    cin >> taille;

    // Demande à l'utilisateur de saisir les éléments du tableau
    cout << "Entrez les elements du tableau : ";
    for (int i = 0; i < taille; ++i) {
        cin >> tableau[i];
    }

    // Calcule et affiche la somme des éléments pairs du tableau
    int somme_pairs = sommeElementsPairs(tableau, taille);
    cout << "La somme des elements pairs du tableau est : " << somme_pairs << endl;

    return 0;
}
