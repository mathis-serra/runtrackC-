#include <iostream>
#include "Chien.hpp"
#include "Chat.hpp"

int main() {
        Chien monChien;
        std::cout << "Pour le chien :" << std::endl;
        std::cout << "Cri : ";
        monChien.crier();
        std::cout << "Repas : ";
        monChien.manger();

        std::cout << std::endl;

        Chat monChat;
        std::cout << "Pour le chat :" << std::endl;
        std::cout << "Cri : ";
        monChat.crier();
        std::cout << "Repas : ";
        monChat.manger();   

    return 0;
}