#ifndef FLEUR_H
#define FLEUR_H

#include <iostream>
#include <string>
#include <vector>
#include "Plante.h"

class Fleur: public Plante{
    protected:
    int _eclot;
    int _save_valeurs;
    

    public:
    void afficher();
    void croissance();

    Fleur(std::string nom, int valeurs);
};

#endif