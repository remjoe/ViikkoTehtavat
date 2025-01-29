#include "Luottotili.h"
#include <iostream>

bool Luottotili::deposit(double sum) {
    if (Luottotili::saldo + sum > 0) {
        std::cout << "Luottotilin saldo ei voi ylittää nollaa." << std::endl;
        return false;
    }

    if (sum < 0) {
        return false;
    }

    Luottotili::saldo += sum;
    std::cout << "Luottotilin uusi saldo on: " << Luottotili::saldo << std::endl;
    return true;
}

double Luottotili::getBalance() {
    return Luottotili::saldo;
}

bool Luottotili::withdraw(double sum) {
    if (sum < 0) {
        return false;
    }

    if (-Luottotili::luottoRaja < Luottotili::saldo - sum) {
        return false;
    }
    Luottotili::saldo -= sum;
    std::cout << "Luottotilin uusi saldo on: " << Luottotili::saldo << std::endl;
    return true;
}

Luottotili::Luottotili(std::string nimi, double luottoraja) : Pankkitili::Pankkitili(nimi) {
    if (luottoraja < 0) {
        std::cout << "Luottoraja ei voi olla alle nolla." << std::endl;
        return;
    }

    Luottotili::omistaja = nimi;
    Luottotili::luottoRaja = luottoraja;
}

