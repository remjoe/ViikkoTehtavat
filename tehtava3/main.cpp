#include <iostream>
#include "Chef.h"
#include "ItalianChef.h"

int main()
{
    Chef chef("Gordon");
    chef.makeSalad(12);
    chef.makeSoup(24);

    ItalianChef italianChef("mario");
    italianChef.askSecret("pizza", 10, 5);

    return 0;
}
