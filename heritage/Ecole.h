#ifndef ECOLE_H
#define ECOLE_H

#include <iostream>
#include "Batiment.h"
#include <vector>
#include "Etudiant.h"
#include "Enseignant.h"

using namespace std;

namespace ville
{
    struct classe_
    {
        vector<Enseignant> list;
        enum Matiere;
        vector<Etudiant> eleve;
    };
    

    class Ecole : public Batiment
    {
    private:
        vector<Etudiant> etudiant_list;         //list des etudiant
        vector<Enseignant> enseignant_list;     //list des enseignant
        vector<struct classe_> classe;          //affectation de la classe 
    public:
        Ecole(){}
        ~Ecole(){}

        vector<Enseignant> get_enseignant_list();
        vector<Etudiant> get_etudiant_list();

        Enseignant get_enseignant(string name_, string firstName);
        Etudiant get_etudiant();
    };
}

#endif