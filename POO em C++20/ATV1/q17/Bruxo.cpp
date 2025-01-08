#include "Bruxo.h"
#include <cctype> // Para std::toupper
#include <iostream>

using namespace std;

// Construtor
Bruxo::Bruxo(string nome, string casa, string feiticoPredileto) {
    setNome(nome);
    setCasa(casa);
    setFeitico(feiticoPredileto);
}

// Getters
string Bruxo::getNome() const {
    return b_nome;
}

string Bruxo::getCasa() const {
    return b_casa;
}

string Bruxo::getFeitico() const {
    return b_feiticopredileto;
}

// Setters
void Bruxo::setNome(string nome) {
    b_nome = (nome.empty() ? "Sem nome" : nome);
}

void Bruxo::setCasa(string casa) {
    // Verifica as casas válidas
    if (casa == "Corvinal" || casa == "Sonserina" || casa == "Lufa-lufa" || casa == "Grifinória") {
        b_casa = casa; // Define a casa válida
    } else {
        b_casa = "SEM CASA"; // Define como padrão "SEM CASA" se for inválida
    }
}


void Bruxo::setFeitico(string feiticoPredileto) {
    b_feiticopredileto = (feiticoPredileto.empty() ? "Sem feitiço predileto" : feiticoPredileto);
}

void Bruxo::lancarFeitico() {
    if (!b_feiticopredileto.empty()) {
        std::cout << "O bruxo " << getNome() << " lançou o feitiço: " << getFeitico() << "!\n";
    } else {
        std::cout << "O bruxo " << getNome() << " ainda não tem um feitiço predileto para lançar.\n";
    }
}

void Bruxo::display() const {
    cout << "Nome: " << getNome() << endl;
    cout << "Casa: " << getCasa() << endl;
    cout << "Feitico predileto: " << getFeitico() << endl;
}
