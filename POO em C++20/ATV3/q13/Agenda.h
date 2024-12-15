#pragma once

#include "Pessoa.h"
#include <string>

using namespace std;

class Agenda {
public:
    Agenda(int tPessoas = 1); // Construtor com tamanho padrão
    ~Agenda();               // Destrutor para liberar memória

    void armazenaPessoa(const string &nome, int idade, float altura);
    void armazenaPessoa(const Pessoa &p);

    void removePessoa(const string &nome);

    int buscaPessoa(const string &nome) const; // Informa em que posição da agenda está a pessoa
    void imprimePovo() const;                 // Imprime todos os dados de todas as pessoas da agenda
    void imprimePessoa(int i) const;          // Imprime os dados da pessoa na posição 'i' da agenda

private:
    Pessoa *pessoas; // Ponteiro para array dinâmico de objetos Pessoa
    int tPessoas;    // Capacidade máxima da agenda
    int qtdePessoas; // Quantidade atual de pessoas armazenadas
};
