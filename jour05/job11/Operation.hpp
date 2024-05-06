#ifndef OPERATION_HPP
#define OPERATION_HPP

#include <iostream>
#include <stdexcept>

class Operation {
public:
    Operation(double val) : valeur(val) {}

    Operation operator+(const Operation& other) const {
        return Operation(this->valeur + other.valeur);
    }

    Operation operator-(const Operation& other) const {
        return Operation(this->valeur - other.valeur);
    }

    Operation operator*(const Operation& other) const {
        return Operation(this->valeur * other.valeur);
    }

    Operation operator/(const Operation& other) const {
        if (other.valeur == 0) {
            throw std::invalid_argument("Division par zéro");
        }
        return Operation(this->valeur / other.valeur);
    }

    friend std::ostream& operator<<(std::ostream& os, const Operation& op) {
        os << op.valeur;
        return os;
    }

private:
    double valeur;
};
#endif 