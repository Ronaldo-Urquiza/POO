#include "ChapeuSeletor.h"
#include <string.h>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

ChapeuSeletor::ChapeuSeletor(){

}

void ChapeuSeletor::recepcionar() const
{
    cout << "Nao ha nada escondido em sua cabeca que o Chapeu Seletor nao consiga ver, por isso e so me porem na cabeca que vou dizer em que casa de Hogwarts deverao ficar" <<endl;
}

string ChapeuSeletor::sortearCasa()
{
    string casa = "";

    srand((unsigned)time(0));
    int i;
    i = (rand()%4)+1;

    if (i==1){casa = "Grifinoria!";}
    else if (i==2){casa = "Sonserina!";}
    else if (i==3){casa = "Corvinal!";}
    else if (i==4){casa = "Lufa-lufa!";}
    else{casa = "Eita";}

    return casa;
}
