#include <iostream>
#include "Pessoa.h"
#include "PessoaFisica.h"
#include "Funcionario.h"
#include "PessoaJuridica.h"
#include "Empresa.h"

using namespace std;

int main() {
    // Criando algumas instâncias de Pessoa Física
    PessoaFisica pf1("João Silva", "123.456.789-10");
    PessoaFisica pf2("Maria Oliveira", "987.654.321-00");

    // Criando alguns funcionários
    Funcionario f1("Carlos Souza", "111.222.333-44", "F001", 3500.00, 160, 150);
    Funcionario f2("Ana Costa", "555.666.777-88", "F002", 3200.00, 160, 150);

    // Criando uma Pessoa Jurídica (Empresa)
    PessoaJuridica pj("TechSol", "12.345.678/0001-99", "Tech Solutions Ltda");

    // Criando uma empresa e adicionando funcionários e clientes
    Empresa empresa("TechSol", "12.345.678/0001-99", "Tech Solutions Ltda");

    // Adicionando funcionários à empresa
    empresa.adicionarFuncionario(&f1);
    empresa.adicionarFuncionario(&f2);

    // Criando alguns clientes e adicionando à empresa
    cliente c1("Carlos Almeida", "987.654.321-00", "987654321", "Rua das Flores, 123");
    cliente c2("Heitor Almeida", "987.684.321-00", "987954321", "Rua das Flores, 123");
    empresa.adicionarCliente(&c1);
    empresa.adicionarCliente(&c2);

    // Calculando a folha de pagamento da empresa
    float totalFolha = empresa.calcularFolhaDePagamento();
    cout << "Total da folha de pagamento: R$ " << totalFolha << endl;
    cout << endl;

    // Exibindo informações da empresa com o operador <<
    cout << empresa << endl;
    
    return 0;
}
