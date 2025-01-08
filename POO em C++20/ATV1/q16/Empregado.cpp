#include "Empregado.h"

// Construtor
Empregado::Empregado(string nome, string sobrenome, float salarioMensal) {
    setNome(nome);
    setSobrenome(sobrenome);
    setSalarioMensal(salarioMensal);
}

// Getters
string Empregado::getNome() const {
    return e_nome;
}

string Empregado::getSobrenome() const {
    return e_sobrenome;
}

float Empregado::getSalarioMensal() const {
    return e_salarioMensal;
}

// Setters
void Empregado::setNome(string nome) {
    e_nome = (nome.empty() ? "Sem nome" : nome);
}

void Empregado::setSobrenome(string sobrenome) {
    e_sobrenome = (sobrenome.empty() ? "Sem sobrenome" : sobrenome);
}

void Empregado::setSalarioMensal(float salarioMensal) {
    e_salarioMensal = (salarioMensal < 0 ? 0.0f : salarioMensal);  // Salário não pode ser negativo
}

void Empregado::darAumento(float aumentoEmPorcentagem) {
    e_salarioMensal += ((e_salarioMensal / 100) * aumentoEmPorcentagem);
}
