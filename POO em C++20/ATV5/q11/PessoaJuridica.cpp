#include "PessoaJuridica.h"
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

// Construtor
PessoaJuridica::PessoaJuridica(string nome, string endereco, string email, string cnpj, string razaoSocial, string inscricaoEstadual)
    : Contato(nome, endereco, email), CNPJ(cnpj), razaoSocial(razaoSocial), inscricaoEstadual(inscricaoEstadual) {}

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

string PessoaJuridica::getInscricaoEstadual() const {
    return this->inscricaoEstadual;
}

void PessoaJuridica::setInscricaoEstadual(string inscricaoEstadual) {
    this->inscricaoEstadual = inscricaoEstadual.empty() ? "Sem Inscricao Estadual" : inscricaoEstadual;
}

void PessoaJuridica::exibir() const {
    cout << "Exibindo pessoa jurídica: " << endl;
    cout << "Nome: " << this->getNome() << endl;
    cout << "Endereco: " << this->getEndereco() << endl;
    cout << "Email: " << this->getEmail() << endl;
    cout << "CNPJ: " << this->CNPJ << endl;
    cout << "RazaoSocial: " << this->razaoSocial << endl;
    cout << "InscricaoEstadual: " << this->inscricaoEstadual << endl;
}