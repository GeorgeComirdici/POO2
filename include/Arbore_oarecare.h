#ifndef ARBORE_OARECARE_H
#define ARBORE_OARECARE_H
#include "Arbore.h"
#include <queue>

class Arbore_oarecare:public Arbore
{
    public:
        Arbore_oarecare();
        Arbore_oarecare(Nod*);
        virtual ~Arbore_oarecare();
        void Creare(Nod*);
        void ParcurgereAdancime(Nod*);
        void ParcurgereLatime(Nod*);
        Nod* getRadacina();
        friend istream& operator>>(istream& is,Arbore_oarecare& x)             //supraincarcare operator >>
        {

            is>>x.rad;
            int aux;
            is>>aux;
            x.setNrNoduri(aux);
            return is;
        }
        void setRadacina(Nod*);
    private:
        Nod* rad;
};

#endif // ARBORE_OARECARE_H
