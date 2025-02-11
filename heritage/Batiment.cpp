#include <iostream>
#include "Batiment.h"
#include <stdexcept>


using namespace ville;
using namespace std;


string Batiment::get_place()
{
    return place; 
}

double Batiment::get_surface()
{
    return surface;
}

int Batiment::get_nbrEtage()
{
    return nbrEtage;
}

bool Batiment::get_state()
{
    return isOpen;
}

string Batiment::get_name()
{
    return name;
}

void Batiment::set_place(string place_)
{   
    place = place_;

    return;
}

void Batiment::set_surface(double surface_)
{
    if(surface_ > 0)
        surface = surface_;
    else
        throw invalid_argument("surface entry not valid");

    return;
}

void Batiment::set_nbrEtage(int nbrEtage_)
{
    if(nbrEtage > 0)
        nbrEtage = nbrEtage_;
    else    
        throw invalid_argument("floor number not valid");

    return;
}

void Batiment::set_state(bool isOpen_)
{
    isOpen = isOpen_;

    return;
}

void Batiment::set_name(string name_)
{
    name = name_;

    return;
}

