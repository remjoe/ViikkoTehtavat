#include "Chef.h"
#include <iostream>

Chef::Chef(std::string name) {
    std::cout << "Chef created with name: " << name << std::endl;
    Chef::chefName = name;
}

Chef::~Chef() {
    std::cout << "Called Chef deconstructor" << std::endl;
}

int Chef::makeSalad(int numIngredients) {
    int portions = numIngredients / 5;
    std::cout << "makeSalad returning: " << portions << std::endl;
    return portions;
}

int Chef::makeSoup(int numIngredients) {
    int portions = numIngredients / 3;
    std::cout << "makeSoup returning: " << portions << std::endl;
    return portions;
}

std::string Chef::getName() {
    return Chef::chefName;
}
