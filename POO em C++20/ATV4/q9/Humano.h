#pragma once

#include <string>
#include "CapaBruxo.h"
#include "Varinha.h"

using std::string;

class Humano {
public:
    // Construtor
    Humano(string nome, float altura, int idade, string moradia);

    // Getters
    string getNome() const;
    float getAltura() const;
    int getIdade() const;
    string getMoradia() const;

    // Setters
    void setNome(string nome);
    void setAltura(float altura);
    void setIdade(int idade);
    void setMoradia(string moradia);

private:
    string nome;
    float altura;
    int idade;
    string profissao;
    string moradia;
};