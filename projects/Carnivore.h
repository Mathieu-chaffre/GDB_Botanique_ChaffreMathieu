#ifndef CARNIVORE_H
#define CARNIVORE_H

#include <iostream>
#include <string>
#include <vector>
#include "Plante.h"
#include "Botaniste.h"

class Carnivore: public Plante{
    protected:
    int _manger;
    int _semaine;
    

    public:
    void afficher();
    void croissance();
    void donnerMouche();
    void getMouche();
    Carnivore(std::string nom, int valeurs, int manger);
};

#endif