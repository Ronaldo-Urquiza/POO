//
// Created by Ronaldo Urquiza on 08/01/2025.
//

#include "Pessoa.h"
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

// Construtor
Pessoa::Pessoa(string nome)
    : nome(nome) {}

// Getters
string Pessoa::getNome() const {
    return this->nome;
}
// Setters
void Pessoa::setNome(string nome) {
    this->nome = nome.empty() ? "Sem nome" : nome;
}