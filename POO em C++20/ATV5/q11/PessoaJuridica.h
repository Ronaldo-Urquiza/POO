#pragma once

#include <string>
#include "Contato.h"

using std::string;

class PessoaJuridica : public Contato {
public:
    PessoaJuridica(string nome, string endereco, string email, string cnpj, string razaoSocial, string inscricaoEstadual);

    string getCNPJ() const;
    void setCNPJ(string cnpj);

    string getRazaoSocial() const;
    void setRazaoSocial(string inscricaoEstadual);

    string getInscricaoEstadual() const;
    void setInscricaoEstadual(string inscricaoEstadual);

    void exibir() const override;

private:
    string CNPJ;
    string razaoSocial;
    string inscricaoEstadual;
};
