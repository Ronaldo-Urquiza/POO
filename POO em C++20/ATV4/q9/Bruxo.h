#pragma once

#include "Humano.h"
#include "CapaBruxo.h"
#include "Varinha.h"
#include <string>

class Bruxo : public Humano {
public:
    // Construtor
    Bruxo(string nome, float altura, int idade, string profissao, string casa, string feiticoPredileto, CapaBruxo capa, Varinha varinha);

    // Getters
    string getCasa() const;
    string getFeitico() const;

    // Setters
    void setCasa(string casa);
    void setFeitico(string feiticoPredileto);

    // Métodos
    void lancarFeitico() const;
    void display() const;

private:
    string b_casa;
    string b_feiticopredileto;
    CapaBruxo b_capa;
    Varinha b_varinha;
};
