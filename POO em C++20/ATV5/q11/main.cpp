#include <iostream>
#include <string>
#include "Agenda.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"

int main() {
    // Criando alguns contatos
    PessoaFisica* pessoa1 = new PessoaFisica("João", "Rua 1", "joao@gmail.com", "123.456.789-00", "01/01/1990", "Solteiro");
    PessoaJuridica* pessoa2 = new PessoaJuridica("Empresa XYZ", "Rua 2", "contato@empresa.com", "12.345.678/0001-99", "XYZ LTDA", "123456789");

    // Criando uma agenda
    Agenda agenda;

    // Adicionando contatos na agenda
    agenda << pessoa1;
    agenda << pessoa2;

    // Exibindo todos os contatos
    std::cout << "Agenda após adição de contatos:" << std::endl;
    agenda.exibirContatos();

    // Pesquisando um contato
    Contato* contatoEncontrado = agenda.pesquisarContato(pessoa1); //criar objeto é mais facil para fins d comparacao
    if (contatoEncontrado != nullptr) {
        std::cout << "\nContato encontrado:" << std::endl;
        contatoEncontrado->exibir();
    }

    // Removendo um contato
    agenda >> pessoa1;

    // Exibindo todos os contatos após remoção
    std::cout << "\nAgenda após remoção de um contato:" << std::endl;
    agenda.exibirContatos();

    // Limpando a memória alocada
    delete pessoa1;
    delete pessoa2;

    return 0;
}
