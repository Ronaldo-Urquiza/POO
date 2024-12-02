//
// Created by Ronaldo Urquiza on 30/11/2024.
//

#include "HugeInteger.h"
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype> // Para usar isdigit
#include <stdexcept> // Aprendizado: Para lançar exceções

using namespace std;
                            //tamanho começa com o valor 0
HugeInteger::HugeInteger() : tamanho(0) {
    // Inicializa o array com zeros
    for (int i = 0; i < 40; ++i) {
        numero[i] = '0';
    }
}

void HugeInteger::input(string numStr) {

    //Array temporário

    // Verifica se tem 40
    if (numStr.length() > 40) {
        throw invalid_argument("O número deve ter no máximo 40 dígitos.");
    }

    // Verifica se sao digitos
    for (char c : numStr) {
        if (!isdigit(c)) {
            throw invalid_argument("A string contém caracteres não numéricos.");
        }
    }

    //Aqui pra baixo é o array final

    // Armazena o número no array, alinhado à direita
    tamanho = numStr.length();
    int start = 40 - tamanho; // Posição inicial no array


    for (int i = 0; i < tamanho; ++i) {
        numero[start + i] = numStr[i];
    }
    // Preenche o restante com '0'
    for (int i = 0; i < start; ++i) {
        numero[i] = '0';
    }

}

void HugeInteger::output() const {
    // Percorre o array desde o primeiro dígito não zero até o final
    bool eZero = true; //ognorar zeros à esquerda

    for (int i = 0; i < 40; ++i) {
        if (numero[i] != '0' || !eZero) {
            cout << numero[i];
            eZero = false; // Após encontrar o primeiro dígito válido, exibe tudo
        }
    }

    // Caso todos os dígitos sejam zero, imprime apenas '0'
    if (eZero) {
        cout << '0';
    }

    cout << endl; // Adiciona uma quebra de linha ao final
}


bool HugeInteger::isEqualTo(const HugeInteger& outro) const {
    if (tamanho != outro.tamanho) return false;

    for (int i = 0; i < 40; ++i) {
        if (numero[i] != outro.numero[i]) return false;
    }

    return true;
}

bool HugeInteger::isNotEqualTo(const HugeInteger& outro) const {
    return !isEqualTo(outro);
}

bool HugeInteger::isGreaterThan(const HugeInteger& outro) const {
    if (tamanho > outro.tamanho) return true;
    if (tamanho < outro.tamanho) return false;

    for (int i = 0; i < 40; ++i) {
        if (numero[i] > outro.numero[i]) return true;
        if (numero[i] < outro.numero[i]) return false;
    }

    return false;
}

bool HugeInteger::isLessThan(const HugeInteger& outro) const {
    return !isGreaterThan(outro) && !isEqualTo(outro);
}

bool HugeInteger::isGreaterThanOrEqual(const HugeInteger& outro) const {
    return isGreaterThan(outro) || isEqualTo(outro);
}

bool HugeInteger::isLessThanOrEqual(const HugeInteger& outro) const {
    return isLessThan(outro) || isEqualTo(outro);
}

/* Metodo ADD eu nao soube fazer mas vou deixar a solucao q achei na net aq p caso eu precise um dia e queira entender

* HugeInteger HugeInteger::add(const HugeInteger& outro) const {
HugeInteger resultado;

int subiu = 0; // Vai armazenar o valor que "sobe" na soma
int soma;

// Percorre os arrays de trás para frente (posição 39 até 0)
for (int i = 39; i >= 0; --i) {
soma = (numero[i] - '0') + (outro.numero[i] - '0') + subiu; // Soma dígitos + carry
resultado.numero[i] = (soma % 10) + '0'; // Armazena o último dígito da soma
subiu = soma / 10; // Calcula o carry para a próxima posição
}

// Define o tamanho do resultado (removendo zeros à esquerda)
for (int i = 0; i < 40; ++i) {
if (resultado.numero[i] != '0') {
resultado.tamanho = 40 - i;
break;
}
}

// Se o carry final for maior que 0 e não couber, avisar
if (subiu > 0) {
throw overflow_error("Overflow: resultado excede 40 dígitos.");
}

return resultado;
}
*/