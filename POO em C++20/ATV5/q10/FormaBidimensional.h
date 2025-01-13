#ifndef FORMABI_H
#define FORMABI_H

//classe abstrata

class FormaBidimensional
{
public:
    FormaBidimensional(int numLados) : numLados(numLados) { }

    //metodo virtual puro
    virtual void desenhar() = 0;

    virtual void calcularArea() const = 0;

    virtual void calcularPerimetro() const = 0;

protected:
    int numLados;
};

#endif