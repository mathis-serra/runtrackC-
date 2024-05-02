#include <iostream>
using namespace std;

int main() {
    const int taille = 10;
    int T[taille];
    int indiceMax = 0; 

    cout << "Entrez 10 entiers : ";
    for (int i = 0; i < taille; ++i) {
        cin >> T[i];
    }

   
    for (int i = 1; i < taille; ++i) {
        cout << T[i] << endl;
        if (T[i] > T[indiceMax]) {
            indiceMax = i; 
        }
    }

 
    cout << "L'indice de l'element le plus grand est : " << indiceMax << endl;

    return 0;
}
