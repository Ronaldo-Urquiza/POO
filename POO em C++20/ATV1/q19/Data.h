#pragma once
#include <string>
using std::string;

class Data {

public:
    Data(int dia, int mes, int ano);

    // Setters
    void setDia(int dia);
    void setMes(int mes);
    void setAno(int ano);

    // Getters
    int getDia() const;
    int getMes() const;
    int getAno() const;

    // Função para retornar a data como string
    string toString() const;

private:
    int d_dia;
    int d_mes;
    int d_ano;

};


