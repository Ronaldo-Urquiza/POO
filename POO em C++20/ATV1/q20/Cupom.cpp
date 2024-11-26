#include "Cupom.h"
#include <sstream> // Para std::ostringstream
using namespace std;

Cupom::Cupom(string id, string descricao, int quantidade, float preco) {
    c_id = id;
    c_descricao = descricao;
    setPreco(preco);
    setQuantidade(quantidade);
}

string Cupom::getId() {
    return c_id;
}
string Cupom::getDescricao() {
    return c_descricao;
}
int Cupom::getQuantidade() {
    return c_quantidade;
}
float Cupom::getPreco() {
    return c_preco;
}

void Cupom::setQuantidade(int quantidade) {
    c_quantidade = (quantidade > 0) ? quantidade : 0;
}

void Cupom::setPreco(float preco) {
    c_preco = (preco > 0.0f) ? preco : 0.0f;
}

void Cupom::setId(string id) {
    c_id = id;
}

void Cupom::setDescricao(string descricao) {
    c_descricao = descricao;
}

float Cupom::calculaCupom() {
    return c_quantidade * c_preco;
}