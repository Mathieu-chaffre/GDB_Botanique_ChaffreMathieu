#ifndef PLANTE_H
#define PLANTE_H

#include <iostream>
#include <string>
#include <vector>

class Plante{
    protected:
    int _pointDeVie;
    std::string _nom;
    int _hydratation;
    int _hydratation_max;
    int _taillage;
    int _croissance;
    int _valeurs;

    public:
    void virtual afficher();
    void donnerDeLengrais();
    void tailler();
    void arroser();
    void virtual croissance();
    std::string getNom();
    int getCroisssance();
    int getValeurs();
    Plante(std::string nom, int valeurs);
};

#endif