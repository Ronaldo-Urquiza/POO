#pragma once

#include <string>
using std::string;
using std::ostream;

class Contato {
public:
    // Construtor
    Contato(string nome, string endereco, string email);

    virtual void exibir() const = 0;

    string getNome() const;

    void setNome(string nome);

    string getEndereco() const;

    void setEndereco(string endereco);

    string getEmail() const;

    void setEmail(string email);


protected:
    string nome;
    string endereco;
    string email;
};