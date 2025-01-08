//
// Created by Ronaldo Urquiza on 08/01/2025.
//

#include "Livro.h"
#include <string>
#include <iostream>

using namespace std;

Livro::Livro(int ano, int numeroPaginas, string titulo, string conteudo) {
    setAno(ano);
    setNumeroPaginas(numeroPaginas);
    setTitulo(titulo);
    setConteudo(conteudo);
}

int Livro::getAno() const {
    return this->ano;
}

void Livro::setAno(int ano) {
    this->ano = ano;
}

int Livro::getNumeroPaginas() const {
    return this->numeroPaginas;
}

void Livro::setNumeroPaginas(int numeroPaginas) {
    this->numeroPaginas = numeroPaginas;
}

string Livro::getTitulo() const {
    return this->titulo;
}

void Livro::setTitulo(const string& titulo) {
    this->titulo = titulo.empty() ? "Sem título" : titulo;
}

string Livro::getConteudo() const {
    return this->conteudo;
}

void Livro::setConteudo(const string& conteudo) {
    this->conteudo = conteudo.empty() ? "Sem conteúdo" : conteudo;
}

void Livro::ler() const {
    cout << "Lendo o livro: " << this->titulo << endl;
    cout << "Ano: " << this->ano << endl;
    cout << "Número de páginas: " << this->numeroPaginas << endl;
    cout << "Conteúdo: " << this->conteudo << endl;
}
