#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <iostream>

using namespace std;

class Employe
{
    public:
        Employe(string nom, string prenom, string date);
        virtual ~Employe();
        double getSalaire();
        void setSalaire(double salaire);
        virtual string getInfo();
    protected:

        string nom, prenom, date;
        double salaire = 0;

    private:
};

#endif // EMPLOYE_H
