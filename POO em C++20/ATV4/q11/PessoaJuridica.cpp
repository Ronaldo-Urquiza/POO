#include "PessoaJuridica.h"
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

// Construtor
PessoaJuridica::PessoaJuridica(string nome, string cnpj, string razaoSocial)
    : Pessoa(nome), CNPJ(cnpj), razaoSocial(razaoSocial) {}

// Métodos
string PessoaJuridica::getCNPJ() const {
    return this->CNPJ;
}

void PessoaJuridica::setCNPJ(string cnpj) {
    this->CNPJ = cnpj;
}

string PessoaJuridica::getRazaoSocial() const {
    return this->razaoSocial;
}

void PessoaJuridica::setRazaoSocial(string razaoSocial) {
    this->razaoSocial = razaoSocial.empty() ? "Sem razão social" : razaoSocial;
}
