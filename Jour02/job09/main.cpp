#include <iostream>
using namespace std;

int main() {
    int a, b, entier;

    
    cout << "Entrez la borne inferieure a : ";
    cin >> a;
    cout << "Entrez la borne superieure b : ";
    cin >> b;

    
    if (b < a) {
        cout << "Erreur : la borne superieure b doit être supérieure ou égale à la borne inferieure a." << endl;
        return 1; 
    }

   
    cout << "Entrez un entier : ";
    cin >> entier;

   
    if (entier >= a && entier <= b) {
        cout << "GAGNE" << endl;
    } else {
        cout << "PERDU" << endl;
    }

    return 0;
}
