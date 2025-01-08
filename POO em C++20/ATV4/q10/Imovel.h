//
// Created by Ronaldo Urquiza on 08/01/2025.
//


#pragma once

#include <string>
using std::string;

class Imovel {
public:
    Imovel(float preco, string endereco);

    float getPreco() const;
    string getEndereco() const;

    void setPreco(float preco);
    void setEndreco(string endereco);


protected:
    float preco;
    string endereco;
};
