#include <iostream>
using namespace std;

int main() {
    
    int year = 2019;
    double pi = 3.14;

    void *tableau[] = {(void*)&year, (void*)"La Plateforme", (void*)&pi, (void*)"Étudiants"};

   
    cout << "Adresse et valeur de chaque élément du tableau :" << endl;
    for (int i = 0; i < sizeof(tableau) / sizeof(tableau[0]); ++i) {
        cout << "Adresse de l'élément " << i << " : " << tableau[i] << ", Valeur : ";
        
        if (i == 0 || i == 2) {
            cout << *((int*)tableau[i]) << endl;
        } else {
            cout << (const char*)tableau[i] << endl;
        }
    }

    return 0;
}
