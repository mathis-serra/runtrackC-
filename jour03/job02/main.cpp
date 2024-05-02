#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int estVoyelle(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}






int main()
{
    string chaine = "vive la palteforme !";

    chaine.erase(remove_if(chaine.begin(), chaine.end(), estVoyelle), chaine.end());

    cout << chaine << endl;

    return 0; 

}