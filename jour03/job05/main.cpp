#include <iostream>
#include<string>
using namespace std; 

int main()
{
    string heure; 
    cout << "quelle heure est-il ?" << endl;
    cin >> heure;

    if (heure.length() != 5){
        cout << "le format n'est pas bon " << endl;
    }

    else if (heure[2] != 'h' && heure[2] != 'H'){
        cout << "le format n'est pas bon " << endl;
    }

    return 0;

    
}