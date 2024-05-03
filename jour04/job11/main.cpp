#include <iostream>
#include <string>
using namespace std;

int main() {
    // Déclaration du tableau fruit
    string fruit[5] = {"Pomme", "Banane", "Orange", "Fraise", "Raisin"};
    
    // Affichage du contenu du tableau fruit
    cout << "Contenu du tableau fruit :" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << i + 1 << ". " << fruit[i] << endl;
    }

    // Demander le nombre de fruits favoris à l'utilisateur
    int nombreFavoris;
    cout << "Combien de fruits sont vos favoris ? ";
    cin >> nombreFavoris;

    // Allocation dynamique du tableau favoris
    string *favoris = new string[nombreFavoris];

    // Demander à l'utilisateur de saisir ses fruits favoris
    cout << "Entrez vos " << nombreFavoris << " fruits favoris : " << endl;
    for (int i = 0; i < nombreFavoris; ++i) {
        cout << "Fruit " << i + 1 << ": ";
        cin >> favoris[i];
    }

    // Affichage du tableau favoris
    cout << "\nContenu du tableau favoris :" << endl;
    for (int i = 0; i < nombreFavoris; ++i) {
        cout << i + 1 << ". " << favoris[i] << endl;
    }

    // Libération de la mémoire allouée dynamiquement
    delete[] favoris;

    return 0;
}
