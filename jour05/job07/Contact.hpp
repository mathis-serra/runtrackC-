#include <iostream>
#include <string>

class Contact {
private:
    std::string nom;
    int numero;

public:
    Contact(const std::string& nom, int numero) : nom(nom), numero(numero) {}

    Contact(const Contact& autreContact) : nom(autreContact.nom), numero(autreContact.numero) {}

    void afficherInfos() const {
        std::cout << "Nom : " << nom << std::endl;
        std::cout << "Numéro de téléphone : " << numero << std::endl;
    }

    void modifierNumero(int nouveauNumero) {
        numero = nouveauNumero;
    }
};