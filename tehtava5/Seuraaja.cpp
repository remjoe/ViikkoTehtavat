#include "Seuraaja.h"

Seuraaja::Seuraaja(std::string nimi)
{
    Seuraaja::nimi = nimi;
    std::cout << "Seuraaja konstruktori nimella " << nimi << std::endl;
}

std::string Seuraaja::getNimi()
{
    return Seuraaja::nimi;
}

void Seuraaja::paivitys(std::string viesti)
{
    std::cout << "Seuraaja " << Seuraaja::nimi << " on saanut viestin: " << viesti << std::endl;
}
