#pragma once

#include <string>
using std::string;

class Pessoa {
public:
    Pessoa(
        string nome,
        string CPF = "",
        string CPF_VALIDO = "Valido");

    string getnome() const;
    string getCPF() const;
    string getCPF_VALIDO() const;

    void setNome(string nome);
    void setCPF(string CPF);
    void setCPF_VALIDO(string CPF_VALIDO);

    void apresentar() const;

    void CPF_E_VALIDO(string CPF);

private:
    string CPF_VALIDO;
    string CPF;
    string nome;
};