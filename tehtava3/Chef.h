#ifndef CHEF_H
#define CHEF_H
#include <string>

class Chef {
protected:
    std::string chefName;
public:
    Chef(std::string);
    ~Chef();
    std::string getName();
    int makeSalad(int);
    int makeSoup(int);
};

#endif // CHEF_H
