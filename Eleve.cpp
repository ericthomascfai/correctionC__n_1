//
// Created by eric on 14/10/2021.
//

#include "Eleve.h"

Eleve::Eleve(int id, const string &prenom, const string &nom):id(id),prenom(prenom),nom(nom) {

}

float Eleve::calculerMoyenne() {
    float somme=0;
    for(Note n:listnotes)
    {
        somme+=n.getNote();
    }
    return somme/listnotes.size();
}

string Eleve::getNom() {
    return nom;
}

int Eleve::getID() {
    return id;
}

void Eleve::ajouterNote(Note *note) {
listnotes.push_back(*note);
}

void Eleve::retirer(int rang) {
    auto pos=listnotes.begin()+rang;
    listnotes.erase(pos);
}

const vector<Note> &Eleve::getListnotes() const {
    return listnotes;
}
