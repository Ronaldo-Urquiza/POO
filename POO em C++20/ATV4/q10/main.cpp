#include <iostream>
#include "Imovel.h"
#include "ImovelNovo.h"
#include "ImovelVelho.h"

using namespace std;

int main() {
    // Imóvel básico
    Imovel imovel(200000, "Rua das Flores, 123");
    cout << "Imóvel:\n";
    cout << "Endereço: " << imovel.getEndereco() << "\n";
    cout << "Preço: " << imovel.getPreco() << "\n\n";

    // Imóvel Novo
    ImovelNovo imovelNovo(200000, "Rua dos Jasmins, 456", 50000);
    cout << "Imóvel Novo:\n";
    cout << "Endereço: " << imovelNovo.getEndereco() << "\n";
    cout << "Preço com adicional: " << imovelNovo.getPreco() << "\n\n";

    // Imóvel Velho
    ImovelVelho imovelVelho(200000, "Rua das Margaridas, 789", 30000);
    cout << "Imóvel Velho:\n";
    cout << "Endereço: " << imovelVelho.getEndereco() << "\n";
    cout << "Preço com desconto: " << imovelVelho.getPreco() << "\n";

    return 0;
}
