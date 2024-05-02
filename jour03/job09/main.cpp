#include <iostream>
#include <cstring>
using namespace std;

bool estIncluse(const char* chaine1, const char* chaine2) {
    int longueurChaine1 = strlen(chaine1);
    int longueurChaine2 = strlen(chaine2);

    // Parcours de la deuxième chaîne
    for (int i = 0; i <= longueurChaine2 - longueurChaine1; ++i) {
        bool estEgale = true;
        // Vérification si la première chaîne est incluse dans la deuxième
        for (int j = 0; j < longueurChaine1; ++j) {
            if (chaine1[j] != chaine2[i + j]) {
                estEgale = false;
                break;
            }
        }
        if (estEgale) {
            return true;
        }
    }
    return false;
}

int main() {
    const int TAILLE_MAX = 100;
    char chaine1[TAILLE_MAX];
    char chaine2[TAILLE_MAX];

    cout << "Entrez la premiere chaine : ";
    cin.getline(chaine1, TAILLE_MAX);

    cout << "Entrez la deuxieme chaine : ";
    cin.getline(chaine2, TAILLE_MAX);

    if (estIncluse(chaine1, chaine2)) {
        cout << "La premiere chaine est incluse dans la deuxieme." << endl;
    } else {
        cout << "La premiere chaine n'est pas incluse dans la deuxieme." << endl;
    }

    return 0;
}
