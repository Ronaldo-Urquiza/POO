#include "PessoaFisica.h"
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

// Construtor
PessoaFisica::PessoaFisica(string nome, string cpf) : Pessoa(nome), CPF(cpf) {}  // Modificação aqui

// Métodos
string PessoaFisica::getCPF() const {
    return this->CPF;
}

void PessoaFisica::setCPF(string cpf) {  // Modificação aqui
    this->CPF = cpf;
}
