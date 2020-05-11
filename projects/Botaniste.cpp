#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP

#include <iostream>
#include <string>
#include <vector>
#include "Plante.h"
#include "Botaniste.h"
#include "Carnivore.h"

/*class Botaniste{
    private:
    int _argent;
    std::string _nom;




    public:
    void afficher();
    void dormir(Plante * cible);
    
};*/

void Botaniste::afficher(){
    std::cout << _nom << " est un botaniste qui possède : " << _argent << " $." << std::endl;
    std::cout << _nom << " possède : " << _engrais << " engrais" << std::endl;
    std::cout << _nom << " possede : " << std::endl;

    //afficher tout le tableau

    for (int i = 0; i < _plante.size(); i++)
    {
        (*_plante[i]).afficher();
    }
    
}

void Botaniste::dormir(){
    std::cout << _nom << " dort !" <<std::endl;

    //croissance pour tout le tableau
    for (int i = 0; i < _plante.size(); i++)
    {
        (*_plante[i]).croissance();
    }

    

}
void Botaniste::ajoutePlante(Plante * cible){
    _plante.push_back(cible);
}

void Botaniste::vendre(int index){

    if ((*_plante[index]).getCroisssance() >= 50)
    {
        std::cout << _nom << " vend "<< (*_plante[index]).getNom() << std::endl;
        _argent += (*_plante[index]).getValeurs();
         _plante.erase(_plante.begin()+index);
    }
    else if ((*_plante[index]).getCroisssance() < 50){
        std::cout << (*_plante[index]).getNom() << " est trop jeune pour être vendu !" << std::endl;
    }
    
}

void Botaniste::arroser(Plante * cible){
    (*cible).arroser();
}

void Botaniste::engrais(Plante * cible){

        
        if (_engrais > 0)
        {
            std::cout << _nom << " donne de l'engrais a : " << (*cible).getNom() << std::endl;
        (*cible).donnerDeLengrais();
            _engrais -=20;

        }
        

    
    
}

void Botaniste::tailler(Plante * cible){
    (*cible).tailler();
}

void Botaniste::acheterEngrais(){
    if (_argent > 0)
    {
        std::cout << _nom << " achete de l'engrais ! " << std::endl;
        _argent -= 20;
        _engrais +=20;
    }
    
    
}

std::string Botaniste::getNom(){
    return _nom;
}

void Botaniste::donnerAManger(Carnivore * cible){
    std::cout << _nom << " donne a manger a : " << (*cible).getNom() << std::endl;
    (*cible).donnerMouche();
}

 Botaniste::Botaniste(std::string nom, std::vector<Plante*> plante): _nom(nom), _plante(plante), _argent(1000), _engrais(200) {}
#endif