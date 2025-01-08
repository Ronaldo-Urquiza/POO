#pragma once

#include <string>
using std::string;

class Retangulo {
public:
    Retangulo(
        float altura=0.0,
        float largura=0.0);

    float getAltura() const;
    float getLargura() const;

    void setAltura(float altura);
    void setLargura(float largura);

    void imprime() const;
    float area() const;
    float perimetro() const;

private:
    float altura{};
    float largura{};
};
