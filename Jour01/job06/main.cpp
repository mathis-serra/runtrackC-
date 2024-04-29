#include <iostream>
using namespace std;

int main()
{
    int a;
    int n;
    cin >> a;
    cout << "Enter a number: "<< endl;
    for (n= 0; n < 11; n++)
        cout << (a * n ) << endl;
    return 0;
}