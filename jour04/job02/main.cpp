
#include<iostream>
using namespace std; 

int main()
{
    int var1; 

    cout << "choisie une variable" << endl ; 

    cin >> var1;

    int var2; 

    cout << "choisie une deuxieme variable" << endl ; 

    cin >> var2;

    int *p1 = &var1;

    int *p2 = &var2;


    int temp = *p1;

    *p1 = *p2;

    *p2 = temp;

    cout << "les valeurs incersées sont " << *p1 << " " << *p2 << endl;

    return 0; 




}