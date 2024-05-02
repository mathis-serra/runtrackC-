#include <iostream>
using namespace std;

const int TAILLE_MAX = 100;

void fusionnerTableaux(int tableau1[], int taille1, int tableau2[], int taille2, int tableauResultat[], int& tailleResultat) {
    int i = 0, j = 0, k = 0;

    // Fusion des tableaux jusqu'à ce que l'un des deux tableaux soit entièrement parcouru
    while (i < taille1 && j < taille2) {
        if (tableau1[i] <= tableau2[j]) {
            tableauResultat[k++] = tableau1[i++];
        } else {
            tableauResultat[k++] = tableau2[j++];
        }
    }

    // Ajout des éléments restants du premier tableau s'il en reste
    while (i < taille1) {
        tableauResultat[k++] = tableau1[i++];
    }

    // Ajout des éléments restants du deuxième tableau s'il en reste
    while (j < taille2) {
        tableauResultat[k++] = tableau2[j++];
    }

    // Mise à jour de la taille du tableau résultat
    tailleResultat = k;
}

int main() {
    int tableau1[TAILLE_MAX] = {1, 3, 5, 7, 9};
    int taille1 = 5;
    int tableau2[TAILLE_MAX] = {2, 4, 6, 8};
    int taille2 = 4;
    int tableauResultat[TAILLE_MAX];
    int tailleResultat = taille1 + taille2;

    // Fusion des deux tableaux
    fusionnerTableaux(tableau1, taille1, tableau2, taille2, tableauResultat, tailleResultat);

    // Affichage du tableau résultat
    cout << "Tableau fusionne : ";
    for (int i = 0; i < tailleResultat; ++i) {
        cout << tableauResultat[i] << " ";
    }
    cout << endl;

    return 0;
}
