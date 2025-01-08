#pragma once

#include "Pessoa.h"
#include <string>

using namespace std;

class Agenda{
public:

    Agenda() : qtdePessoas(0) {};

    void armazenaPessoa(const string &nome, int idade, float altura);
    void armazenaPessoa(const Pessoa &p);

    void removePessoa(const string &nome);

    int buscaPessoa(const string &nome) const; // informa em que posição da agenda está a pessoa
    void imprimePovo() const; // imprime todos os dados de todas as pessoas da agenda
    void imprimePessoa(int i) const; // imprime os dados da pessoa que está na posição 'i' da agenda

private:
    Pessoa pessoas[10];
    int qtdePessoas;
};