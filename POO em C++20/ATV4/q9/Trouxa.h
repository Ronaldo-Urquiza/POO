#pragma once

#include "Humano.h"
#include <string>

using std::string;

class Trouxa : public Humano {
public:
    // Construtor
    Trouxa(string nome, float altura, int idade, string moradia, string profissao);

    void setProfissao(string profissao);
    string getProfissao() const;

private:
    string profissao;
};
