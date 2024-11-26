#pragma once
#include <string>
using std::string;

class ContaBanco {

public:
    //Construtor:
    ContaBanco(double saldoInicial);

    void debitar(double quantia);
    void creditar(double quantia);

    double getSaldo() const;

private:
    double saldoConta;
};

