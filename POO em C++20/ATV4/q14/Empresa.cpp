#include "Empresa.h"
#include <iostream>
#include <iomanip>  // Para controle de formatação

Empresa::Empresa(string nome, string cnpj, string razaoSocial)
    : PessoaJuridica(nome, cnpj, razaoSocial) {
    // Inicializa as listas de clientes e funcionários com nullptr
    for (int i = 0; i < 5; ++i) funcionarios[i] = nullptr;
    for (int i = 0; i < 10; ++i) clientes[i] = nullptr;
}

void Empresa::adicionarFuncionario(Funcionario* f) {
    for (int i = 0; i < 5; ++i) {
        if (funcionarios[i] == nullptr) {
            funcionarios[i] = f;
            break;
        }
    }
}

void Empresa::removerFuncionario(int indice) {
    if (indice >= 0 && indice < 5) {
        funcionarios[indice] = nullptr;
    }
}

void Empresa::adicionarCliente(cliente* c) {
    for (int i = 0; i < 10; ++i) {
        if (clientes[i] == nullptr) {
            clientes[i] = c;
            break;
        }
    }
}

void Empresa::removerCliente(int indice) {
    if (indice >= 0 && indice < 10) {
        clientes[indice] = nullptr;
    }
}

float Empresa::calcularFolhaDePagamento() {
    float total = 0.0f;
    for (int i = 0; i < 5; ++i) {
        if (funcionarios[i] != nullptr) {
            total += funcionarios[i]->calculaSalarioBruto();
        }
    }
    return total;
}