#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Déclaration de la structure Destination
struct Destination {
    string nom;
    int tempsDeVol;
};

int main() {
    // Création d'un vecteur pour stocker les pointeurs vers les destinations
    vector<Destination*> destinations;

    // Demander à l'utilisateur de saisir les destinations et les temps de vol
    while (true) {
        cout << "Entrez le nom de la destination (ou 'fin' pour terminer) : ";
        string nomDestination;
        cin >> nomDestination;
        
        if (nomDestination == "fin") {
            break;  // Sortir de la boucle si l'utilisateur saisit "fin"
        }
        
        cout << "Entrez le temps de vol depuis Marseille : ";
        int tempsDeVol;
        cin >> tempsDeVol;

        // Créer une nouvelle destination dynamique
        Destination* nouvelleDestination = new Destination;
        nouvelleDestination->nom = nomDestination;
        nouvelleDestination->tempsDeVol = tempsDeVol;

        // Ajouter le pointeur vers la nouvelle destination au vecteur
        destinations.push_back(nouvelleDestination);
    }

    // Parcourir le vecteur de destinations
    cout << "\nAffichage des destinations :" << endl;
    for (size_t i = 0; i < destinations.size(); ++i) {
        cout << "Destination " << i + 1 << " : " << endl;
        cout << "Nom : " << destinations[i]->nom << endl;
        cout << "Temps de vol depuis Marseille : " << destinations[i]->tempsDeVol << " heures" << endl;
    }

    // Modifier les données de chaque destination
    cout << "\nModification des données des destinations :" << endl;
    for (size_t i = 0; i < destinations.size(); ++i) {
        cout << "Modifiez les données de la destination " << i + 1 << " : " << endl;
        cout << "Nouveau nom : ";
        cin >> destinations[i]->nom;
        cout << "Nouveau temps de vol depuis Marseille : ";
        cin >> destinations[i]->tempsDeVol;
    }

    // Libérer la mémoire allouée dynamiquement
    for (size_t i = 0; i < destinations.size(); ++i) {
        delete destinations[i];
    }

    return 0;
}
