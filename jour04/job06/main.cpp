#include <iostream>
using namespace std;

int main()
{
    int val1 = 17; 
    float val2 = 3.14;
    double val3 = 123.345;
    const char *cara = "La Plateformes";

    cout << "l'adresse mémoire de l'entier est :" << &val1 << endl; 
    cout << "l'adresse mémoire du float est :"  << &val2 << endl;
    cout << "l'adresse mémoire du double est : "  << &val3 << endl;
    cout << "l'adresse mémoire du char est :"  << &cara << endl;

    return 0;


}