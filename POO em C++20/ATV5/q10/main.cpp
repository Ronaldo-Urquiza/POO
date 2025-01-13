#include <iostream>

#include "Circulo.h"
#include "Quadrado.h"
#include "Triangulo.h"

int main() {
    //FormaBidimensional fd(2); // ERRO!!!!

    // FormaBidimensional *p; // o ponteiro pode existir
    FormaBidimensional *formas[] = {
        new Quadrado(5), new Circulo(5), new Triangulo(5,10)};

    for (int i = 0; i < 3; i++) {
        formas[i]->desenhar();
        formas[i]->calcularArea();
        formas[i]->calcularPerimetro();
        delete formas[i];
    }

    return 0;
}