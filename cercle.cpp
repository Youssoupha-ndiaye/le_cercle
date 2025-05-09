#include <iostream>
#include "cercle.h"

using namespace std;



Cercle::Cercle (unsigned int a , unsigned int b , unsigned int r){
    std::cout << "appelle du constructeur \n" ,
    std::cout << "addr=" << this << std::endl;

    centre.x=a;
    centre.y=b;
    rayon=r;
}
unsigned int Cercle:: GetRayon(){
    return rayon;
}
unsigned int Cercle::perimetre(){
    return  (3.14*rayon*rayon);

}
float Cercle::surface(){
    return 3,14*rayon*rayon;
}
Cercle Cercle::SetRayon(unsigned int a){
    return Cercle(centre.x,centre.y,rayon+a);
}
Cercle Cercle::SetCentre(unsigned int a, unsigned int b){
    return Cercle(centre.x+a , centre.y+b , rayon);
}
bool Cercle::Compare(Cercle &c) {
    if(centre.x==c.centre.x && centre.y==c.centre.y && rayon==c.rayon){
        return true;
    }
    return false;
    
}
void Cercle::afficher(){
    cout << "rayon="<< rayon << "cm" <<  endl;
    cout << "centre =" << "(" << centre.x <<","<< centre.y <<")"<< endl; 

}
// la surdéfinition des methodes 
bool Cercle::operator==(Cercle&c){
     if(centre.x==c.centre.x && centre.y==c.centre.y && rayon==c.rayon){
        return true;
    }
    return false;
}
ostream& operator<<(ostream& sortie,Cercle&c){
    sortie << "rayon="<< c.rayon << "cm"  <<" " << "centre =" << "(" << c.centre.x <<","<< c.centre.y <<")"<< endl; 
    return sortie;
}

