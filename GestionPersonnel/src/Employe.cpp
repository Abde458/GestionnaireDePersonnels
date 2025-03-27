#include "Employe.h"

Employe::Employe(string nom, string prenom, string date):
    nom(nom), prenom(prenom), date(date)
{
    //ctor
}

Employe::~Employe()
{
    //dtor
}
double Employe::getSalaire()
{
    return salaire;
}
void Employe::setSalaire(double salaire)
{
    this->salaire = salaire;
}
string Employe::getInfo()
{
    string info = "";

    info =   "Fiche employe :\nNom : " + nom + "\n"
           + "Prenom : " + prenom + "\n"
           + "Date entree : " + date + "\n"
           + "Salaire : " + to_string(salaire) + "\n";
     return info;
}
