#pragma once
#include <string>
using std::string;

class Bruxo {

public:
    //Construtor:
    Bruxo(string nome, string casa, string feiticoPredileto);

    // Getters
    string getNome() const;
    string getCasa() const;
    string getFeitico() const;

    // Setters
    void setNome(string nome);
    void setCasa(string casa);
    void setFeitico(string feiticoPredileto);

    void lancarFeitico();

    void display() const;

private:
    string b_nome;
    string b_casa;
    string b_feiticopredileto;
};

