#ifndef SEURAAJA_H
#define SEURAAJA_H

#include <iostream>
#include <string>

class Seuraaja
{
private:
    std::string nimi;
public:
    Seuraaja* next = nullptr;
    Seuraaja(std::string);
    std::string getNimi();
    void paivitys(std::string);
};

#endif // SEURAAJA_H
