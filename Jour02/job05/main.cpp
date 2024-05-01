#include <iostream>
using namespace std;

int main() {

    float note;


    cout << "Entrez votre note (entre 0 et 20) : ";
    cin >> note;

 
    if (note >= 0 && note <= 20) {
    
        if (note > 10) {
            cout << "Validé" << endl;
        } else {
            cout << "Non validé" << endl;
        }
    } else {

        cout << "La note saisie n'est pas valide. Assurez-vous qu'elle est comprise entre 0 et 20." << endl;
    }

    return 0;
}
