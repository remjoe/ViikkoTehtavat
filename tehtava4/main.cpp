#include <iostream>
#include "Asiakas.h"

int main()
{
    Asiakas asiakas = Asiakas("joel", 1000);

    Asiakas toinen = Asiakas("matti", 1000);

    asiakas.talletus(5000);

    asiakas.tiliSiirto(2000, toinen);
    std::cout << std::endl;

    std::cout << asiakas.getNimi() << ":" << std::endl;
    asiakas.showSaldo();
    std::cout << std::endl;

    std::cout << toinen.getNimi() << std::endl;
    toinen.showSaldo();

    return 0;
}
