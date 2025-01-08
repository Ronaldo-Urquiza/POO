//
// Created by Ronaldo Urquiza on 30/11/2024.
//

#include "Retangulo.h"
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;


Retangulo::Retangulo(float altura, float largura) {
    setAltura(altura);
    setLargura(largura);
}

float Retangulo::getAltura() const {
    return this->altura;
}

void Retangulo::setAltura(float altura) {
    if (this->altura < 0 || this->altura > 20) this->altura = 1.0;
    this->altura = altura;
}

float Retangulo::getLargura() const {
    return this->largura;
}

void Retangulo::setLargura(float largura) {
    if (this->altura < 0 || this->altura > 20) this->altura = 1.0;
    this->largura = largura;
}

float Retangulo::area() const {
    float x = getAltura();
    float y = getLargura();
    float area = x*y;
    return area;
}
float Retangulo::perimetro() const {
    float x = getAltura();
    float y = getLargura();
    float perimetro = 2*(x+y);
    return perimetro;
}

void Retangulo::imprime() const {
    for (int i = 0; i < getAltura(); i++) {
        for (int j = 0; j < getLargura(); j++) {
            // Verificar se está na primeira/ultima coluna
            if(j==0 || j==getLargura()-1) {
                //Primeira ou ultima linha
                if(i==0 || i==getAltura()-1) {cout<<"+";} //Pontas
                else{cout<<"|";}//Se n é a primeira ou ultima linha ent n é ponta
            }
            // Verificando as colunas do meio
            else{
                //Se for a priemeira ou ultima linha
                if(i==0||i==getAltura() -1) {cout<<"-";}
                //So sobrou o recheio do retangulo ent preenche com vazio
                else{cout<<" ";}
            }
        }
        //quebra de linha após cada linha
        cout<<endl;
    }
}