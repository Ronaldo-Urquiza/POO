//
// Created by Ronaldo Urquiza on 08/01/2025.
//

#include "Imovel.h"

// Construtor
Imovel::Imovel(float preco, string endereco)
    : preco(preco), endereco(endereco) {}

// Getters
float Imovel::getPreco() const {
    return this->preco;
}

string Imovel::getEndereco() const {
    return this->endereco;
}

// Setters
void Imovel::setPreco(float preco) {
    this->preco = preco;
}

void Imovel::setEndreco(string endereco) {
    this->endereco = endereco;
}
