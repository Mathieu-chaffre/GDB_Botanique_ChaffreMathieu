#ifndef FLEUR_CPP
#define FLEUR_CPP

#include <iostream>
#include <string>
#include <vector>
#include "Plante.h"
#include "Fleur.h"

/*class Fleur: public Plante{
    protected:
    

    public:
    void afficher();
    void croissance();
};*/

void Fleur::afficher(){
    std::cout << _nom << " est une fleur  qui possède : " << _pointDeVie << " point de vie et : " << _hydratation << " / " << _hydratation_max << " hydratation. Elle grandi a une croissance de : " << _croissance  << std::endl;
}

void Fleur::croissance(){

    //gérer la croissance
    
    if (_pointDeVie <= 0 )
    {
        std::cout << _nom << " est morte! " << std::endl;
        _valeurs = 0;
    }
    
    if (_pointDeVie <= 10 && _pointDeVie > 0)
    {
        
        std::cout << _nom << " est en mauvaise santé ! " << std::endl;
    }
    else if (_pointDeVie == 10)
    {
        std::cout << _nom << " est en moyenne santé ! Elle ne pousse que peu ! " << std::endl;
        _croissance +=5;
    }
    
    else
    {
         _croissance +=20;
        std::cout << _nom << " est en bonne santé ! Et pousse vite" << std::endl;
    }

    //gérer la valeurs de la fleur

    if (_croissance >= 50 && _croissance <= 90 && _eclot == 0)
    {
        std::cout << _nom << " est éclot !" << std::endl;
        _valeurs = _valeurs*2;
        _eclot = 1;
    }
     if (_croissance >= 90)
    {

        std::cout << _nom << " est une ptit fleurs fané !" << std::endl;
        _valeurs = _save_valeurs/2;

    }
    else if (_croissance < 50){
        std::cout << _nom << " est encore en cocon ! " << std::endl;
    }
    //verifier taillage et manger
    if(_taillage <= 0){
        std::cout << _nom << " n'est pas bien taillé" << std::endl;
        _pointDeVie -=2;
    }


    if(_hydratation <= 0){
        std::cout << _nom << " meurt de soif! " << std::endl;
        _pointDeVie -= 10;
    }
    //perte de stats
    _hydratation -=10;
    _taillage -= 10;
    
    
    
}

Fleur::Fleur(std::string nom, int valeurs): Plante(nom, valeurs), _eclot(0), _save_valeurs(valeurs){}

#endif