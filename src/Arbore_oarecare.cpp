#include "Arbore_oarecare.h"

Arbore_oarecare::Arbore_oarecare()
{
    rad = NULL;
}

Arbore_oarecare::Arbore_oarecare(Nod* x)
{
    this->rad = x;                     //constructor parametrizat pentru arbore oarecare
}
Arbore_oarecare::~Arbore_oarecare()                    //destructor arbore oarecare
{
    try {
        delete rad;
        throw(rad);
    }
    catch(Nod* x) {
        if(x == NULL)
            return;                         //tratarea exceptiei in care radacina e nula si nu poate fi stearsa
    }
}
void Arbore_oarecare::Creare(Nod* x)  //creaza arborele oarecare
{
    int aux;

    cin >> aux;     // informatia
    x->setInfo(aux);

    cin >> aux;     // nr copii
    x->setNrCopii(aux);

    for(int i = 0; i < x->getNrCopii(); i++) {
        Nod* q = new Nod;
        Creare(q);                                            //crearea fiilor fiecarui nod
        x->setPozLeg(i, q);
    }
}
void Arbore_oarecare::ParcurgereAdancime(Nod* x)
{
    cout<<x->getInfo()<<" ";
    for(int i=0;i<x->getNrCopii();i++)
        ParcurgereAdancime(x->getPozLeg(i));            //se face afisarea apeland functia pentru fiecare descendent
}
void Arbore_oarecare::ParcurgereLatime(Nod* x)
{
    Nod *p;
    queue<Nod*> q;
    q.push(rad);
    do{
        p=q.front();
        q.pop();
        if(p)
        {
            cout<<p->getInfo()<<" ";                                //fiecare nod se afiseaza, se sterge din coada, iar in coada sunt adaugati descendentii lui
            for(int i=0;i<p->getNrCopii();i++)
                q.push(p->getPozLeg(i));
        }
    }while(p);
}
Nod* Arbore_oarecare::getRadacina()
{
    return rad;                                               //functie care returneaza radacina
}
void Arbore_oarecare::setRadacina(Nod* x)
{
    rad=x;                                         //functie care seteaza radacina
}

