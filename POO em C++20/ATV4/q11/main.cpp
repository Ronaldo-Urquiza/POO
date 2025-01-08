//
// Created by Ronaldo Urquiza on 08/01/2025.
//

#include "Pessoa.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"
#include <iostream>
using namespace std;

int main() {
    PessoaFisica pf("Carlos", "123.456.789-00");
    PessoaJuridica pj("Tech Corp", "12.345.678/0001-90", "Tech Corporation");

    // Usando o operador sobrecarregado
    cout << "PF <<: " << pf << endl;
    cout << "PJ <<: " << pj << endl;

    return 0;
}
