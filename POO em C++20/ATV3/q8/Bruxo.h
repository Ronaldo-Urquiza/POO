#pragma once

#include <string>
#include "CapaBruxo.h"
#include "Varinha.h"

using std::string;

class Bruxo {
public:
    // Construtor com agregação
    Bruxo(string nome, string casa, string feiticoPredileto, CapaBruxo capa, Varinha varinha);

    // Getters
    string getNome() const;
    string getCasa() const;
    string getFeitico() const;

    // Setters
    void setNome(string nome);
    void setCasa(string casa);
    void setFeitico(string feiticoPredileto);

    void lancarFeitico() const;
    void display() const;

private:
    string b_nome;
    string b_casa;
    string b_feiticopredileto;
    CapaBruxo b_capa;   // Agregação com CapaBruxo
    Varinha b_varinha;  // Agregação com Varinha
};
