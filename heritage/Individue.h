#ifndef INDIVIDUE_H
#define INDIVIDUE_H

#include <string>
#include "Batiment.h"
#include "Hopital.h"

using namespace std;

class Individue
{
protected:
    string nom;
    string prenom;
    int age;
public:
    Individue(){}
    ~Individue(){}

    void set_name(string nom_);
    void set_firstname(string prenom_);

    string get_name();
    string get_firstname();
    int get_age();
};

//heritge de la class individue


#endif