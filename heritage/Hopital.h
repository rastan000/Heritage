#ifndef HOPITAL_H
#define HOPITAL_H

#include "Batiment.h"
#include <vector>
#include "Medecin.h"

using namespace std;

namespace ville
{
    using namespace std;

    class Hopital : public Batiment
    {
    private:
        vector<Medecin> personel;
    public:
        void set_personnel(Medecin);

        vector<Medecin> get_personnel_list();
        Medecin get_medecin();

        void make_list();       //put the medecin in the persinnel list
    };
}

#endif