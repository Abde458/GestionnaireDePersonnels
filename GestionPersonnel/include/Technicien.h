#ifndef TECHNICIEN_H
#define TECHNICIEN_H
#include "Employe.h"

class Technicien : public Employe
{
    public:
        Technicien(string nom, string prenom, string date, unsigned int unite);
        virtual ~Technicien();
        string getInfo();

    protected:

    private:
        unsigned int unite;
};

#endif // TECHNICIEN_H
