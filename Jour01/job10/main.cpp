#include <iostream>
using namespace std;

int main()
{
    
    int a; 
    int b;
    int n;
    int t;

    cout << "Le prix au kilos" << endl;
    cin >> a; 
    cout << "Le nombre de kilos " << endl;
    cin >> b; 
    cout << "le taux tva" << endl;
    cin >> n;


    t = a * b + (n * a * b) / 100;
    cout << "Le prix TTC est de " << t <<"euros"  << endl;

    return 0;


}