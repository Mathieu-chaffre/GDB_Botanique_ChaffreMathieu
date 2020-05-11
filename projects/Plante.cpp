#ifndef PLANTE_CPP
#define PLANTE_CPP

#include <iostream>
#include <string>
#include <vector>
#include "Plante.h"

/*class Plante{
    protected:
    int _pointDeVie;
    std::string _nom;
    int hydratation;
    int taillage;
    int croissance;

    public:
    void afficher();
    void donnerDeLengrais();
    void tailler();
    void arroser();
};*/

void Plante::afficher(){
    std::cout << _nom << " est une plante  qui possède : " << _pointDeVie << " point de vie et : " << _hydratation << " / " << _hydratation_max << " hydratation. Elle grandi a une croissance de : " << _croissance  << std::endl;
}

void Plante::donnerDeLengrais(){
    _croissance += 20;
}

void Plante::arroser(){
    std::cout << _nom << " est arrosé !" << std::endl;
    _hydratation += 20;

    if (_hydratation_max >= 50)
    {
        _pointDeVie -= 10;
        _hydratation = 0;
        std::cout << _nom << " a trop d'eau et est en train de se noyer ! " << std::endl;
    }
    
    
}

void Plante::tailler(){
    std::cout << _nom << " est taillé ! " << std::endl;
    _taillage +=20;
    if (_taillage >= 50)
    {
        std::cout << _nom << " est trop taillé !" << std::endl;
        _pointDeVie -= 20;
        _taillage = 0;
    }
    
    
}



void Plante::croissance(){

    //gérer croissance et vie
    if (_pointDeVie <= 0 )
    {
        std::cout << _nom << " est morte! " << std::endl;
        _valeurs = 0;
    }
    
    else if (_pointDeVie <= 10 && _pointDeVie > 0)
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

    if(_taillage <= 0){
        std::cout << _nom << " n'est pas bien taillé" << std::endl;
        _pointDeVie -=2;
    }


    if(_hydratation <= 0){
        std::cout << _nom << " meurt de soif! " << std::endl;
        _pointDeVie -= 10;
    }

    _hydratation -=10;
    _taillage -= 10;
}

std::string Plante::getNom(){
    return _nom;
}

int Plante::getCroisssance(){
    return _croissance;
}

int Plante::getValeurs(){
    return _valeurs;
}

Plante::Plante(std::string nom, int valeurs):  _pointDeVie(40), _nom(nom), _hydratation(0), _hydratation_max(40), _taillage(0), _croissance(0), _valeurs(valeurs) {}

#endif