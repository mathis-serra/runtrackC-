#include <iostream>
using namespace std;

const int TAILLE_MAX = 100;

int main() {
    char tab[TAILLE_MAX]; 
    int i = 0;

    cout << "Entrez une chaine de caracteres : ";
    cin.getline(tab, TAILLE_MAX); 

    
    while (tab[i] != '\0') {
        cout << "tab[" << i << "] = " << tab[i] << endl;
        i++;
    }

    return 0;
}
