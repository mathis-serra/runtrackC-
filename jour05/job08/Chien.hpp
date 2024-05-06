#ifndef CHIEN_HPP
#define CHIEN_HPP

#include <iostream>
#include "Animal.hpp"

class Chien : public Animal {
    public:
        void crier() const {
            std::cout << "Ouaf" << std::endl;
        }

        void manger() const {
            std::cout << "Le chien mange des croquettes" << std::endl;
        }
};
#endif