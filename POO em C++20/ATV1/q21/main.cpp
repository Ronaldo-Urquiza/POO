#include <iostream>
#include "Cupom.h"
using namespace std;

int main() {
    Cupom cupom;

    // Adicionando itens
    cupom.addItem("001", "Teclado Mecânico", 2, 350.50);
    cupom.addItem("002", "Mouse Gamer", 1, 120.99);
    cupom.addItem("003", "Monitor Full HD", 1, 899.90);
    cupom.addItem("004", "Headset", -1, -1); // Testando quantidade inválida

    // Imprimindo a nota
    cupom.imprimirNota();

    // Exibindo um item específico
    Item item = cupom.getItem("002");
    cout << "\nItem buscado:\n";
    cout << " ID: " << item.id
         << "\n Descrição: " << item.descricao
         << "\n Quantidade: " << item.quantidade
         << "\n Preço: R$ " << item.preco << "\n";

    return 0;
}