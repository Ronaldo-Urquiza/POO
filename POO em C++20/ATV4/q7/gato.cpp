//
// Created by Ronaldo Urquiza on 30/12/2024.
//

#include "gato.h"
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

#include "Gato.h"

Gato::Gato(string nome, string raca) : Animal(nome, raca) {}

string Gato::mia() const {
    return getNome() + " está miando!";
}
