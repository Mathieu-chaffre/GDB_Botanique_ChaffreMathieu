#include <iostream>
#include <string>
#include <vector>
#include "Plante.cpp"
#include "Botaniste.cpp"
#include "Fleur.cpp"
#include "Carnivore.cpp"

int main()
{
    Plante (*Maplante) = new Plante("Link", 10);

    Fleur (*Mafleur) = new Fleur("Zelda", 20);

    Carnivore (*Carni) = new Carnivore("Carni", 20, 0);


    Botaniste (*Moi) = new Botaniste("Mathieu", std::vector<Plante*> (1, Maplante) );

    (*Moi).ajoutePlante(Mafleur);
    (*Moi).ajoutePlante(Carni);

    (*Moi).afficher();
    (*Moi).donnerAManger(Carni);
    (*Moi).arroser(Carni);
    (*Moi).engrais(Carni);
    (*Moi).tailler(Carni);
    (*Moi).afficher();
    (*Moi).acheterEngrais();

    (*Moi).arroser(Mafleur);
    (*Moi).engrais(Mafleur);
    (*Moi).tailler(Mafleur);
    (*Moi).afficher();
    (*Moi).acheterEngrais();


    (*Moi).arroser(Maplante);
    (*Moi).engrais(Maplante);
    (*Moi).tailler(Maplante);
    (*Moi).afficher();

    (*Moi).dormir();
    (*Moi).arroser(Carni);
    (*Moi).engrais(Mafleur);
    (*Moi).arroser(Mafleur);
    (*Moi).dormir();
    (*Moi).afficher();
    (*Moi).vendre(1);
    
    (*Moi).afficher();
    (*Moi).vendre(0);

    (*Moi).dormir();
    (*Moi).dormir();
    (*Moi).afficher();
    (*Moi).arroser(Carni);
    (*Moi).arroser(Carni);
    (*Moi).dormir();
    (*Moi).dormir();
    (*Carni).getMouche();
    (*Moi).dormir();
    (*Carni).getMouche();
    (*Moi).donnerAManger(Carni);
    (*Moi).engrais(Carni);


    

        
    return 0;
}
