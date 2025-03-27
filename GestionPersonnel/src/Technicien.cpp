#include "Technicien.h"

Technicien::Technicien(string nom, string prenom, string date, unsigned int unite):
    Employe(nom,prenom,date), unite(unite)
{
    //ctor
}

Technicien::~Technicien()
{
    //dtor
}
string Technicien::getInfo()
{
    string info = "";

    info =  Employe::getInfo();
    info = info + "Unite : " + to_string(unite) + "\n";
    return info;
}
