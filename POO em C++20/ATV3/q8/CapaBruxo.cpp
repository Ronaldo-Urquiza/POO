//
// Created by Ronaldo Urquiza on 12/12/2024.
//

#include "CapaBruxo.h"
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;


CapaBruxo::CapaBruxo(float tamanho, string casa) {
    setTamanho(tamanho);
    setCasa(casa);
}

float CapaBruxo::getTamanho() const {
    return this->tamanho;
}
string CapaBruxo::getCor() const {
    return this->cor;
}
string CapaBruxo::getCasa() const {
    return this->casa;
}

void CapaBruxo::setTamanho(float tamanho) {
   this->tamanho = tamanho;
}

void CapaBruxo::setCasa(const string& casa) {
    if (casa == "Grifinoria") {
        this->casa = casa;
        cor = "Vermelho";
    } else if (casa == "Sonserina") {
        this->casa = casa;
        cor = "Verde";
    } else if (casa == "Corvinal") {
        this->casa = casa;
        cor = "Azul";
    } else if (casa == "Lufa-Lufa") {
        this->casa = casa;
        cor = "Amarelo";
    } else {
        throw std::invalid_argument("Casa inválida. As casas válidas são: Grifinoria, Sonserina, Corvinal ou Lufa-Lufa.");
    }
}

void CapaBruxo::display() const {
    std::cout << "Capa do Bruxo:\n"
              << "Tamanho: " << tamanho << "\n"
              << "Cor: " << cor << "\n";
}