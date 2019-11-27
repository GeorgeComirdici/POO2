#include <iostream>
#include "Nod.h"
using namespace std;
//constructor pentru clasa nod fara parametru
Nod::Nod()
{
    info=0;
    nr_copii=0;
    for(int i=0;i<10;i++)
        (*leg)[i]=NULL;
}
//constructor pentru clasa nod cu parametru
Nod::Nod(int d)
{
    info=d;
    nr_copii=0;
    for(int i=0;i<10;i++)
        {
            (*leg)[i]=NULL;
        }
}
//destructor pentru clasa nod
Nod::~Nod()
{
      info=0;
      nr_copii=0;
      for(int i=0;i<10;i++)
        delete []leg[i];
}
void Nod::setInfo(int x)                //functie care seteaza informatia din nod
{
   info=x;
}
int Nod::getInfo()                     //functie care returneaza informatia din nod
{
    return info;
}
void Nod::setNrCopii(int x)           //functie care seteaza numarul de copii ai unui nod
{
    nr_copii=x;
}
int Nod::getNrCopii()             //functie care returneaza numarul de copii ai unui nod
{
    return nr_copii;
}
void Nod::setPozLeg(int i, Nod* aux)            //functie care seteaza in vectorul de fii fiul de pe pozitia i
{
    this->leg[i] = aux;
}
Nod* Nod::getPozLeg(int i)                    //functie care returneaza fiul de pe pozitia i
{
    return leg[i];
}
