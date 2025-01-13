#include "PessoaFisica.h"
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

// Construtor
PessoaFisica::PessoaFisica(string nome, string cpf) : Pessoa(nome), CPF(cpf) {}

// Métodos
string PessoaFisica::getCPF() const {
    return this->CPF + '\n';
}

void PessoaFisica::setCPF(string cpf) {
    this->CPF = cpf;
}
