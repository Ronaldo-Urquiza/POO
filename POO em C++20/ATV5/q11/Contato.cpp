//
// Created by Ronaldo Urquiza on 08/01/2025.
//

#include "Contato.h"
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

// Construtor
Contato::Contato(string nome, string endereco, string email)
    : nome(nome), endereco(endereco), email(email) {}

// Getters
string Contato::getNome() const {
    return this->nome;
}
// Setters
void Contato::setNome(string nome) {
    this->nome = nome.empty() ? "Sem nome" : nome;
}

// Getters
string Contato::getEndereco() const {
    return this->endereco;
}
// Setters
void Contato::setEndereco(string endereco) {
    this->endereco = endereco.empty() ? "Sem endereco" : endereco;
}

// Métodos para email
string Contato::getEmail() const {
    return this->email;
}

void Contato::setEmail(string email) {
    this->email = email;
}

