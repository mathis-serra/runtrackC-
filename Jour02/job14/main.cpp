#include <iostream>
#include <cmath>
using namespace std;

// Fonction pour compter le nombre de chiffres dans un nombre
int compterChiffres(int nombre) {
    int compteur = 0;
    while (nombre != 0) {
        nombre /= 10;
        compteur++;
    }
    return compteur;
}

// Fonction pour vérifier si un nombre est un nombre narcissique
bool estNarcissique(int nombre) {
    int somme = 0;
    int temp = nombre;
    int puissance = compterChiffres(nombre);

    while (temp != 0) {
        int chiffre = temp % 10;
        somme += pow(chiffre, puissance);
        temp /= 10;
    }

    return somme == nombre;
}

int main() {
    int nombre;

    // Demande à l'utilisateur de saisir un nombre
    cout << "Entrez un nombre : ";
    cin >> nombre;

    // Vérifie si le nombre est un nombre narcissique ou non
    if (estNarcissique(nombre)) {
        cout << nombre << " est un nombre narcissique." << endl;
    } else {
        cout << nombre << " n'est pas un nombre narcissique." << endl;
    }

    return 0;
}
