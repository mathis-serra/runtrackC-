#include <iostream>
using namespace std;

int main() {
    int a, b;

    
    cout << "Entrez la borne inferieure a : ";
    cin >> a;
    cout << "Entrez la borne superieure b : ";
    cin >> b;

   
    if (b < a) {
        cout << "Erreur : la borne superieure b doit être supérieure ou égale à la borne inferieure a." << endl;
        return 1; 
    }

   
    cout << "Les entiers de " << a << " a " << b << " sont : ";
    for (int i = a; i <= b; ++i) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
