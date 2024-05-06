#include "Animal.hpp"

int Animal::totalAnimaux = 0;

Animal::Animal() {
    totalAnimaux++;
}

int Animal::getTotalAnimaux() {
    return totalAnimaux;
}