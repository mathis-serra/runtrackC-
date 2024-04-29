#include <iostream>
using namespace std;


int main()
{
    int N; 
    int somme = 0; 




    cout << " Enter a value" << endl;
    cin >> N; 

    for (int i = 5; i <= N; i++){
        int cube = i * i * i;
        somme =+cube; 
    }

    cout << "La somme des cubes de 5^3 à " << N << "^3 est : " << somme << endl;

    return 0;
}