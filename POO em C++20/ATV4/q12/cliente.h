#pragma once

#include <string>
#include "PessoaFisica.h"

using std::string;
using std::ostream;

class cliente : public PessoaFisica {
public:
    // Construtor
    cliente(string nome, string cpf, string telefone, string endereco);

    // Métodos Getters
    string getTelefone() const;
    string getEndereco() const;

    // Métodos Setters
    void setTelefone(string telefone);
    void setEndereco(string endereco);

    void espaco();

    // Sobrecarga do operador <<
    friend ostream& operator<<(ostream& os, const cliente& c) {
        os << c.getNome();
        os << c.getCPF();
        os << c.getTelefone();
        os << c.getEndereco();
        return os;
    }

private:
    string telefone;
    string endereco;
};
