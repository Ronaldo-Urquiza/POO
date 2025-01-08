#include "Cupom.h"
#include <iostream>
#include <iomanip>
using namespace std;

Cupom::Cupom() {
}

void Cupom::addItem(const string& id, const string& descricao, int quantidade, float preco) {
    if (quantidade < 0) quantidade = 0;
    if (preco < 0) preco = 0;

    //adiciona um elemento no final do vetor
    itens.push_back({id, descricao, quantidade, preco});
}

Item Cupom::getItem(const string& id) const {
    //for each determinand tipos automaticamente cada item no vector itens
    for (const auto& item : itens) {
        if (item.id == id) return item; // Retorna o item encontrado
    }
    return {"", "", 0, 0}; // Retorna item vazio caso não encontrado
}

float Cupom::calculaCupom() const {
    float total = 0.0f;//Limpa total primeiru
    //for each determinand tipos automaticamente cada item no vector itens
    for (const auto& item : itens) {
        total += item.quantidade * item.preco;
    }
    return total;
}

void Cupom::imprimirNota() const {
    float totalNota = 0.0f;

    for (const auto& item : itens) {
        float totalItem = item.quantidade * item.preco;
        totalNota += totalItem;
        cout << "ID: " << item.id
             << ", Descrição: " << item.descricao
             << ", Quantidade: " << item.quantidade
             << ", Preço: R$ " << std::fixed << std::setprecision(2) << item.preco
             << ", Total: R$ " << totalItem << "\n";
    }

    cout << endl;

    cout << "Total Geral: R$ " << totalNota << "\n";
}
