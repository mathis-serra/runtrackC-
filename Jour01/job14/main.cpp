#include <iostream>
#include <list> 
using namespace std;

int main()
{   
    int N;
    list<int> liste1;

    cout << "Entrer un entier: \n" << endl;
    cin >> N;

    
    while (N > 0) {
        int chiffre = N % 10; 
        liste1.push_back(chiffre);
        N /= 10;
    }

    cout << "liste switch" << endl;
    for (list<int>::iterator itr = liste1.begin(); itr != liste1.end(); itr++){
        cout << *itr << " ";
    }


    return 0;
}
