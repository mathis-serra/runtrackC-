#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a number: "<< endl;
    cin >> a;
    int n;
    for (n= 0; n < 11; n++)
        cout << (a * n ) << endl;
    return 0;
}