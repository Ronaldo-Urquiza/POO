//
// Created by Ronaldo Urquiza on 25/11/2024.
//

#include "Data.h"
#include <sstream> // Para std::ostringstream
using namespace std;

Data::Data(int dia, int mes, int ano) {
    d_dia = dia;
    d_ano = ano;

    if(mes>=1 && mes<=12){d_mes=mes;}
    else{d_mes=1;}

}

void Data::setDia(int dia) {
    d_dia = dia;
}

void Data::setMes(int mes) {
    d_mes = mes;
}

void Data::setAno(int ano) {
    d_ano = ano;
}

int Data::getAno() const {
    return d_ano;
}

int Data::getDia() const {
    return d_dia;
}

int Data::getMes() const {
    return d_mes;
}

string Data::toString() const {
    ostringstream oss; //vai criando a teia de carcteres
    oss << d_dia << "/" << d_mes << "/" << d_ano;
    return oss.str();
}

