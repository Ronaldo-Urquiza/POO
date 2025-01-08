#include "Pessoa.h"
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

Pessoa::Pessoa(string nome, string CPF) {
    setNome(nome);
    setCPF(CPF);
}

string Pessoa::getnome() const {
    return this->nome;
}

string Pessoa::getCPF() const {
    return this->CPF;
}

void Pessoa::setNome(string nome) {
    this->nome = nome;
}

// Função para validar o CPF
bool Pessoa::validaCPF(string CPF) {
    // Remove caracteres não numéricos
    CPF.erase(remove_if(CPF.begin(), CPF.end(), [](char c) { return !isdigit(c); }), CPF.end());

    // Verifica o tamanho do CPF
    if (CPF.length() != 11) return false;

    // Verifica se todos os dígitos são iguais
    if (all_of(CPF.begin(), CPF.end(), [CPF](char c) { return c == CPF[0]; })) return false;

    // Extração dos dígitos
    int num[11];
    for (int i = 0; i < 11; ++i) {
        num[i] = CPF[i] - '0';
    }

    // Cálculo do primeiro dígito verificador
    int soma1 = 0;
    for (int i = 0; i < 9; ++i) {
        soma1 += num[i] * (10 - i);
    }
    int resto1 = (soma1 * 10) % 11;
    if (resto1 == 10) resto1 = 0;

    // Verifica o primeiro dígito verificador
    if (resto1 != num[9]) return false;

    // Cálculo do segundo dígito verificador
    int soma2 = 0;
    for (int i = 0; i < 10; ++i) {
        soma2 += num[i] * (11 - i);
    }
    int resto2 = (soma2 * 10) % 11;
    if (resto2 == 10) resto2 = 0;

    // Verifica o segundo dígito verificador
    return resto2 == num[10];
}

void Pessoa::setCPF(string CPF) {
    this->CPF = CPF;
    this->CPFvalido = validaCPF(CPF);
}

void Pessoa::apresentar() const {
    cout << "Nome: " << nome << endl;
    cout << "CPF: " << CPF;
    cout << " (" << (CPFvalido ? "Valido" : "Invalido") << ")" << endl;
}
