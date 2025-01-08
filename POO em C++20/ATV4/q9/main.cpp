#include <iostream>
#include "Humano.h"
#include "Bruxo.h"
#include "Trouxa.h"
#include "CapaBruxo.h"
#include "Varinha.h"

using namespace std;

int main() {

    Humano humano("Ronaldo", 1.75, 25, "Campina Grande");
    cout << "Nome: " << humano.getNome() << endl;
    cout << "Altura: " << humano.getAltura() << "m" << endl; // Altura usada no construtor, getter pode ser adicionado se necessário
    cout << "Idade: " << humano.getIdade() << " anos" << endl; // Idade usada no construtor, getter pode ser adicionado se necessário
    cout << "Moradia: " << humano.getMoradia() << endl;
    cout << endl;

    Trouxa trouxa("Maria", 1.60, 30, "Recife", "Professora");
    cout<<endl;
    cout << "Trouxa:" << endl;
    cout << "Nome: " << trouxa.getNome() << endl;
    cout << "Profissão: " << trouxa.getProfissao() << endl;
    cout << "Altura: " << trouxa.getAltura() << "m" << endl;
    cout << "Idade: " << trouxa.getIdade() << " anos" << endl;
    cout << "Moradia: Recife" << endl;
    cout << endl;

    CapaBruxo capa_harry(30, "Grifinoria");
    Varinha varinha_harry("Azevinho", "Pena de Fênix", 28);
    Bruxo harry("Harry", 1.60, 40, "Recife", "Grifinória", "Alohomora", capa_harry, varinha_harry);
    cout<<endl;
    harry.display();

    return 0;
}
