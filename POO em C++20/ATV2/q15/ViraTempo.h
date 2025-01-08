//
// Created by Ronaldo Urquiza on 30/11/2024.
//


#pragma once

#include <string>
using std::string;

class ViraTempo {
public:
    ViraTempo(int tempoN=0);

    int getTempo() const;

    void setTempo(int tempoN);

    void mostrarTempo() const; // vai exibir o tempo (número atual);
    void avancarTempo(); // vai incrementar ou decrementar a contagem. Não deve permitir que os limites (0 e N) do ViraTempo sejam ultrapassados;
    void virarTempo(); // vai controlar se o próximo avanço de tempo vai incrementar ou decrementar;

private:
    int tempo{};
    int tempoN = 0;
    int MagiaAncestralTemporalNumero768_ControleDimensional{};
};
