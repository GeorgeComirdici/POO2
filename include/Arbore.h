#ifndef ARBORE_H
#define ARBORE_H
#include "Nod.h"
using namespace std;
class Arbore
{
    public:
        Arbore();
        ~Arbore();
         void setNrNoduri(int);
         int getNrNoduri();
         virtual void Creare(Nod*) = 0;
    private:
        int nr_noduri;
};

#endif // ARBORE_H
