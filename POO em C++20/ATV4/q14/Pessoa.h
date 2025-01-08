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

protected:
    string nome;
};