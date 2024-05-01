#include <iostream>
using namespace std;

int main() {
    
    for (int multiplicande = 1; multiplicande <= 10; ++multiplicande) {
        cout << "Table de multiplication pour " << multiplicande << " :" << endl;
        
       
        for (int multiplicateur = 1; multiplicateur <= 10; ++multiplicateur) {
            cout << multiplicande << " x " << multiplicateur << " = " << multiplicande * multiplicateur << endl;
        }
        
        
        cout << "-----------------------" << endl;
    }
    
    return 0;
}
