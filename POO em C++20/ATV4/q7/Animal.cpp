//
// Created by Ronaldo Urquiza on 29/12/2024.
//

#include "Animal.h"
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

Animal::Animal() {
}

Animal::Animal(string nome) {
    setNome(nome);
}

Animal::Animal(string nome, string raca) {
    setNome(nome);
    setRaca(raca);
}

string Animal::getNome() const {
    return this->nome;
}

void Animal::setNome(string z) {
    this->nome = z.empty() ? "\"Sem valor\"" : z;
}

string Animal::getRaca() const {
    return this->raca;
}

void Animal::setRaca(string raca) {
    this->raca = raca.empty() ? "\"Sem valor\"" : raca;
}

string Animal::caminha() const {
    return this->nome + " está caminhando.";
}