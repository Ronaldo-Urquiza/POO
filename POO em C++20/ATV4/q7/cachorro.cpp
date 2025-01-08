//
// Created by Ronaldo Urquiza on 30/12/2024.
//

#include "cachorro.h"
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

Cachorro::Cachorro(string nome, string raca) : Animal(nome, raca) {}

string Cachorro::late() const {
    return getNome() + " está latindo!";
}
