#ifndef JOUEUR_HPP
#define JOUEUR_HPP

class Joueur {
private:
    int x;
    int y;
    string nom;

public:
    Joueur(): x(0), y(0), nom("") {}
    
    Joueur(int x_coord, int y_coord): x(x_coord), y(y_coord), nom("") {}

    Joueur(int x_coord, int y_coord, const string&name): x(x_coord), y(y_coord), nom(name) {}

    void initialiserPosition(int posX, int posY);
    void afficherPosition();
    void deplacer(int deltaX, int deltaY);
};

#endif