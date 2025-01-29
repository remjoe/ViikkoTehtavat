#include "Asiakas.h"
#include <iostream>

Asiakas::Asiakas(std::string nimi, double luottoraja) : kayttotili(nimi), luottotili(nimi, luottoraja) {
    std::cout << "Asiakas luotu nimella: " << nimi << std::endl;
    Asiakas::nimi = nimi;
}

std::string Asiakas::getNimi() {
    return Asiakas::nimi;
}

void Asiakas::showSaldo() {
    std::cout << "Pankkitili saldo: " << Asiakas::kayttotili.getBalance() << std::endl;
    std::cout << "Luottotili saldo: " << Asiakas::luottotili.getBalance() << std::endl;
}

bool Asiakas::talletus(double summa) {
    return Asiakas::kayttotili.deposit(summa);
}

bool Asiakas::nosto(double summa) {
    return Asiakas::kayttotili.withdraw(summa);
}

bool Asiakas::luotonMaksu(double summa) {
    return Asiakas::luottotili.deposit(summa);
}

bool Asiakas::luotonNosto(double summa) {
    return Asiakas::luottotili.withdraw(summa);
}

bool Asiakas::tiliSiirto(double summa, Asiakas & asiakas) {
    if (Asiakas::nosto(summa)){
        if (asiakas.talletus(summa)) {
            std::cout << "Tilisiirto onnistui asiakkaalle " << asiakas.nimi << std::endl;
            return true;
        }
    }

    std::cout << "Tilisiirto ei onnistunut asiakkaalle "<< asiakas.nimi << std::endl;
    return false;
}
