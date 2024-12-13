#include <iostream>
#include "Varinha.h"

using namespace std;

int main() {

    Varinha varinha("Carvalho", "Pena de Fênix", 30.5);


    cout << "Dados da Varinha:" << endl;
    varinha.display();

    return 0;
}
