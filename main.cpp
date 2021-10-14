#include <iostream>
#include "Classe.h"

int main() {
    /********************création de la classe*****************************/
    Classe c=Classe("CP");
    /********************création des élèves********************************/
    Eleve e1=Eleve(1,"Jean","Daniel");
    Eleve e2=Eleve(2,"Ryanne","Zemmour");
    /*****************cration des notes**************************************/
    Note n1=Note(5);
    Note n2=Note(10);
    Note n3=Note(3);
    Note n4=Note(8);
    /*****************ajout des notes aux élèves******************************/
    e1.ajouterNote(&n1);
    e1.ajouterNote(&n2);
    e2.ajouterNote(&n3);
    e2.ajouterNote(&n4);
    /********************ajout des élèves***************************************/
    c.ajouterEleve(e1);
    c.ajouterEleve(e2);
    /************************vérification***************************************/
    cout<<"********Notes de l'élève "<<c.getEleves()[0].getNom()<<"**************"<<endl;
    for(Note n:c.getEleves()[0].getListnotes())
    {

        cout<<n.getNote()<<endl;

    }
    cout<<"*********************************************"<<endl;

    /***********************calcul moyenne élève*******************************/
    cout<<e1.calculerMoyenne()<<endl;
    /***********************Calcul moyenne de classe***************************/
    cout<<c.moyenneClasse()<<endl;
    /****************************retire une note********************************/
    c.getEleves()[0].retirer(0);
    cout<<c.moyenneClasse()<<endl;
    /****************************retire élève************************************/
    c.retirerEleve(1);
    for(Eleve e:c.getEleves())
    {
        cout<<e.getNom()<<endl;
    }
    /****************************recherche par id*********************************/
    cout<<c.rechercheparID(2).getNom()<<endl;
    return 0;
}
