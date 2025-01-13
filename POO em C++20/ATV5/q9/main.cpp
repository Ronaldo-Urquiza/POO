#include <iostream>
#include "Livro.h"
#include "LivroInvisivelDaInvisibilidade.h"
#include "LivroMonstruosoDosMonstros.h"

using namespace std;

int main() {
    Livro livroBase(2025, 300, "Livro Base", "Este é um livro genérico.");
    LivroInvisivelDaInvisibilidade livroInvisivel;
    LivroMonstruosoDosMonstros livroMonstro;

    //Cada elemento do array será um ponteiro para um objeto da classe base Livro
    Livro* livros[] = {&livroBase, &livroInvisivel, &livroMonstro};
         //nome do array

    //variavel livro do tipo Livro (classe base) in array livros
    for (Livro* livro : livros) {
        livro->ler(); //invoca metodo de ler
    }

    return 0;
}
