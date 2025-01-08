//
// Created by Ronaldo Urquiza on 08/01/2025.
//


#pragma once

#include <string>
using std::string;

class Livro {
public:
    Livro(int ano, int numeroPaginas, string titulo, string conteudo);

    int getAno() const;
    void setAno(int ano);

    int getNumeroPaginas() const;
    void setNumeroPaginas(int numeroPaginas);

    string getTitulo() const;
    void setTitulo(const string& titulo);

    string getConteudo() const;
    void setConteudo(const string& conteudo);

    void ler() const;

private:
    string titulo;
    int ano;
    int numeroPaginas;
    string conteudo;
};
