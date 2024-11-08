#include <iostream>
using namespace std;

void imprime(int padrao) {
    if(padrao==1) {
        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }

        cout << endl;
    }

    else if(padrao==2) {
        for (int i = 5; i >= 1; i--) {
            for (int j = 1; j <= 5 - i; j++) {
                cout << " ";
            }
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }

        cout << endl;
    }

    else if(padrao==3) {
        for (int i = 1; i <= 3; i++) {
            for (int j = 1; j <= 3 - i; j++) {
                cout << " ";
            }
            for (int j = 1; j <= (2 * i - 1); j++) {
                cout << "*";
            }
            cout << endl;
        }

        for (int i = 3 - 1; i >= 1; i--) {
            for (int j = 1; j <= 3 - i; j++) {
                cout << " ";
            }
            for (int j = 1; j <= (2 * i - 1); j++) {
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
    }

    else if(padrao==4) {
        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j <= 5 - i; j++) {
                cout << " ";
            }
            for (int j = 1; j <= (2 * i - 1); j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
}

int main() {

    int padrao{0};
    cout << "Digite o padrao que voce quer ver: " << endl;
    cin >> padrao;

    imprime(padrao);

    return 0;
}
