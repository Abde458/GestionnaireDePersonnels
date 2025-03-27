#include "Manutentionnaire.h"

Manutentionnaire::Manutentionnaire(string nom, string prenom, string date, unsigned int heure):
    Employe(nom,prenom,date), heure(heure)
{
    //ctor
}

Manutentionnaire::~Manutentionnaire()
{
    //dtor
}
string Manutentionnaire::getInfo()
{
    string info = "";

    info =  Employe::getInfo();
    info = info + "Heure : " + to_string(heure) + "\n";
    return info;
}
