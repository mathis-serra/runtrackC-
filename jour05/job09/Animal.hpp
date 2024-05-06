#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal {
private:
    static int totalAnimaux;

public:
    Animal();
    static int getTotalAnimaux();
    virtual void crier() const = 0;
    virtual void manger() const = 0;
};

#endif // ANIMAL_HPP