#include <iostream>
using std::cout, std::endl;

#include "Time.h"

int main() {
    Time currentTime;  // Objeto será inicializado com a hora atual do sistema
    cout << "Hora universal: " << currentTime.toUniversal() << endl;
    cout << "Hora formato padrão: " << currentTime.toStandard() << endl;
}
