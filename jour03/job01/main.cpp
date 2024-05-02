#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

int main() {
    string chaine = "vive la plateforme !";

  
    for (char &caractere : chaine) {
        caractere = toupper(caractere);
    }

 
    cout << chaine << endl;

    return 0;
}
