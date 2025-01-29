#ifndef ASIAKAS_H
#define ASIAKAS_H
#include <string>
#include "Luottotili.h"
#include "Pankkitili.h"

class Asiakas {
private:
    std::string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;
public:
    Asiakas(std::string, double);
    std::string getNimi();
    void showSaldo();
    bool talletus(double);
    bool nosto(double);
    bool luotonMaksu(double);
    bool luotonNosto(double);
    bool tiliSiirto(double, Asiakas &);
};

#endif // ASIAKAS_H
