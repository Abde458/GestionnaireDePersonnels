#ifndef MANUTENTIONNAIRE_H
#define MANUTENTIONNAIRE_H
#include "Employe.h"

class Manutentionnaire : public Employe
{
    public:
        Manutentionnaire(string nom, string prenom, string date, unsigned int heure);
        virtual ~Manutentionnaire();
        string getInfo();

    protected:

    private:
        unsigned int heure;
};

#endif // MANUTENTIONNAIRE_H
