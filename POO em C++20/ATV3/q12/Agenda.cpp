#include "Agenda.h"
#include "Pessoa.h"
#include <iostream>
#include <stdexcept>

using namespace std;

void Agenda::armazenaPessoa(const string &nome, int idade, float altura) {
    if (qtdePessoas >= 10) {
        throw std::out_of_range("Agenda cheia!");
    }
    pessoas[qtdePessoas++] = Pessoa(nome, idade, altura);
}

void Agenda::armazenaPessoa(const Pessoa &p) {
    if (qtdePessoas >= 10) {
        throw std::out_of_range("Agenda cheia!");
    }
    pessoas[qtdePessoas++] = p;
}

void Agenda::removePessoa(const string &nome) {
    for (int i = 0; i < qtdePessoas; ++i) {
        if (pessoas[i].getNome() == nome) {
            for (int j = i; j < qtdePessoas - 1; ++j) {
                pessoas[j] = pessoas[j + 1];
            }
            --qtdePessoas;
            return;
        }
    }
}

int Agenda::buscaPessoa(const string &nome) const {
    for (int i = 0; i < qtdePessoas; ++i) {
        if (pessoas[i].getNome() == nome) {
            return i;
        }
    }
    return -1; // Não encontrado
}

void Agenda::imprimePovo() const {
    for (int i = 0; i < qtdePessoas; ++i) {
        cout << "Nome: " << pessoas[i].getNome()
             << ", Idade: " << pessoas[i].getIdade()
             << ", Altura: " << pessoas[i].getAltura() << endl;
    }
}

void Agenda::imprimePessoa(int i) const {
    if (i < 0 || i >= qtdePessoas) {
        throw std::out_of_range("Índice fora dos limites!");
    }
    cout << "Nome: " << pessoas[i].getNome()
         << ", Idade: " << pessoas[i].getIdade()
         << ", Altura: " << pessoas[i].getAltura() << endl;
}
