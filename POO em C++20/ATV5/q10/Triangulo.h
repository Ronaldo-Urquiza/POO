#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Triangulo : public FormaBidimensional
{
public:
    Triangulo(double base, double altura) : FormaBidimensional(3), base(base), altura(altura) {}

    virtual void desenhar() {
        cout << "   .    " << endl;
        cout << "  / \\  " << endl;
        cout << " /   \\ " << endl;
        cout << "/_____\\" << endl;
    }

    void calcularArea() const override {
        cout << "Area de triangulo: " << base * altura << endl;
    }

    void calcularPerimetro() const override {
        cout << "Perimetro de triangulo: " << base * numLados << endl;
    }

private:
    double base;
    double altura;
};

#endif