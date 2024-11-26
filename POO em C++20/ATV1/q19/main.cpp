#include <iostream>
#include "Data.h"
using namespace std;

int main() {
    // Criando objetos da classe Data
    Data data1(25, 11, 2024);
    Data data2(31, 13, 2024); // Mês inválido

    // Exibindo as datas
    cout << "Data 1: " << data1.toString() << endl;
    cout << "Data 2 (tinha mês 13): " << data2.toString() << endl;

    return 0;
}