#include <string>
#include <iostream>

using namespace std;


namespace ville
{
    class Batiment
    {
    protected:
        string name;
        string place;
        double surface;
        int nbrEtage;
        bool isOpen;
        ///couleur (enum) syntaxe inconnue en cpp
    public:
        string get_place();
        double get_surface();
        int get_nbrEtage();
        bool get_state();
        string get_name();

        void set_place(string place_);
        void set_surface(double surface_);
        void set_nbrEtage(int nbrEtage_);
        void set_state(bool isOpen_);
        void set_name(string name_);
    };
}


