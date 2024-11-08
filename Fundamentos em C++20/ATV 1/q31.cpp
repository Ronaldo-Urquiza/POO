#include <iostream>

using namespace std;

bool primo(int*& array, int tamanho) {

    for (int i = 0; i < tamanho; i++) {

        if (array[i] <= 1) continue;

        bool ehPrimo = true;

        for (int j = 2; j < array[i]; j++) {
            if (array[i] % j == 0) {
                ehPrimo = false;
                break;
            }
        }

        if (ehPrimo) {
            cout << "Tem primo" << endl;
            return true;
        }

    }
    cout << "Não tem primo" << endl;
    return false;
}

int main(){
    int tamanho = 0;

    std::cout << "Digite o tamanho do array: ";
    std::cin >> tamanho;

    int* array = new int[tamanho]; //achei isso pra alocar dinamicamente

    for (int i = 0; i < tamanho; i++) {
        std::cout << "Digite o valor para a posicao " << i << ": ";
        std::cin >> array[i];
    }

    primo(array, tamanho);

    delete[] array; //tava reclamando de memory leaked

    return 0;
}
