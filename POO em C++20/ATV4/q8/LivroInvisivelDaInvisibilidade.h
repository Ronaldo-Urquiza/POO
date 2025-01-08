//
// Created by Ronaldo Urquiza on 08/01/2025.
//


#pragma once

#include <string>
using std::string;

#include "Livro.h"

class LivroInvisivelDaInvisibilidade : public Livro {

public:
    LivroInvisivelDaInvisibilidade() : Livro(0, 0, "", "") {}
    static void ler() ;

};