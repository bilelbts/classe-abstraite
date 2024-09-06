#include <iostream>      //inclure la bibliotheque iostream
#include <string>
using namespace std;     //pour éviter de devoir écrire a chaque fois std::
class moto                                     //déclarer la classe
{   
    protected :                            //création des membres protégés            
    double m_vitesse;                           //déclaration des variable  
    public :                            //création des membres public
    moto();                        //déclaration du constructeur par défaut
    ~moto();  
    const void affiche();
};    

