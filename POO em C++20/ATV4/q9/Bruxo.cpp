#include "Bruxo.h"
#include <iostream>
using namespace std;

// Construtor
Bruxo::Bruxo(string nome, float altura, int idade, string moradia, string casa, string feiticoPredileto, CapaBruxo capa, Varinha varinha)
    : Humano(nome, altura, idade, moradia), b_casa(casa), b_feiticopredileto(feiticoPredileto), b_capa(capa), b_varinha(varinha) {}

// Getters
string Bruxo::getCasa() const {
    return b_casa;
}

string Bruxo::getFeitico() const {
    return b_feiticopredileto;
}

// Setters
void Bruxo::setCasa(string casa) {
    b_casa = casa;
}

void Bruxo::setFeitico(string feiticoPredileto) {
    b_feiticopredileto = feiticoPredileto;
}

// Métodos
void Bruxo::lancarFeitico() const {
    std::cout << getNome() << " lançou o feitiço " << b_feiticopredileto << "!\n";
}

void Bruxo::display() const {
    std::cout << "Bruxo: " << getNome() << "\n"
              << "Altura: " << getAltura() << "\n"
              << "Idade: " << getIdade() << "\n"
              << "Moradia: " << getMoradia() << "\n"
              << "Casa: " << b_casa << "\n"
              << "Feitiço Predileto: " << b_feiticopredileto << "\n";
    cout << endl;
    b_capa.display();
    cout << endl;
    b_varinha.display();
}
