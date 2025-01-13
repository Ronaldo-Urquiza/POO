#ifndef CIRCULO_H
#define CIRCULO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Circulo : public FormaBidimensional
{
public:
    Circulo(double raio) : FormaBidimensional(99999), raio(raio) {}

    virtual void desenhar() {
        cout << "  _ " << endl;
        cout << "/   \\" << endl;
        cout << "\\   /" << endl;
        cout << "  - " << endl;
    }

    void calcularArea() const override {
        cout << "Área do círculo: " << 3.14 * raio * raio << endl;
    }

    void calcularPerimetro() const override {
        cout << "Comprimento do círculo: " << 2 * 3.14 * raio << endl;
    }


private:
    double raio;

};
#endif