#pragma once

#include <string>
using std::string;

class Animal {
public:
    Animal();
    Animal(string nome);
    Animal(string nome, string raca);

    string caminha() const;

    string getNome() const;
    void setNome(string nome);

    string getRaca() const;
    void setRaca(string raca);

private:
    string nome;
    string raca;
};
