#include "Personnel.h"
#include <iostream>

using namespace std;

Personnel::Personnel()
{
    //ctor
}

Personnel::~Personnel()
{
    //dtor
}
unsigned int Personnel::taille(){return nbEmploye;}
double Personnel::totalSalaire(){}
void Personnel::ajouterEmploye(Employe* e)
{
    staff[nbEmploye] = e;
    nbEmploye++;
}
void Personnel::retirerEmploye()
{

}
void Personnel::listerEmploye()
{
    cout << " *********************************** " << endl;
    cout << " ********** LISTE EMPLOYE ********** " << endl;
    cout << " *********************************** " << endl;
    for(int i = 0; i< nbEmploye; i++)
    {
        cout << staff[i]->getInfo();
        cout << " *********************************** " << endl;
    }
}
