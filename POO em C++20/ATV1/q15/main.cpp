//
// Created by Ronaldo Urquiza on 25/11/2024.
//
#include <iostream>
#include <string>
#include <format>

#include "Carro.h"

using std::cout, std::format;

int main() {
    Carro possante{"Renault", "Duster", 2020};

    std::cout << possante.toString() << std::endl;

    cout << format("O meu possante eh um {} {} {}\n",
        possante.getMarca(),
        possante.getModelo(),
        possante.getAno());

    return 0;
}
