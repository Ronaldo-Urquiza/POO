#pragma once

#include <string>
using std::string;

class Pessoa {
public:
    Pessoa() : nome(""), idade(0), altura(0.0f) {}
    Pessoa(const string &nome, int idade, float altura)
        : nome(nome), idade(idade), altura(altura) {}

    string getNome() const { return nome; }
    int getIdade() const { return idade; }
    float getAltura() const { return altura; }

private:
    string nome;
    int idade;
    float altura;
};
