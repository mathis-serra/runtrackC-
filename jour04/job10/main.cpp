#include<iostream>
#include<vector>
using namespace std;



void menu()
{
    cout << "\nMenu :" << endl;
    cout << "1. Ajouter une note" << endl;
    cout << "2. Afficher la liste de notes" << endl;
    cout << "3. Supprimer une note d'un étudiant" << endl;
    cout << "4. Afficher la moyenne des notes" << endl;
    cout << "5. Quitter" << endl;
    cout << "Choix : ";
}



void ajouterNote(vector<int>& notes){
    int note;
    cout << "ajouter une note :" << endl;
    cin >> note;
    notes.push_back(note);
    cout << "la note a été rajouté avec succés !" << endl; 

}

void afficherNote(vector<int>& notes){
    if(notes.empty()){
        cout << "il n'y a pas de note" << endl;
    }else{
        cout << "liste de note" << endl;
        for(auto const& note : notes){
            cout << note << endl; 
        }
    }

}


void supprimerNote(vector<int>& notes){
    if(notes.empty()){
        cout << "il n'y a pas de note" << endl;
    }else{
        int note;
        cout << "entrer une note a supprimé" << endl;
        cin >> note;

        auto it = find(notes.begin(), notes.end(), note);
        if (it != notes.end()) {
            notes.erase(it);
            cout << "Note supprimée avec succès." << endl;
        } else {
            cout << "La note n'a pas été trouvée." << endl;
    }
    }
}


void afficherMoyenne(vector<int>& notes){
    if(notes.empty()){
        cout << "il n'y a pas de note" << endl;
    }else{ 
        double somme = 0;
        for (int note : notes) {
            somme += note;
        }
        double moyenne = somme / notes.size();
        cout << "La moyenne des notes est : " << moyenne << endl;
        }
}



int main()
{
    vector<int> notes;
    int choix;

    do {
        menu();
        cin >> choix;

        switch (choix) {
            case 1:
                ajouterNote(notes);
                break;

            case 2:
                afficherNote(notes);
                break;

            case 3:
                supprimerNote(notes);
                break;

            case 4:
                afficherMoyenne(notes);
                break;

            case 5: 
                cout << "Fin du programme." << endl;
                break;

            default:
                cout << "Choix invalide. Veuillez réessayer." << endl;
                break;
        }
    } while (choix != 5);

    return 0;
}