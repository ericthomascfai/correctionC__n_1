//
// Created by eric on 14/10/2021.
//

#ifndef CORRECTIONC__N_1_ELEVE_H
#define CORRECTIONC__N_1_ELEVE_H

#include <string>
#include "Note.h"
#include "vector"
using namespace std;

class Eleve {
private:
    int id;
    string prenom;
    string nom;
    vector<Note> listnotes;
public:
    Eleve(int id,const string &prenom,const string &nom);
    float calculerMoyenne();
    string getNom();
    int getID();
    void ajouterNote(Note *note);
    void retirer(int rang); //rang=position dans le vecteur
    const vector<Note> &getListnotes() const;
};


#endif //CORRECTIONC__N_1_ELEVE_H
