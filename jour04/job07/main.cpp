#include<iostream>
using namespace std;


int main() {
  
    int tableau[] = {10, 20, 30, 40, 50};

   
    cout << "Adresse et valeur de chaque élément du tableau :" << endl;
    for (int i = 0; i < sizeof(tableau) / sizeof(tableau[0]); ++i) {
        cout << "Adresse de l'élément " << i << " : " << &tableau[i] << ", Valeur : " << tableau[i] << endl;
    }

    return 0;
}
