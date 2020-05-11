#ifndef BOTANISTE_H
#define BOTANISTE_H
#include <iostream>
#include <string>
#include <vector>
#include "Plante.h"
#include "Carnivore.h"

class Botaniste{
    private:
    int _argent;
    std::string _nom;
    int _engrais;
    std::vector<Plante*> _plante;

    public:

    void afficher();
    void dormir();
    void ajoutePlante(Plante * cible);
    void vendre(int index);
    void arroser(Plante * cible);
    void engrais(Plante * cible);
    void tailler(Plante * cible);
    void acheterEngrais();
    void donnerAManger(Carnivore * cible);
    std::string getNom();

    Botaniste(std::string nom, std::vector<Plante*> plante);


};

#endif
