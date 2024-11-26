#include <iostream>
#include "Bruxo.h"
#include "ContaBanco.h"
using namespace std;

int main() {
    // Criando dois objetos Bruxo
    ContaBanco contaMayrileiney(100);
    ContaBanco contaSherlaynner(200);

    cout << "Conta Mayrileiney:" << contaMayrileiney.getSaldo() << endl;
    cout << "Conta Sherlaynner:" << contaSherlaynner.getSaldo() << endl;
    cout << endl;

    contaMayrileiney.creditar(10000);
    contaSherlaynner.creditar(10);

    cout << "Conta Mayrileiney:" << contaMayrileiney.getSaldo() << endl;
    cout << "Conta Sherlaynner:" << contaSherlaynner.getSaldo() << endl;
    cout << endl;

    contaMayrileiney.debitar(10000);
    contaSherlaynner.debitar(10);

    cout << "Conta Mayrileiney:" << contaMayrileiney.getSaldo() << endl;
    cout << "Conta Sherlaynner:" << contaSherlaynner.getSaldo() << endl;
    cout << endl;

    contaMayrileiney.debitar(10000);
    contaSherlaynner.debitar(10000);

    cout << endl;

    cout << "Conta Mayrileiney:" << contaMayrileiney.getSaldo() << endl;
    cout << "Conta Sherlaynner:" << contaSherlaynner.getSaldo() << endl;
    cout << endl;

    return 0;
}
