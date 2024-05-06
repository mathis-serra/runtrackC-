#include "Chat.hpp"
#include <iostream>

Chat::Chat() : Animal() {}

void Chat::crier() const {
    std::cout << "Miaou!" << std::endl;
}

void Chat::manger() const {
    std::cout << "Le chat mange du poisson." << std::endl;
}