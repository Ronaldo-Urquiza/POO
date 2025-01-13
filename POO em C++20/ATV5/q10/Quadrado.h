#ifndef QUADRADO_H
#define QUADRADO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Quadrado : public FormaBidimensional
{
public:
    Quadrado(double lado) : FormaBidimensional(4), lado(lado) {}

    virtual void desenhar() {
        cout << "+---+" << endl;
        cout << "|   |" << endl;
        cout << "+---+" << endl;
    }

    void calcularArea() const override {
        cout << "Area: " << lado*lado << endl;
    }

    void calcularPerimetro() const override {
        cout << "Perimetro: " << lado*numLados << endl;
    }

private:
    double lado;

};

#endif