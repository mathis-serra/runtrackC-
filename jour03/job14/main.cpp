#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool estPalindrome(const string& mot) {
    int debut = 0;
    int fin = mot.length() - 1;

    while (debut < fin) {
        if (mot[debut] != mot[fin]) {
            return false; // Le mot n'est pas un palindrome
        }
        debut++;
        fin--;
    }
    return true; // Le mot est un palindrome
}

int main() {
    // Création du tableau contenant les chaînes de caractères
    vector<string> tab = {"radar", "hello", "lvel", "stats", "world"};

    // Recherche des palindromes dans le tableau
    cout << "Les palindromes dans le tableau sont : " << endl;
    for (const string& mot : tab) {
        if (estPalindrome(mot)) {
            cout << mot << endl;
        }
    }

    return 0;
}
