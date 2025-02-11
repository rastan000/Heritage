#include <iostream>
#include "Ecole.h"

using namespace ville;
using namespace std;


vector<Enseignant> Ecole::get_enseignant_list()
{
    return enseignant_list;
}

vector<Etudiant> Ecole::get_etudiant_list()
{
    return etudiant_list;
}