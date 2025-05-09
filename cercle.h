#ifndef CERCLE_H_INCLUDED
#define CERCLE_H_INCLUDED

#include <iostream> 
using namespace std;

const double PI = 3.141592653589;

typedef struct{
    unsigned int x;
    unsigned int y;
}Centre;

class Cercle{
    Centre centre;
    unsigned int rayon;

    public:
        Cercle (unsigned int , unsigned int , unsigned int);
        unsigned int GetRayon();
        Centre Getcentre();
        unsigned int perimetre();
        float surface();
        Cercle SetRayon(unsigned int);
        Cercle SetCentre(unsigned int a, unsigned int b);
        bool Compare(Cercle&);
        void afficher();

        //la surdéfinition des methodes << et ==
        bool operator==(Cercle&);
        friend ostream& operator<<(ostream&,Cercle&);
        /*pour avoir l'affichage du centre j'ai surdéfinit une methode
        qui permet l'affichage du centre . */
        void affichage();
 

};













#endif //CERCLE_H_INCLUDED