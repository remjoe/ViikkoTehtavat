#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H

#include "Seuraaja.h"
#include <string>

class Notifikaattori
{
private:
    Seuraaja * seuraajat = nullptr;
public:
    Notifikaattori();
    void lisaa(Seuraaja *);
    void poista (Seuraaja *);
    void tulosta();
    void postita(std::string);
};

#endif // NOTIFIKAATTORI_H
