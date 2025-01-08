//
// Created by Ronaldo Urquiza on 08/01/2025.
//


#pragma once

#include <string>
#include "PessoaFisica.h"
#include <iomanip>

using std::string;
using std::ostream;

class Funcionario: public PessoaFisica {

public:
    // Construtor
    Funcionario(string nome, string cpf, string matricula, float salario, float chMensal, float chMensalTrabalhadas);

    // Métodos Getters
    string getMatricula() const;
    float getSalario() const;
    float getCHMensal() const;
    float getCHMensalTrabalhadas() const;

    // Métodos Setters
    void setMatricula(string matricula);
    void setSalario(float salario);
    void setCHMensal(float chMensal);
    void setCHMensalTrabalhadas(float chMensalTrabalhadas);

    float calculaSalarioBruto();

private:
    string matricula;
    float salario;
    float CHmensal;
    float CHmensalTrabalhadas;
};
