#pragma once
#include <string>

using namespace std;

class HugeInteger {
public:
    HugeInteger();

    void input(string numero); // Recebe uma string contendo o “inteiro”

    void output() const; // Imprime o número na saída padrão

    HugeInteger add(const HugeInteger& outro) const; // Soma o objeto atual com outro HugeInteger

    bool isEqualTo(const HugeInteger& outro) const;
    bool isNotEqualTo(const HugeInteger& outro) const;
    bool isGreaterThan(const HugeInteger& outro) const;
    bool isLessThan(const HugeInteger& outro) const;
    bool isGreaterThanOrEqual(const HugeInteger& outro) const;
    bool isLessThanOrEqual(const HugeInteger& outro) const;

private:
    char numero[40]{}; // Array para armazenar o número como caracteres
    int tamanho; // Tamanho atual do número em dígitos
};
