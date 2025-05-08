#include <iostream>
#include "cercle.h"


using namespace std;

int main () {

    bool m;
    Cercle c3(0,0,0); Cercle c4(0,0,0);
    Cercle c1(3,4,6);Cercle c2(1,2,5);
    c1.afficher();
    c2.afficher();
    cout << "affichage du cercle apres la modification du rayon :" << endl;
    c3=c1.SetRayon(4);
    c3.afficher();
    cout << "affichage du cercle apres la modification du centre :" << endl;
    c4=c2.SetCentre(2,1);
    c4.afficher();
    m=c1.Compare(c2);
    if(m){
        cout << "la comparaison est vrai" << endl;
    }
    else{
        cout << "la comparaison est fausse" << endl;
    }

    return 0 ;
}