//
// Created by eric on 14/10/2021.
//

#ifndef CORRECTIONC__N_1_CLASSE_H
#define CORRECTIONC__N_1_CLASSE_H

#include <string>
#include "Eleve.h"

using namespace std;

class Classe {
private:
    string nom;
    vector<Eleve> eleves;
public:
    Classe(const string &nom);
    Eleve rechercheparID (int id);
    float moyenneClasse();
    void ajouterEleve (Eleve &eleve);
    void retirerEleve (int id);

vector<Eleve> &getEleves();
};

#endif //CORRECTIONC__N_1_CLASSE_H
