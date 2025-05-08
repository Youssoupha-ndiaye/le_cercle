#ifndef CERCLE_H_INCLUDED
#define CERCLE_H_INCLUDED

#include <iostream> 
using namespace std;

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
        unsigned int perimetre();
        float surface();
        Cercle SetRayon(unsigned int);
        Cercle SetCentre(unsigned int a, unsigned int b);
        bool Compare(Cercle&);
        void afficher();

};













#endif //CERCLE_H_INCLUDED