#include "Trouxa.h"

// Construtor
Trouxa::Trouxa(string nome, float altura, int idade, string moradia, string profissao)
    : Humano(nome, altura, idade, moradia) {setProfissao(profissao);}

void Trouxa::setProfissao(string profissao) {
    this->profissao = profissao;
}

string Trouxa::getProfissao() const {
    return this->profissao;
}