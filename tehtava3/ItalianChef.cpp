#include "ItalianChef.h"

bool ItalianChef::askSecret(std::string secret, int flour, int water) {
    if (secret == ItalianChef::password) {
        Chef::makePizza();
    }
}
