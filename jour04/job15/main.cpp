#include <iostream>
using namespace std;

int main() {
    int tableau[] = {1, 2, 3, 4, 5};

   
    for (int& valeur : tableau) {
        cout << valeur << " ";
    }
    cout << endl;

    return 0;
}
