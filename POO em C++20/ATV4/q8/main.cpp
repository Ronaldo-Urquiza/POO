//
// Created by Ronaldo Urquiza on 08/01/2025.
//

#include "Livro.h"
#include "LivroMonstruosoDosMonstros.h"
#include "LivroInvisivelDaInvisibilidade.h"
#include <iostream>
using namespace std;

int main() {

    Livro meuLivro(2025, 300, "C++ para Iniciantes", "Este é o conteúdo do livro sobre C++.");
    meuLivro.ler();

    LivroMonstruosoDosMonstros livroMonstruoso;
    LivroInvisivelDaInvisibilidade livroInvisivel;

    cout<<endl;

    // Exibindo informações do Livro Monstruoso dos Monstros
    cout << "Lendo o Livro Monstruoso dos Monstros:" << endl;
    livroMonstruoso.ler();
    cout << endl;

    // Exibindo informações do Livro Invisível da Invisibilidade
    cout << "Lendo o Livro Invisível da Invisibilidade:" << endl;
    livroInvisivel.ler(); // Não imprime nada
    cout << endl;

    return 0;
}
