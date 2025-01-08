#include <iostream>
#include <string>
#include <format>

#include "Empregado.h"

using std::cout, std::format;

int main() {
    Empregado Mariah{"Mariah", "Carey", 105000};
    Empregado Carey{"Carey", "Mariah", 106000};

    cout << format("Meu empregado é a/o {} {} e tem um salário de {} reais\n",
        Mariah.getNome(),
        Mariah.getSobrenome(),
        Mariah.getSalarioMensal());

    cout << format("Meu empregado é a/o {} {} e tem um salário de {} reais\n",
        Carey.getNome(),
        Carey.getSobrenome(),
        Carey.getSalarioMensal());

    Mariah.darAumento(10);
    Carey.darAumento(20);

    cout << format("Meu empregado é a/o {} {} e tem um salário de {} reais\n",
    Mariah.getNome(),
    Mariah.getSobrenome(),
    Mariah.getSalarioMensal());

    cout << format("Meu empregado é a/o {} {} e tem um salário de {} reais\n",
        Carey.getNome(),
        Carey.getSobrenome(),
        Carey.getSalarioMensal());

    return 0;
}
