#include "Individue.h"
#include "Ecole.h"

using namespace std;


namespace ville
{
    enum Matiere : int { 
                PC,
                MAT,
                SVT,
                LANG,
                OTHERS 
             };

    class Enseignant : public Individue
    {
    private:
        Matiere matiere;        
        Ecole workplace;
    public:
        Enseignant(){}
        ~Enseignant(){}

        void make_list_e();   //append the ensegnant info on the vector enseignant_list and put him or he on his class;
        void set_matiere(Matiere matiere_);
        Matiere get_matiere();
    };
}