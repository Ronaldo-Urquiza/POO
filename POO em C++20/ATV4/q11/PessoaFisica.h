#pragma once

#include <string>
#include "Pessoa.h"

using std::string;

class PessoaFisica : public Pessoa {
public:
    PessoaFisica(string nome, string cpf);  // Modificação aqui

    string getCPF() const;
    void setCPF(string cpf);  // Modificação aqui

private:
    string CPF;
};
