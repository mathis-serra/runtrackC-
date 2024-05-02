#include<iostream>
#include <cstring>
using namespace std;



 int compareChaine(const char *chaine1,const char *chaine2)
    {
        if(strcmp(chaine1, chaine2) == 0){
            return 0;

        }else{
            return 1;
        }
    }


int main()
{


    const char *chaine1 = "bonjour Marseille";
    const char *chaine2 = "bonjour Marseille";

    
    int resultat = compareChaine(chaine1, chaine2);

    if(resultat == 0){
        cout << "Egale" << endl;
    }else{
        cout << "pas Egale" << endl;

    }
    
    return 0;

    
}

