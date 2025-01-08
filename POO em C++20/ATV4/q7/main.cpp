#include <iostream>
#include "Cachorro.h"
#include "Gato.h"

using namespace std;

int main() {
    // Criando objetos de cada classe
    Cachorro cachorro("Rex", "Pastor Alemão");
    Gato gato("Mimi", "Siamês");

    // Usando métodos das classes
    cout << cachorro.caminha() << endl;
    cout << cachorro.late() << endl;

    cout << gato.caminha() << endl;
    cout << gato.mia() << endl;

    return 0;
}