#include "Bruxo.h"
#include <iostream>
using namespace std;

Bruxo::Bruxo(string nome, string casa, string feiticoPredileto, CapaBruxo capa, Varinha varinha)
    : b_nome(nome), b_casa(casa), b_feiticopredileto(feiticoPredileto), b_capa(capa), b_varinha(varinha) {}

string Bruxo::getNome() const {
    return b_nome;
}

string Bruxo::getCasa() const {
    return b_casa;
}

string Bruxo::getFeitico() const {
    return b_feiticopredileto;
}

void Bruxo::setNome(string nome) {
    b_nome = nome;
}

void Bruxo::setCasa(string casa) {
    b_casa = casa;
}

void Bruxo::setFeitico(string feiticoPredileto) {
    b_feiticopredileto = feiticoPredileto;
}

void Bruxo::lancarFeitico() const {
    std::cout << b_nome << " lançou o feitiço " << b_feiticopredileto << "!\n";
}

void Bruxo::display() const {
    std::cout << "Bruxo: " << b_nome << "\n"
              << "Casa: " << b_casa << "\n"
              << "Feitiço Predileto: " << b_feiticopredileto << "\n";
    cout<<endl;
    b_capa.display();
    cout<<endl;
    b_varinha.display();
}
