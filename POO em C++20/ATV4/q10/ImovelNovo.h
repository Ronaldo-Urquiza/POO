//
// Created by Ronaldo Urquiza on 08/01/2025.
//


#pragma once

#include <string>
#include "Imovel.h"

using std::string;

class ImovelNovo : public Imovel {
public:
    ImovelNovo(float preco, string endereco, float precoAdicional);

    float getPreco() const;
    void setPrecoAdicional(float precoadicional);
    float getPrecoAdicional() const;

private:
    float precoadicional;
};
