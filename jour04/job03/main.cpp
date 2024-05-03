#include<iostream>
#include <algorithm>
using namespace std; 

int main()
{
    string chaine = "Laplateforme";

    string *ptr = &chaine; 

    reverse(ptr->begin(), ptr->end());

    cout << *ptr << endl;

    return 0;



}
