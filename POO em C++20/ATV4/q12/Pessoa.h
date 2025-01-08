#pragma once

#include <string>
using std::string;
using std::ostream;

class Pessoa {
public:
    // Construtor
    Pessoa(string nome);

    // Getters
    string getNome() const;

    // Setters
    void setNome(string nome);

    // Sobrecarga do operador <<
    friend ostream& operator<<(ostream& os, const Pessoa& p) {
        os << p.nome;
        return os;
    }

protected:
    string nome;
};