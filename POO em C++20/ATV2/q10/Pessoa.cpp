//
// Created by Ronaldo Urquiza on 30/11/2024.
//

#include "Pessoa.h"
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

Pessoa::Pessoa(string nome, string CPF, string CPF_VALIDO) {
    setNome(nome);
    setCPF(CPF);
    setCPF_VALIDO(CPF_VALIDO);
}

string Pessoa::getnome() const {
    return this->nome;
}
string Pessoa::getCPF() const {
    return this->CPF;
}
string Pessoa::getCPF_VALIDO() const {
    return this->CPF_VALIDO;
}

void Pessoa::setNome(string nome) {
    this->nome = nome;
}
void Pessoa::setCPF(string CPF) {
    this->CPF = CPF;
}
void Pessoa::setCPF_VALIDO(string CPF_VALIDO) {
    this->CPF_VALIDO = CPF_VALIDO;
}

void Pessoa::apresentar() const{
    cout << "Nome: " << nome << endl;
    cout << "CPF: " << CPF;
    cout << " (" << CPF_VALIDO << ")" << endl;
}

void Pessoa::CPF_E_VALIDO(string CPF) {
                            //Achei essa func que verifica se todos os caracteres da string CPF são números
    if(CPF.length()==11 && all_of(CPF.begin(), CPF.end(), ::isdigit)) {
        setCPF_VALIDO("Valido");
    }

    else {
        setCPF_VALIDO("Invalido");
    }
}