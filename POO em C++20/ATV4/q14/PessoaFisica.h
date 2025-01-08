#pragma once

#include <string>
#include "Pessoa.h"

using std::string;

class PessoaFisica : public Pessoa {
public:
    PessoaFisica(string nome, string cpf);

    string getCPF() const;
    void setCPF(string cpf);

private:
    string CPF;
};
