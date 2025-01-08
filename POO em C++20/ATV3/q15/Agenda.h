#pragma once

#include "Pessoa.h"
#include <string>
#include <map>

using namespace std;

class Agenda {
public:
    Agenda(); // Construtor padrão
    ~Agenda(); // Destrutor

    void armazenaPessoa(const string &nome, int idade, float altura);
    void armazenaPessoa(const Pessoa &p);

    void removePessoa(const string &nome);

    int buscaPessoa(const string &nome) const; // Informa em que posição da agenda está a pessoa
    void imprimePovo() const;                  // Imprime todos os dados de todas as pessoas da agenda
    void imprimePessoa(const string &nome) const; // Imprime os dados da pessoa pelo nome

private:
    map<string, Pessoa> pessoas; // Mapa para armazenar as pessoas
};
