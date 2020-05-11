#ifndef CARNIVORE_CPP
#define CARNIVORE_CPP

#include <iostream>
#include <string>
#include <vector>
#include "Plante.h"
#include "Carnivore.h"

/*class Carnivore: public Plante{
    protected:
    int manger;
    

    public:
    void afficher();
    void croissance();
    void getMouche();

    Carnivore(std::string nom, int valeurs);
};*/

void Carnivore::afficher(){
    if (_manger !=1)
    {
        std::cout << _nom << " est une plante carnivore  qui possède : " << _pointDeVie << " point de vie et : " << _hydratation << " / " << _hydratation_max << " hydratation. Elle grandi a une croissance de : " << _croissance << " et elle a faim !"  << std::endl;
    }
    else if (_manger == 1)
    {
        std::cout << _nom << " est une plante carnivore  qui possède : " << _pointDeVie << " point de vie et : " << _hydratation << " / " << _hydratation_max << " hydratation. Elle grandi a une croissance de : " << _croissance << " et elle n'a pas  faim !"  << std::endl;
    }


    
    
    
}

void Carnivore::croissance(){
    //actualiser jour
    _semaine +=1;
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
    if (_manger == 0)
    {
        std::cout << _nom << "meurt de faim ! " << std::endl;
        _pointDeVie -= 20;
    }
    

    _hydratation -=10;
    _taillage -= 10;
    if (_semaine >= 7)
    {
        _semaine = 0;
        _manger = 0;
    }
    
}

void Carnivore::donnerMouche(){
    _manger =1 ;
}

void Carnivore::getMouche(){
    if (_manger == 1)
    {
         std::cout << _nom << " est en train de digérer une mouche !" << std::endl;
    }
    else if (_manger == 0)
    {
        std::cout << _nom << " a fini de digérer la mouche et en attend une autre ! " << std::endl;
    }
    
}

    
   

Carnivore::Carnivore(std::string nom, int valeurs, int manger):  Plante(nom, valeurs), _manger(manger), _semaine(0) {}

#endif