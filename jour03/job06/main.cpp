#include <iostream>
using namespace std;

int main() {
    const int taille = 10;
    int T[taille];
    int compte = 0;

   
    cout << "Entrez 10 entiers : ";
    for (int i = 0; i < taille; ++i) {
        cin >> T[i];
    }

  
    for (int i = 0; i < taille; ++i) {
        if (T[i] >= 5) {
            compte++;
        }
    }

   
    cout << "Le nombre d'entiers supérieurs ou égaux à 5 est : " << compte << endl;

    return 0;
}
