//
// Created by Ronaldo Urquiza on 12/12/2024.
//


#pragma once

#include <string>
using std::string;

class CapaBruxo {
public:
    CapaBruxo(float tamanho, string casa);

    float getTamanho() const;
    string getCor() const;
    string getCasa() const;

    void setTamanho(float tamanho);
    void setCasa(const string& casa);

    void display() const;

private:
    float tamanho{};
    string cor;
    string casa;
};
