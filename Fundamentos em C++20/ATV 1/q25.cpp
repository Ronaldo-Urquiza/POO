#include <iostream>

using namespace std;

float totalLitros = 0;

int main() {

    float quantidadeL = 0;
    float KMrodado = 0;
    float consumo = 0;

    while(KMrodado != -1) {

        cout << "Digite quantos KM voce ja rodou: " << endl;
        cin >> KMrodado;

        if(KMrodado==-1){break;}

        cout << "Digite quantos litros falta para encher o tanque: " << endl;
        cin >> quantidadeL;

        consumo = KMrodado / quantidadeL;
        totalLitros += quantidadeL;

        cout << "Consumo: " << consumo << "Km/L" << endl;
    }

    cout << "Quantidade de litros consumidos: " << totalLitros << "L" << endl;

    return 0;
}
