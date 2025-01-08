//
// Created by Ronaldo Urquiza on 08/01/2025.
//


#pragma once

#include <string>
#include "PessoaJuridica.h"
#include <vector>
#include "Pessoa.h"
#include "Funcionario.h"
#include "Cliente.h"

using std::string;
using std::vector;
using std::string;

class Empresa:PessoaJuridica {

public:
    // Construtor
    Empresa(string nome, string CNPJ, string razaoSocial);

    // Métodos para adicionar e remover funcionários
    void adicionarFuncionario(Funcionario* f);
    void removerFuncionario(int indice);

    // Métodos para adicionar e remover clientes
    void adicionarCliente(cliente* c);
    void removerCliente(int indice);


    float calcularFolhaDePagamento();

    // Sobrecarga do operador <<
    friend std::ostream& operator<<(std::ostream& os, const Empresa& e){

        os << e.getCNPJ() << '\n';
        os << e.getRazaoSocial() << '\n';
        os << e.getNome() << '\n';

        os << "\n";

        //lista de clientes (nome e CPF)
        os << "Lista de clientes:\n";
        for (int i = 0; i < 10; ++i) {
            if (e.clientes[i] != nullptr) {
                os << "Nome: " << e.clientes[i]->getNome() << ", CPF: " << e.clientes[i]->getCPF() << "\n";
            }
        }

        os << "\n";

        //lista de funcionários (nome, matrícula e salário).
        os << "Lista de Funcionários:\n";
        for (int i = 0; i < 5; ++i) {
            if (e.funcionarios[i] != nullptr) {
                os << "Nome: " << e.funcionarios[i]->getNome() << ", Matrícula: " << e.funcionarios[i]->getMatricula() << ", Salário: " << std::fixed << std::setprecision(2) << e.funcionarios[i]->getSalario() << "\n";
            }
        }
        return os;
    }

private:
    Funcionario* funcionarios[5];
    cliente* clientes[10];
};