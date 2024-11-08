#include <iostream>

using namespace std;

void swap(double& valor1,double& valor2){

    double valorReserva = valor1;
    valor1 = valor2;
    valor2 = valorReserva;

}

int main() {
    double v1 = 0, v2 = 0;

    cout << "Digite o primeiro valor: ";
    cin >> v1;
    cout << "Digite o segundo valor: ";
    cin >> v2;

    swap(v1, v2);

    cout << "Valores apos a troca: " << endl;
    cout << "v1: " << v1 << endl;
    cout << "v2: " << v2 << endl;

    return 0;
}
