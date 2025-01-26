#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <string>
#include "Chef.h"

class ItalianChef : Chef {
private:
    std::string password = "pizza";
    int flour;
    int water;
    int makepizza();
public:
    std::string ItalianChef;
    bool askSecret(std::string, int, int);
};

#endif // ITALIANCHEF_H
