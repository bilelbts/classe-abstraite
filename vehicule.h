#include <iostream>      //inclure la bibliotheque iostream
#include <string>
using namespace std;     //pour éviter de devoir écrire a chaque fois std::
class vehicule                                     //déclarer la classe
{   
    protected :                            //création des membres protégés            
    int m_prix;                           //déclaration des variable  
    public :                            //création des membres public
    vehicule();                        //déclaration du constructeur par défaut
    ~vehicule();  
    void affiche();
};    

