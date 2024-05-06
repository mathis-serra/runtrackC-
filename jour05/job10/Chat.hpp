#ifndef CHAT_HPP
#define CHAT_HPP
#include <iostream>
#include "Animal.hpp"

class Chat: public Animal {
    public:
        void crier() const {
            std::cout << "Miaou" << std::endl;
        }

        void manger() const {
            std::cout << "Le chat mange du poisson" << std::endl;
        }

        void manger(const std::string &nourriture) const {
            std::cout << "Le chat mange " << nourriture << std::endl;
        }
};
#endif