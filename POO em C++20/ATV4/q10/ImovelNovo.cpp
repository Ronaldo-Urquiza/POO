//
// Created by Ronaldo Urquiza on 08/01/2025.
//

#include "ImovelNovo.h"

// Construtor
ImovelNovo::ImovelNovo(float preco, string endereco, float precoAdicional)
    : Imovel(preco, endereco), precoadicional(precoAdicional) {}

// Getter para precoAdicional
float ImovelNovo::getPrecoAdicional() const {
    return this->precoadicional;
}

// Setter para precoAdicional
void ImovelNovo::setPrecoAdicional(float precoadicional) {
    this->precoadicional = precoadicional;
}

float ImovelNovo::getPreco() const {
    return this->preco + this->precoadicional;
}
