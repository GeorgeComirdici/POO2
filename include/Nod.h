#ifndef NOD_H
#define NOD_H
#include <iostream>
using namespace std;

class Nod
{
    public:
        Nod();
        Nod(int);
        ~Nod();
        void setInfo(int);
        int getInfo();
        void setNrCopii(int);
        int getNrCopii();
        void setPozLeg(int, Nod*);
        Nod *getPozLeg(int);
        friend istream& operator>>(istream& is,Nod* x)            //supraincarcare operator >>
        {
            is>>x->info;
            is>>x->nr_copii;
            for(int i=0;i<x->nr_copii;i++)
                is>>x->getPozLeg(i);
            return is;
        }
        Nod& operator=(const Nod& ob)           //supraincarcare operator =
        {
            info=ob.info;
            nr_copii=ob.nr_copii;
            for(int i=0;i<nr_copii;i++)
                leg[i]=ob.leg[i];
                return *this;
        }
    private:
        int info;
        int nr_copii;
        Nod *leg[10];
};

#endif // NOD_H
