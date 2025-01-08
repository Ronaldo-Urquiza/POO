#include <iostream>
#include "Funcionario.h"

int main() {
    // Criando um objeto Funcionario
    Funcionario funcionario("Lucas Pereira", "111.222.333-44", "12345", 2500.00, 160, 150);

    // Imprimindo os dados do funcionário
    std::cout << "Funcionario: " << funcionario << std::endl;

    std::cout << "O que recebeu: " << funcionario.calculaSalarioBruto() << std::endl;

    return 0;
}
