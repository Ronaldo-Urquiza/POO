#pragma once

class IntegerSet {
public:
    // Construtor padrão: inicializa o conjunto vazio
    IntegerSet();

    // Construtor que recebe um array de inteiros e seu tamanho
    IntegerSet(const int arr[], int size);

    void insertElement(int k);
    void deleteElement(int k);
    void print() const;

    friend IntegerSet unionOfSets(const IntegerSet &set1, const IntegerSet &set2);
    friend IntegerSet intersectionOfSets(const IntegerSet &set1, const IntegerSet &set2);

private:
    int arr[100]; // Array que armazena a presença dos números de 0 a 99
};
