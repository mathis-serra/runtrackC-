#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str1, str2;

    // Demande à l'utilisateur de saisir une chaîne de caractères
    cout << "Entrez une chaine de caracteres : ";
    getline(cin, str1);

    // Initialise la deuxième chaîne de caractères avec "Bonjour"
    str2 = "Bonjour";

    // Trie les deux chaînes dans l'ordre lexicographique
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Affiche les deux chaînes triées
    cout << "La chaine 1 trie : " << str1 << endl;
    cout << "La chaine 2 trie : " << str2 << endl;

    return 0;
}
