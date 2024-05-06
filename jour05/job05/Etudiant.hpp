#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include <string>

class Etudiant {
private:
    std::string nom;
    std::string prenom;
    int age;
    int matricule;

public:
    Etudiant(const std::string& nom, const std::string& prenom, int age, int matricule)
        : nom(nom), prenom(prenom), age(age), matricule(matricule) {}
};

#endif