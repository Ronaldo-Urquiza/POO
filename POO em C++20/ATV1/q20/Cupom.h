#pragma once
#include <string>
using std::string;

class Cupom {

public:
    Cupom(string id, string descricao, int quantidade, float preco);

    string getDescricao();
    int getQuantidade();
    float getPreco();
    string getId();

    void setDescricao(string descricao);
    void setQuantidade(int quantidade);
    void setPreco(float preco);
    void setId(string id);

    float calculaCupom();

private:
    string c_id;
    string c_descricao;
    int c_quantidade;
    float c_preco;
};


