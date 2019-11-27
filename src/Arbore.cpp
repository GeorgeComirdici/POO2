#include "Arbore.h"

Arbore::Arbore()
{
    nr_noduri=0;
}
Arbore::~Arbore()
{
    nr_noduri=0;
}
void Arbore::setNrNoduri(int x)
{
    nr_noduri=x;                          //functie care seteaza numarul de noduri
}
int Arbore::getNrNoduri()
{
    return nr_noduri;                     //functie care returneaza numarul de noduri
}

