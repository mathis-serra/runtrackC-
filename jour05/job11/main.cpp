#include <iostream>
#include "Operation.hpp"

int main() {
    // Création d'objets Operation
    Operation op1(10);
    Operation op2(5);

    // Test des opérations mathématiques
    std::cout << "Addition : " << op1 + op2 << std::endl;
    std::cout << "Soustraction : " << op1 - op2 << std::endl;
    std::cout << "Multiplication : " << op1 * op2 << std::endl;

    try {
        std::cout << "Division : " << op1 / op2 << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    return 0;
}