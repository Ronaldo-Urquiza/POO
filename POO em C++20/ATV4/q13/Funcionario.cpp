//
// Created by Ronaldo Urquiza on 08/01/2025.
//

#include "Funcionario.h"
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;


Funcionario::Funcionario(string nome, string cpf, string matricula, float salario, float chMensal, float chMensalTrabalhadas)
    : PessoaFisica(nome, cpf), matricula(matricula), salario(salario), CHmensal(chMensal), CHmensalTrabalhadas(chMensalTrabalhadas) {}

float Funcionario::calculaSalarioBruto() {
    return salario * (CHmensalTrabalhadas/CHmensal);
}

string Funcionario::getMatricula() const {
    return this->matricula;
}

float Funcionario::getSalario() const {
    return this->salario;
}

float Funcionario::getCHMensal() const {
    return this->CHmensal;
}

float Funcionario::getCHMensalTrabalhadas() const {
    return this->CHmensalTrabalhadas;
}

void Funcionario::setMatricula(string matricula) {
    this->matricula = matricula;
}

void Funcionario::setSalario(float salario) {
    this->salario = salario;
}

void Funcionario::setCHMensal(float chMensal) {
    this->CHmensal = chMensal;
}

void Funcionario::setCHMensalTrabalhadas(float chMensalTrabalhadas) {
    if (chMensalTrabalhadas < 0) {
        this->CHmensalTrabalhadas = 0;
    } else if (chMensalTrabalhadas > this->CHmensal) {
        this->CHmensalTrabalhadas = this->CHmensal;
    } else {
        this->CHmensalTrabalhadas = chMensalTrabalhadas;
    }
}
