#include "Agenda.h"
#include <iostream>
#include <algorithm>

// Adiciona um contato à agenda
void Agenda::adicionarContato(Contato* contato) {
    contatos.push_back(contato);
}

// Remove um contato da agenda
void Agenda::removerContato(Contato* contato) {
    //Aprendizado:
    //O iterador it apontará para o lugar onde o contato que esta sendo procurado é encontrado
    //A função std::find é uma função da biblioteca padrão do C++ (<algorithm>) que procura um elemento em um intervalo de valores (como um vetor ou lista).
    auto it = std::find(contatos.begin(), contatos.end(), contato);
    if (it != contatos.end()) {
        contatos.erase(it);
    }
}

// Pesquisa um contato pelo objeto Contato
Contato* Agenda::pesquisarContato(Contato* contato) const {
    auto it = std::find(contatos.begin(), contatos.end(), contato);
    if (it != contatos.end()) {
        return *it;  // Retorna o contato encontrado
    }
    return nullptr;  // Retorna nullptr se não encontrar
}

// Exibe todos os contatos da agenda
void Agenda::exibirContatos() const {
    for (auto& contato : contatos) {
        contato->exibir();  // Chama o metodo exibir() de cada contato
        std::cout << std::endl;
    }
}

// Sobrecarga do operador <<
Agenda& operator<<(Agenda& agenda, Contato* contato) {
    agenda.adicionarContato(contato);
    return agenda;
}

// Sobrecarga do operador >>
Agenda& operator>>(Agenda& agenda, Contato* contato) {
    agenda.removerContato(contato);
    return agenda;
}
