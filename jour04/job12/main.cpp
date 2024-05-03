#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Déclaration de la structure Staff
struct Staff {
    string nom;
    string prenom;
};

int main() {
    // Initialisation des membres du staff
    Staff alicia = {"Cordial", "Alicia"};
    Staff pierre = {"Malardier", "Pierre"};

    // Affichage des prénoms des membres du staff
    cout << "Prénoms des membres du staff :" << endl;
    cout << alicia.prenom << endl;
    cout << pierre.prenom << endl;

    // Déclaration de la structure Etudiant
    struct Etudiant {
        string nom;
        string prenom;
    };

    // Demander à l'utilisateur le nombre d'étudiants
    int nombreEtudiants;
    cout << "Combien d'étudiants voulez-vous ajouter ? ";
    cin >> nombreEtudiants;

    // Création d'un vecteur pour stocker les étudiants
    vector<Etudiant> etudiants(nombreEtudiants);

    // Saisie des noms et prénoms des étudiants
    for (int i = 0; i < nombreEtudiants; ++i) {
        cout << "Nom de l'étudiant " << i + 1 << ": ";
        cin >> etudiants[i].nom;
        cout << "Prénom de l'étudiant " << i + 1 << ": ";
        cin >> etudiants[i].prenom;
    }

    // Affichage des prénoms des étudiants
    cout << "\nPrénoms des étudiants :" << endl;
    for (int i = 0; i < nombreEtudiants; ++i) {
        cout << etudiants[i].prenom << endl;
    }

    return 0;
}
