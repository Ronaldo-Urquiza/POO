#include "Pessoa.h"
#include "Agenda.h"
#include <stdexcept>
#include <iostream>

using namespace std;

Agenda::Agenda() {}

Agenda::~Agenda() {
    // O map irá se encarregar de liberar a memória automaticamente
}

void Agenda::armazenaPessoa(const std::string& nome, int idade, float altura) {
    pessoas[nome] = Pessoa(nome, idade, altura);
}

void Agenda::armazenaPessoa(const Pessoa& p) {
    pessoas[p.getNome()] = p;
}

void Agenda::removePessoa(const std::string& nome) {
    auto it = pessoas.find(nome);  // find() é um metodo de map
    if (it != pessoas.end()) {
        pessoas.erase(it);  // erase() também funciona com map
    }
}

int Agenda::buscaPessoa(const std::string& nome) const {
    auto it = pessoas.find(nome);
    return (it != pessoas.end()) ? distance(pessoas.begin(), it) : -1;  // find é usado aqui
}

void Agenda::imprimePovo() const {
    for (const auto& entry : pessoas) {
        const Pessoa& p = entry.second;
        cout << "Nome: " << p.getNome() << ", Idade: " << p.getIdade()
             << ", Altura: " << p.getAltura() << endl;
    }
}

void Agenda::imprimePessoa(const string &nome) const {
    auto it = pessoas.find(nome);
    if (it != pessoas.end()) {
        const Pessoa& p = it->second;
        cout << "Nome: " << p.getNome() << ", Idade: " << p.getIdade()
             << ", Altura: " << p.getAltura() << endl;
    } else {
        cout << "Pessoa não encontrada!" << endl;
    }
}
