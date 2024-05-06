#include <iostream>
#include "Chien.hpp"
#include "Chat.hpp"

int main() {
    Chien monChien1, monChien2;
    Chat monChat1, monChat2, monChat3;

    std::cout << "Nombre total d'animaux crees : " << Animal::getTotalAnimaux() << std::endl;

    return 0;
}