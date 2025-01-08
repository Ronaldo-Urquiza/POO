//
// Created by Ronaldo Urquiza on 08/01/2025.
//

#include "ImovelVelho.h"

// Construtor
ImovelVelho::ImovelVelho(float preco, string endereco, float precoDesconto)
    : Imovel(preco, endereco), precoDesconto(precoDesconto) {}

float ImovelVelho::getPrecoDesconto() const {
    return this->precoDesconto;
}

void ImovelVelho::setPrecoDesconto(float precoDesconto) {
    this->precoDesconto = precoDesconto;
}

float ImovelVelho::getPreco() const {
    return this->preco - this->precoDesconto;
}
