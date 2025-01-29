#include "Pankkitili.h"

Pankkitili::Pankkitili(std::string nimi) {
    Pankkitili::omistaja = nimi;
}

bool Pankkitili::deposit(double sum) {
    if (sum < 0) {
        return false;
    }

    Pankkitili::saldo += sum;
    return true;
}

bool Pankkitili::withdraw(double sum) {
    if (sum < 0) {
        return false;
    }

    if (Pankkitili::saldo < sum) {
        return false;
    }
    Pankkitili::saldo -= sum;
    return true;
}

double Pankkitili::getBalance() {
    return Pankkitili::saldo;
}

