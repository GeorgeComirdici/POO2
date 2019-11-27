#ifndef ARBORE_BINAR_H
#define ARBORE_BINAR_H
#include "Arbore_oarecare.h"

class Arbore_binar : public Arbore_oarecare
{
    public:
        Arbore_binar();
        Arbore_binar(Nod*);
        ~Arbore_binar();
        void ParcurgereSRD(Nod*);
        void ParcurgereRSD(Nod*);
        void ParcurgereSDR(Nod*);
};

#endif // ARBORE_BINAR_H
