//
// Created by Ronaldo Urquiza on 01/12/2024.
//

#include "Varinha.h"
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;


Varinha::Varinha(string Madeira, string Nucleo, float Comprimento) {
    setMadeira(Madeira);
    setNucleo(Nucleo);
    setComprimento(Comprimento);
}

string Varinha::getMadeira() const {
    return this->Madeira;
}

void Varinha::setMadeira(string Madeira) {
    this->Madeira = Madeira;
}

string Varinha::getNucleo() const {
    return this->Nucleo;
}

void Varinha::setNucleo(string Nucleo) {
    this->Nucleo = Nucleo;
}

float Varinha::getComprimento() const {
    return this->Comprimento;
}

void Varinha::setComprimento(float Comprimento) {
    this->Comprimento = Comprimento;
}

void Varinha::display() const{
    cout << Madeira << endl;
    cout << Nucleo << endl;
    cout << Comprimento << endl;

}

