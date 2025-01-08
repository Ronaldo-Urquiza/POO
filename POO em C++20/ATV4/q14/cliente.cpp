#include "cliente.h"
#include <string>
#include <iostream>

using namespace std;

// Construtor
cliente::cliente(string nome, string cpf, string telefone, string endereco)
    : PessoaFisica(nome, cpf), telefone(telefone), endereco(endereco) {}

// Métodos
string cliente::getTelefone() const {
    return this->telefone + '\n';
}

void cliente::setTelefone(string telefone) {
    this->telefone = telefone;
}

string cliente::getEndereco() const {
    return this->endereco + '\n';
}

void cliente::setEndereco(string endereco) {
    this->endereco = endereco;
}



