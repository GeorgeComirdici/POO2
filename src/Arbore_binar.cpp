#include "Arbore_binar.h"

Arbore_binar::Arbore_binar()
{
    //ctor
}
Arbore_binar::Arbore_binar(Nod* x)
{
    this->setRadacina(x);                              //constructor parametrizat pentru arborele binar
}
Arbore_binar::~Arbore_binar()
{
    //dtor                                                 //destructor arbore binar
}
void Arbore_binar::ParcurgereRSD(Nod* x)
{
    if(x!=NULL)
    {                                                            //parcurgere in pre-ordine
        cout<<x->getInfo()<<" ";
        ParcurgereRSD(x->getPozLeg(0));
        ParcurgereRSD(x->getPozLeg(1));
    }
}
void Arbore_binar::ParcurgereSRD(Nod *x)
{
    if(x!=NULL)
    {
        ParcurgereSRD(x->getPozLeg(0));
        cout<<x->getInfo()<<" ";                                    //parcurgere in in-ordine
        ParcurgereSRD(x->getPozLeg(1));
    }
}

void Arbore_binar::ParcurgereSDR(Nod *x)
{
    if(x!=NULL)
    {
        ParcurgereSDR(x->getPozLeg(0));                         //parcurgere in post-ordine
        ParcurgereSDR(x->getPozLeg(1));
        cout<<x->getInfo()<<" ";
    }
}
