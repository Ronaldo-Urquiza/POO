//
// Created by Ronaldo Urquiza on 30/12/2024.
//


#pragma once

#include <string>
using std::string;

#include "Animal.h"

class Gato : public Animal {
public:
    Gato(string nome, string raca);
    string mia() const;
};