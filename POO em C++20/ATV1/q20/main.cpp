#include <iostream>
#include "Cupom.h"
using namespace std;

int main() {
    // Criando objetos Cupom
    Cupom item1("001", "Fio de cabelo do vampiro Alucard", 2, 150.0f);
    Cupom item2("002", "Horcrux", -1, -50.0f); // Quantidade e preço inválidos

    // Exibindo informações dos itens
    cout << "Item 1:" << endl;
    cout << "ID: " << item1.getId() << endl;
    cout << "Descrição: " << item1.getDescricao() << endl;
    cout << "Quantidade: " << item1.getQuantidade() << endl;
    cout << "Preço: R$ " << item1.getPreco() << endl;
    cout << "Valor Total: R$ " << item1.calculaCupom() << endl;

    cout << endl;

    cout << "Item 2:" << endl;
    cout << "ID: " << item2.getId() << endl;
    cout << "Descrição: " << item2.getDescricao() << endl;
    cout << "Quantidade: " << item2.getQuantidade() << endl;
    cout << "Preço: R$ " << item2.getPreco() << endl;
    cout << "Valor Total: R$ " << item2.calculaCupom() << endl;

    return 0;
}
