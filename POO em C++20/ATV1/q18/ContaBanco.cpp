//
// Created by Ronaldo Urquiza on 25/11/2024.
//
#include <stdio.h>
#include "ContaBanco.h"
#include <iostream>
using namespace std;

// Construtor
ContaBanco::ContaBanco(double saldoInicial) {
    if (saldoInicial >= 0) {
        saldoConta = saldoInicial;
    } else {
        cout << "Saldo inicial inválido! Definindo saldo como 0.\n";
        saldoConta = 0;
    }
}
void ContaBanco::creditar(double quantia) {
    saldoConta += quantia;
}

void ContaBanco::debitar(double quantia) {
    if (saldoConta < quantia) {cout << "Saldo inalterado, você não pode tirar mais do que tem na conta.\n"; }
    else{saldoConta -= quantia;}
}

double ContaBanco::getSaldo() const {
    return saldoConta;
}

