#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a year: ";
    cin >> a;
    if (a % 400 == 0)
    { cout << "The year is a leap year." << endl; }
    else if (a % 100 == 0)
    { cout << "The year is not a leap year." << endl; }
    else if (a % 4 == 0)
    { cout << "The year is a leap year." << endl; }
    else
    { cout << "The year is not a leap year." << endl; }
    
    return 0;
}