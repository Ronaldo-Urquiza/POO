//
// Created by Ronaldo Urquiza on 08/01/2025.
//


#pragma once

#include <string>
#include "Imovel.h"

using std::string;

class ImovelVelho : public Imovel {
public:
    ImovelVelho(float preco, string endereco, float precoDesconto);

    float getPreco() const;
    void setPrecoDesconto(float precoadicional);
    float getPrecoDesconto() const;

private:
    float precoDesconto;
};
