#include <iostream>
#include "Nod.h"
#include "Arbore.h"
#include "Arbore_oarecare.h"
#include "Arbore_binar.h"
int main()
{
    Arbore_binar A;
    Nod* N = new Nod(5);
    A.Creare(N);
    A.ParcurgereRSD(A.getRadacina());
    return 0;
}
