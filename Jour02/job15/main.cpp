#include <iostream>
using namespace std;

// Fonction pour générer la suite de Fibonacci jusqu'à une limite donnée
void fibonacci(int limite) {
    int terme1 = 0, terme2 = 1;
    int somme;

    // Affichage des deux premiers termes de la suite de Fibonacci
    cout << "Suite de Fibonacci jusqu'a la limite de " << limite << " :\n";
    cout << terme1 << ", " << terme2;

    // Génération des termes suivants de la suite de Fibonacci jusqu'à atteindre la limite
    while ((terme1 + terme2) <= limite) {
        somme = terme1 + terme2;
        cout << ", " << somme;
        terme1 = terme2;
        terme2 = somme;
    }
    cout << endl;
}

int main() {
    int limite;

    // Demande à l'utilisateur de saisir la limite
    cout << "Entrez la limite pour la suite de Fibonacci : ";
    cin >> limite;

    // Appel de la fonction pour générer la suite de Fibonacci jusqu'à la limite donnée
    fibonacci(limite);

    return 0;
}
