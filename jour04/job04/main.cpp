#include <iostream>
using namespace std;


int main()
{
    int var1; 

    cout << "choisie une variable" << endl ; 

    cin >> var1;

    int var2; 

    cout << "choisie une deuxieme variable" << endl ; 

    cin >> var2;
    
    int var3; 

    cout << "choisie une troisieme variable" << endl ; 

    cin >> var3;


    int *p1 = &var1;

    int *p2 = &var2 ;

    int *p3 = &var3;

    cout << "les variables initames sont " <<var1 << "," <<var2 << ","<<var3<< endl;

    *p1 = 100;
    *p2 = 200;
    *p3 = 300;

    cout << "les nouvelles variables sont " << var1 << "," << var2 << "," << var3 << endl ;
    
    return 0; 



}