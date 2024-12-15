#include "IntegerSet.h"
#include <iostream>
using std::cout, std::endl;

// Construtor padrão: inicializa o conjunto vazio
IntegerSet::IntegerSet() {
    for (int i = 0; i < 100; ++i) {
        arr[i] = 0; // Todos os elementos são inicialmente ausentes (0)
    }
}

// Construtor que recebe um array de inteiros e seu tamanho
IntegerSet::IntegerSet(const int arr[], int size) {
    for (int i = 0; i < 100; ++i) {
        this->arr[i] = 0; // Inicializa o conjunto vazio
    }

    for (int i = 0; i < size; ++i) {
        if (arr[i] >= 0 && arr[i] < 100) {
            this->arr[arr[i]] = 1; // Marca os números presentes no conjunto
        }
    }
}

void IntegerSet::insertElement(int k) {
    if (k >= 0 && k < 100) {
        arr[k] = 1; // Marca o número k como presente no conjunto
    }
}

void IntegerSet::deleteElement(int k) {
    if (k >= 0 && k < 100) {
        arr[k] = 0; // Marca o número k como ausente no conjunto
    }
}
void IntegerSet::print() const {
    bool first = true;
    for (int i = 0; i < 100; ++i) {
        if (arr[i] == 1) {
            if (!first) {
                cout << " "; // Se não for o primeiro elemento, adiciona espaço
            }
            cout << i;
            first = false;
        }
    }
    cout << endl;
}

// Função friend para realizar a união de dois conjuntos
IntegerSet unionOfSets(const IntegerSet &set1, const IntegerSet &set2) {
    IntegerSet result;
    for (int i = 0; i < 100; ++i) {
        if (set1.arr[i] == 1 || set2.arr[i] == 1) {
            result.arr[i] = 1; // Marca os elementos que estão em qualquer um dos conjuntos
        }
    }
    return result;
}

// Função friend para realizar a interseção de dois conjuntos
IntegerSet intersectionOfSets(const IntegerSet &set1, const IntegerSet &set2) {
    IntegerSet result;
    for (int i = 0; i < 100; ++i) {
        if (set1.arr[i] == 1 && set2.arr[i] == 1) {
            result.arr[i] = 1; // Marca os elementos que estão em ambos os conjuntos
        }
    }
    return result;
}
