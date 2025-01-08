#pragma once

#include <string>
#include "Pessoa.h"

using std::string;

class PessoaJuridica : public Pessoa {
public:
    PessoaJuridica(string nome, string cnpj, string razaoSocial);

    string getCNPJ() const;
    void setCNPJ(string cnpj);

    string getRazaoSocial() const;
    void setRazaoSocial(string razaoSocial);

private:
    string CNPJ;
    string razaoSocial;
};
