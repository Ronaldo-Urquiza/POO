#include "Retangulo.h"
#include <iostream>

using namespace std;

int main() {

    Retangulo MeuRetangulo(5,5);

    cout << MeuRetangulo.area() << endl;
    cout << MeuRetangulo.perimetro() << endl;

    MeuRetangulo.imprime();

    return 0;
}
