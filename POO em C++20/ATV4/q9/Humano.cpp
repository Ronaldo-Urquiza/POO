//
// Created by Ronaldo Urquiza on 08/01/2025.
//

#include "Humano.h"
#include <string>
#include <iostream>

using namespace std;

// Construtor
Humano::Humano(string nome, float altura, int idade, string moradia)
    : nome(nome), altura(altura), idade(idade), moradia(moradia) {}

// Getters
string Humano::getNome() const {
    return this->nome;
}

float Humano::getAltura() const {
    return this->altura;
}

int Humano::getIdade() const {
    return this->idade;
}

string Humano::getMoradia() const {
    return this->moradia;
}

// Setters
void Humano::setNome(string nome) {
    this->nome = nome.empty() ? "Sem nome" : nome;
}

void Humano::setAltura(float altura) {
    this->altura = altura > 0 ? altura : 0; // Verifica se a altura é válida
}

void Humano::setIdade(int idade) {
    this->idade = idade >= 0 ? idade : 0; // Verifica se a idade é válida
}

void Humano::setMoradia(string moradia) {
    this->moradia = moradia.empty() ? "Sem moradia" : moradia;
}
