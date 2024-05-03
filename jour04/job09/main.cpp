#include<iostream>
#include<vector>
using namespace std;



int main()
{
    vector <int> vect;
    int val;
    int iter = 10;
    

    for(int i = 0; i < iter ; i++){ 
        cout << "inserer un nombre :" << endl; 
        cin >> val;
        vect.push_back(val);
    }

    cout << "tableau apres les valeurs ajoutée" << endl;
    for(int i = 0; i < vect.size() ; i++){
        cout << vect[i] << endl;
    }

        
    return 0;
}
