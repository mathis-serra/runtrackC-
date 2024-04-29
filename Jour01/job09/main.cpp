#include <iostream>
using namespace std;

int main()
{
    int a;
    int b; 
    int c; 
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;
    cout << "Enter a third number: ";
    cin >> c;
    if (a > b && a > c)
    {
        cout << "The biggest number is: " << a << endl;
    }
    else if (b > a && b > c)
    {
        cout << "The biggest number is: " << b << endl;
    }
    else
    {
        cout << "The biggest number is: " << c << endl;
    }
    return 0;
}