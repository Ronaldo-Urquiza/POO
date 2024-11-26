#include <iostream>
#include "Bruxo.h"

int main() {
    // Criando dois objetos Bruxo
    Bruxo bruxo1("Harry Potter", "Grifinória", "Expecto Patronum");
    Bruxo bruxo2("Draco Malfoy", "Sonserina", "Lumos");

    // Exibindo informações dos bruxos
    std::cout << "Informações dos Bruxos:\n";
    bruxo1.display();
    std::cout << std::endl;
    bruxo2.display();
    std::cout << std::endl;

    std::cout << "Feitiços lançados:\n";
    bruxo1.lancarFeitico();
    bruxo2.lancarFeitico();

    return 0;
}
