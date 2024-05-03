#include <iostream>
using namespace std;



int main(){

    int tableau[5] = {1,14,5,7,9};
    int largest = tableau[0];


    for(int i = 0; i < sizeof(tableau)/ sizeof(tableau[0]); i++){
        if (tableau[i]> largest ){
            largest = tableau[i];
        }
    }

    cout << largest << endl;
     

    return 0;
}
