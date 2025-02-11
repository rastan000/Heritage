#ifndef MEDECIN_H
#define MEDECIN_H

#include "Medecin.h"
#include "Individue.h"


namespace ville
{
    class Medecin : public Individue
    {
    private:
        Hopital workPlace;
        string speciality;
        int matricule; //si affilier a un hopital //numero dans la list du personnel
    public:
        Medecin(){}
        ~Medecin(){}

        Hopital get_workPlace();
        string get_speciality();
        int get_matricule();

        void set_matricule();
        void set_workPlacce(Hopital workPlace_);
        void set_speciality(string);
    };
}

#endif