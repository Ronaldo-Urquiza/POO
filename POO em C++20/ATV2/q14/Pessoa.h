#pragma once

#include <string>
using std::string;

class Pessoa {
public:
    Pessoa(
        string nome,
        string CPF = "");

    string getnome() const;
    string getCPF() const;

    void setNome(string nome);
    void setCPF(string CPF);

    void apresentar() const;

private:
    bool CPFvalido;
    string CPF;
    string nome;

    bool validaCPF(string CPF);

};