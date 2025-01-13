#pragma once
#include <vector>
#include <string>
#include "Contato.h"

class Agenda {
public:
    // Adiciona um contato na agenda
    void adicionarContato(Contato* contato);

    // Remove um contato da agenda
    void removerContato(Contato* contato);

    // Pesquisa um contato pelo objeto Contato
    Contato* pesquisarContato(Contato* contato) const;

    // Exibe todos os contatos da agenda
    void exibirContatos() const;

    // Sobrecarga do operador <<
    friend Agenda& operator<<(Agenda& agenda, Contato* contato);

    // Sobrecarga do operador >>
    friend Agenda& operator>>(Agenda& agenda, Contato* contato);


private:
    std::vector<Contato*> contatos; // Vetor de ponteiros para Contato
};