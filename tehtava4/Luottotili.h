#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include <string>
#include "Pankkitili.h"

class Luottotili : Pankkitili {
protected:
    double luottoRaja =0;
public:
    Luottotili(std::string, double);
    bool deposit(double) override;
    bool withdraw(double) override;
    double getBalance();
};

#endif // LUOTTOTILI_H
