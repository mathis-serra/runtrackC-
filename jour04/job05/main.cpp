#include<iostream>

using namespace std; 

struct Point {
    int x;
    int y;
};

int main()
{
    Point p1;

    p1.x = 10;
    p1.y = 20;

    Point *ptr = &p1;

    ptr->x = 100;
    ptr->y = 200;

    cout << "Nouvelles valeurs de x et y : " << ptr->x << ", " << ptr->y << endl;

    return 0;
    



}