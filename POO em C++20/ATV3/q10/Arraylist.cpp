#include <iostream>
using std::cout, std::endl;

#include "ArrayList.h"
#include <stdexcept>

ArrayList::ArrayList(int tam) : pos(0) {
    if (tam > 0) {
        this->tam = tam;
        arr = new int[tam];
    } else {
        arr = nullptr;
        this->tam = 0;
    }
}

ArrayList::~ArrayList() {
    if (arr)
        delete[] arr;
}

ArrayList &ArrayList::add(int v) {
    //validando espaço
    if (pos >= tam)
        throw std::out_of_range("Não há mais espaço no ArrayList!");

    arr[pos++] = v;

    return *this;
}

void ArrayList::print() const {
    for (int i = 0; i < pos; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

void somaArray(ArrayList &arrList, int valor) {
    for (int i = 0; i < arrList.pos; ++i) {
        arrList.arr[i] += valor;
    }
}

void subArray(ArrayList &arrList, int valor) {
    for (int i = 0; i < arrList.pos; ++i) {
        arrList.arr[i] -= valor;
    }
}

void mulArray(ArrayList &arrList, int valor) {
    for (int i = 0; i < arrList.pos; ++i) {
        arrList.arr[i] *= valor;
    }
}

void divArray(ArrayList &arrList, int valor) {
    if (valor == 0)
        throw std::invalid_argument("Divisao por zero nao e permitida!");
    for (int i = 0; i < arrList.pos; ++i) {
        arrList.arr[i] /= valor;
    }
}