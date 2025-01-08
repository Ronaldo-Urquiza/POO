#include <iostream>
#include <string>
using std::cout, std::endl, std::string;

#include "Agenda.h"

int main () {
    string linha = "---------------------------------------------";
    Agenda A;

    cout << linha << endl;

    A.armazenaPessoa("Abel", 22, 1.78);
    A.armazenaPessoa(Pessoa("Tiago", 20, 1.80));
    A.imprimePovo();

    cout << linha << endl;

    int posicao = A.buscaPessoa("Tiago");
    if (posicao > 0)
        A.imprimePessoa(posicao);
    cout << linha << endl;

    A.removePessoa("Tiago");
    A.imprimePovo();
    cout << linha << endl;

    return 0;
}