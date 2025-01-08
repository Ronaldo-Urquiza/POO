#include "Bruxo.h"
#include "CapaBruxo.h"
#include "Varinha.h"
#include <iostream>

using namespace std;

int main() {
    CapaBruxo capa_harry(30, "Grifinoria");
    Varinha varinha_harry("Azevinho", "Pena de Fênix", 28);
    Bruxo harry("Harry Potter", "Grifinoria", "Expecto Patronum", capa_harry, varinha_harry);

    cout<<endl;

    harry.display();

    cout<<endl;

    harry.lancarFeitico();

    CapaBruxo capa_snape(32, "Sonserina");
    Varinha varinha_snape("Nogueira", "Corda de Coração de Dragão", 34);
    Bruxo snape("Severo Snape", "Sonserina", "Sectumsempra", capa_snape, varinha_snape);

    cout<<endl;

    snape.display();

    cout<<endl;

    snape.lancarFeitico();

    return 0;
}