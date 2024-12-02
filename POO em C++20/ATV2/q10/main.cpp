#include "Pessoa.h"
#include <iostream>

int main() {
    Pessoa p("Ronaldo Urquiza", "12345678901");  // Exemplo de CPF válido

    // Valida o CPF e ajusta o status
    p.CPF_E_VALIDO(p.getCPF());

    // Apresenta os dados
    p.apresentar();

    return 0;
}
