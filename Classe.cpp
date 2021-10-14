//
// Created by eric on 14/10/2021.
//

#include "Classe.h"

Classe::Classe(const string &nom):nom(nom) {

}

Eleve Classe::rechercheparID(int id) {
    for(Eleve e:eleves)
    {
        if(e.getID()==id)
        {
            return e;
        }
    }
}

float Classe::moyenneClasse()
{
    float somme=0;
    for(Eleve e:eleves)
    {
      somme+=e.calculerMoyenne();
    }

    return somme/eleves.size();
}

void Classe::ajouterEleve(Eleve &eleve) {
    eleves.push_back(eleve);

}

void Classe::retirerEleve(int id) {

    for(int i=0;i<eleves.size();i++)
    {
        if(eleves[i].getID()==id)
        {
            auto pos=eleves.begin()+i;
            eleves.erase(pos);
            break;
        }
    }

}
 vector<Eleve> &Classe::getEleves() {
    return eleves;
}
