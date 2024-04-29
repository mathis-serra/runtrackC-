#include <iostream>
using namespace std;

int main() {
    int total = 0; 
    int entier;     

    cout << "Entrez cinq entiers :\n";
    
    
    for (int i = 0; i < 5; ++i) {
        cin >> entier;
        total += entier;
    }

   
    double moyenne = static_cast<double>(total) / 5;

    
    cout << "La moyenne des cinq entiers est : " << moyenne << endl;

    return 0;
}

