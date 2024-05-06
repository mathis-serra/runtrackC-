#ifndef JOUEUR_HPP
#define JOUEUR_HPP

class Joueur {
private:
    int x;
    int y;

public:
    Joueur();

    Joueur(int initial_x, int initial_y) : x(initial_x), y(initial_y) {}


    void initialiserPosition(int posX, int posY);
    void afficherPosition();
    void deplacer(int deltaX, int deltaY);
};

#endif