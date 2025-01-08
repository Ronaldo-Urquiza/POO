#pragma once
#include <string>
#include <vector>
using std::string;
using std::vector;

struct Item {
    string id;
    string descricao;
    int quantidade;
    float preco;
};

class Cupom {
public:
    // Construtor
    Cupom();

    //problema 1:
    void addItem(const string& id, const string& descricao, int quantidade, float preco);

    //problema 2:
    Item getItem(const string& id) const;

    //problema 3:
    float calculaCupom() const;

    //problema 3:
    void imprimirNota() const;

private:
    vector<Item> itens;
};
