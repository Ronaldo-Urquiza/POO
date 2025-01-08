#include <iostream>
#include "Pessoa.h"
#include "PessoaFisica.h"
#include "Cliente.h"

int main() {

    // Criando um objeto Cliente
    cliente Cliente("Carlos Almeida", "987.654.321-00", "987654321", "Rua das Flores, 123");
    std::cout << "Cliente: " << Cliente << std::endl;

    return 0;
}
