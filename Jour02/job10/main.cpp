#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double nombre;

    while (true) {
      
        cout << "Entrez un nombre reel (0 pour quitter) : ";
        cin >> nombre;

        
        if (nombre == 0) {
            break;
        }

        
        if (nombre < 0) {
            cout << "Erreur : La racine carrée d'un nombre négatif n'est pas définie." << endl;
        } else {

            cout << "La racine carree de " << nombre << " est : " << sqrt(nombre) << endl;
        }
    }

    return 0;
}
