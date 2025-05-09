#include <iostream>
#include "cercle.h"


using namespace std;

int main () {

    bool m,n;
    int i,j;
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
    cout << "affichage du centre du cercle " << endl;
    Centre p=c1.Getcentre();
    c1.affichage();
    i=c1.perimetre();
    cout << "le perimetre du cercle est :" << i << endl; 
    j=c1.surface();
    cout << " la surface du cercle est :" << j << endl;
    m=c1.Compare(c2);
    //comparaison entre les deux cercle.
    if(m){
        cout << "la comparaison est vrai" << endl;
    }
    else{
        cout << "la comparaison est fausse" << endl;
    }
    cout <<"appel des fonctions surdefinis" << endl;
    //appelle de l'operateur du comparaison.
    n=c1.operator==(c2);
    if(n){
        cout  << "c1 et c2 sont les memes" << endl;
    }
    else{ 
        cout  << "c1 et c2 ne sont pas identique" << endl;
    }
    // appelle de l'operateur pour afficher les sortie
    cout <<c1<<c2<<c3<<c4 << endl;

    return 0 ;
}