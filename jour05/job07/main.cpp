#include "contact.hpp"
#include <iostream>
#pragma once
int main() {
    Contact contact1("Alice", 123456789);
    Contact contact2("Bob", 987654321);

    std::cout << "Contact 1 :\n";
    contact1.afficherInfos();
    std::cout << "\nContact 2 :\n";
    contact2.afficherInfos();

    Contact copieContact1 = contact1;
    Contact copieContact2 = contact2;

    copieContact1.modifierNumero(111111111);
    copieContact2.modifierNumero(999999999);

    std::cout << "\nCopie de contact 1 :\n";
    copieContact1.afficherInfos();
    std::cout << "\nCopie de contact 2 :\n";
    copieContact2.afficherInfos();

    return 0;
}