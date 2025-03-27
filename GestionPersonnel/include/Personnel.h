#ifndef PERSONNEL_H
#define PERSONNEL_H

#include "Employe.h"

class Personnel
{
    public:
        Personnel();
        virtual ~Personnel();
        unsigned int taille();
        double totalSalaire();
        void ajouterEmploye(Employe*);
        void retirerEmploye();
        void listerEmploye();

    protected:

        Employe* staff[100] = {nullptr};
        unsigned int nbEmploye = 0;

    private:
};

#endif // PERSONNEL_H
