//
// Created by Ronaldo Urquiza on 30/11/2024.
//

#include "ViraTempo.h"
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;


ViraTempo::ViraTempo(int tempoN) {
    setTempo(tempoN);
}

int ViraTempo::getTempo() const {
    return this->tempo;
}

void ViraTempo::setTempo(int tempoN) {
    this->tempoN = tempoN;
}

void ViraTempo::mostrarTempo() const {
    cout << this->tempo << endl;
}

void ViraTempo::avancarTempo() {
    if(MagiaAncestralTemporalNumero768_ControleDimensional % 2 == 0) {
        if (this->tempo < tempoN) {this->tempo += 1;}
        else{this->tempo = tempo;}
    }
    else if(MagiaAncestralTemporalNumero768_ControleDimensional % 2 != 0) {
        if (this->tempo > 0 && this->tempo <= tempoN) {this->tempo -= 1;}
        else{this->tempo = 0;}
    }
    else {
        cout << "Erro"<< endl;
    }
}

void ViraTempo::virarTempo() {
    MagiaAncestralTemporalNumero768_ControleDimensional += 1;
}