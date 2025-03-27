#include <iostream>
#include "Personnel.h"
#include "Technicien.h"
#include "Manutentionnaire.h"
using namespace std;

int main()
{
    Personnel personnel;

    Technicien technicien("SOUSSI","Tofirk","01/09/97",100);
    technicien.setSalaire(3500);
    Manutentionnaire manutentionnaire("SOUSSI2","Tofirk2 ","01/09/97",100);
    manutentionnaire.setSalaire(2500);

    personnel.ajouterEmploye(&technicien);
    personnel.ajouterEmploye(&manutentionnaire);

    personnel.listerEmploye();

    return 0;
}
