#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Initialisation des variables
    srand(time(0)); // Initialisation du générateur de nombres aléatoires
    int nombreMystere = rand() % 101; // Génère un nombre aléatoire entre 0 et 100
    int nombreEssais = 10;
    int choixJoueur;

    // Instructions du jeu
    cout << "Bienvenue dans le jeu Nombre Mystere !" << endl;
    cout << "Trouvez le nombre mystere compris entre 0 et 100." << endl;
    cout << "Vous avez " << nombreEssais << " essais pour le trouver." << endl;

    // Boucle principale du jeu
    while (nombreEssais > 0) {
        cout << "Entrez votre choix : ";
        cin >> choixJoueur;

        if (choixJoueur == nombreMystere) {
            cout << "Bravo ! Vous avez trouve le nombre mystere : " << nombreMystere << endl;
            return 0; // Fin du programme
        } else if (choixJoueur < nombreMystere) {
            cout << "Trop petit ! Il vous reste " << --nombreEssais << " essais." << endl;
        } else {
            cout << "Trop grand ! Il vous reste " << --nombreEssais << " essais." << endl;
        }
    }

    // Si le joueur n'a pas trouvé le nombre mystère après toutes ses tentatives
    cout << "Vous avez epuise tous vos essais. Le nombre mystere etait : " << nombreMystere << endl;

    return 0;
}
