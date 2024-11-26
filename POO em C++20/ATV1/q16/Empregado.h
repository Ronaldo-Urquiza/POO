#pragma once
#include <string>
using std::string;

class Empregado {

public:
    //Construtor:
    Empregado(string nome, string sobrenome, float salarioMensal);

    // Getters
    string getNome() const;
    string getSobrenome() const;
    float getSalarioMensal() const;

    // Setters
    void setNome(string nome);
    void setSobrenome(string sobrenome);
    void setSalarioMensal(float salarioMensal);

    //Metodo para dar aumento
    void darAumento(float aumentoEmPorcentagem);

private:
    string e_nome;
    string e_sobrenome;
    float e_salarioMensal;
};

