#include "PessoaFisica.h"
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

// Construtor
PessoaFisica::PessoaFisica(string nome, string endereco, string email, string cpf, string dataDeNascimento, string estadoCivil)
    : Contato(nome, endereco, email), CPF(cpf), dataDeNascimento(dataDeNascimento), estadoCivil(estadoCivil) {}

// Métodos para CPF
string PessoaFisica::getCPF() const {
    return this->CPF;
}

void PessoaFisica::setCPF(string cpf) {
    this->CPF = cpf;
}

// Métodos para data de nascimento
string PessoaFisica::getDataDeNascimento() const {
    return this->dataDeNascimento;
}

void PessoaFisica::setDataDeNascimento(string dataDeNascimento) {
    this->dataDeNascimento = dataDeNascimento;
}

// Métodos para estado civil
string PessoaFisica::getEstadoCivil() const {
    return this->estadoCivil;
}

void PessoaFisica::setEstadoCivil(string estadoCivil) {
    this->estadoCivil = estadoCivil;
}

void PessoaFisica::exibir() const {
    cout << "Exibindo pessoa física: " << endl;
    cout << "Nome: " << this->getNome() << endl;
    cout << "Endereco: " << this->getEndereco() << endl;
    cout << "Email: " << this->getEmail() << endl;
    cout << "CPF: " << this->CPF << endl;
    cout << "Data De Nascimento: " << this->dataDeNascimento << endl;
    cout << "EstadoCivil: " << this->estadoCivil << endl;
}