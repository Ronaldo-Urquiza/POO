#include <iostream>
#include <vector>

using namespace std;

bool primo(vector<int>& vec) {

    for (const int num : vec) {

        if (num <= 1) continue;

        bool ehPrimo = true;

        for(int j=2; j<num; j++){
            if(num % j == 0) {
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

int main() {
    int tamanho = 0;

    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    vector<int> vec(tamanho);

    for (int i = 0; i < tamanho; i++) {
        cout << "Digite o valor para a posicao " << i << ": ";
        cin >> vec[i];
    }

    primo(vec);

    return 0;
}
