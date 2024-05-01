#include <iostream>
using namespace std;

double sommeHarmonique(int n) {
    double somme = 0.0;
    for (int i = 1; i <= n; ++i) {
        somme += 1.0 / i;
    }
    return somme;
}

int main() {
    int n;

    
    cout << "Entrez un entier n : ";
    cin >> n;

    
    if (n <= 0) {
        cout << "Erreur : n doit être un entier positif." << endl;
        return 1;
    }

   
    cout << "La somme des " << n << " premiers termes de la série harmonique est : " << sommeHarmonique(n) << endl;

    return 0;
}
