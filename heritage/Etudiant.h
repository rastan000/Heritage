#include "Ecole.h"
#include "Individue.h"


namespace ville
{
    enum Degrees {
                    MATERNEL,
                    CP1,
                    CP2,
                    CE,
                    CM1,
                    CM2,
                    MIDDLE_SCHOOL,
                    HIGH_SCHOOL,
                    L1,
                    L2,
                    L3,
                    M1,
                    M2
                 };

    class Etudiant : public Individue
    {
    private:
        Degrees degree;
        Ecole school;
    public:
        Etudiant(){}
        ~Etudiant(){}

        void set_degrees(Degrees degree_);
        Degrees get_degree();

        void set_school(Ecole school_);
        Ecole get_school();
    
        void make_list_s();   //append student on the list of student list of student and put him on his class 
    };
}