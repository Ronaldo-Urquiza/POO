//
// Created by Ronaldo Urquiza on 30/12/2024.
//


#pragma once

#include <string>
using std::string;

#include "Animal.h"

class Cachorro : public Animal {

public:
    Cachorro(string nome, string raca);
    string late() const;

};
