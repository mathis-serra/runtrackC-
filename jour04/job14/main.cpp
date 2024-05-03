#include<iostream>
using namespace std; 

int main(){


    int x = 12 ; 

    int& refx = x;

    refx =100;

    cout << x << endl; 
    
    return 0; 


    

}