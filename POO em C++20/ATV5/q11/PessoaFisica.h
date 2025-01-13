#pragma once

#include <string>
#include "Contato.h"

using std::string;

class PessoaFisica : public Contato {
public:
    PessoaFisica(string nome, string endereco, string email, string cpf, string dataDeNascimento, string estadoCivil);

    string getCPF() const;
    void setCPF(string cpf);

    string getDataDeNascimento() const;
    void setDataDeNascimento(string dataDeNascimento);

    string getEstadoCivil() const;
    void setEstadoCivil(string estadoCivil);

    void exibir() const override;

private:
    string CPF;
    string dataDeNascimento;
    string estadoCivil;
};
