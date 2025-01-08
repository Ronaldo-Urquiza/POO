//
// Created by Ronaldo Urquiza on 01/12/2024.
//


#pragma once

#include <string>
using std::string;

class Varinha {
public:
    Varinha(string Madeira, string Nucleo, float Comprimento);

    string getMadeira() const;
    string getNucleo() const;
    float getComprimento() const;

    void setMadeira(string Madeira);
    void setNucleo(string Nucleo);
    void setComprimento(float Comprimento);
    
    void display() const;

private:
    string Madeira;
    string Nucleo;
    float Comprimento;
};
