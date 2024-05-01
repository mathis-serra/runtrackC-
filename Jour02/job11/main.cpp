#include <iostream>
using namespace std;


unsigned long long factorielle(int n) {
    if (n < 0) {
        cout << "Erreur : Impossible de calculer la factorielle d'un nombre négatif." << endl;
        return 0; 
    } else if (n == 0 || n == 1) {
        return 1;
    } else {
        unsigned long long resultat = 1;
        for (int i = 2; i <= n; ++i) {
            resultat *= i;
           
            if (resultat < i) {
                cout << "Erreur : Dépassement de la capacité de stockage pour le calcul de la factorielle." << endl;
                return 0;
            }
        }
        return resultat;
    }
}

int main() {
    int n;

    
    cout << "Entrez un nombre entier : ";
    cin >> n;

    cout << n << "! = " << factorielle(n) << endl;

    return 0;
}