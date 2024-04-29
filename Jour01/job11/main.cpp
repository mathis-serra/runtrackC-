#include<iostream> 
using namespace std;


int main()
{
    int a = 5;
    int b = 7;
    int temp;
    

    cout << " before swapping !" << endl;
    cout << "a =" << a << " b =" << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nafter swapping" << endl; 
    cout << "a =" << a << " b =" << b << endl; 
    return 0; 
}