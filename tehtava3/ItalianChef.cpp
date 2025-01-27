#include "Chef.h"
#include "ItalianChef.h"
#include <iostream>

ItalianChef::ItalianChef(std::string name) : Chef::Chef(name) {
    ItalianChef::chefName = name;
}

int ItalianChef::makepizza() {
    int portion1 = ItalianChef::flour / 5;
    int portion2 = ItalianChef::water / 5;

    if (portion1 < portion2) {
        return portion1;
    }

    return portion2;
}

bool ItalianChef::askSecret(std::string secret, int flour, int water) {
    if (secret == ItalianChef::password) {
        ItalianChef::flour = flour;
        ItalianChef::water = water;
        int pizzas = ItalianChef::makepizza();
        std::cout << "ItalianChef made " << pizzas << " pizzas!" << std::endl;
        return true;
    }

    return false;
}
