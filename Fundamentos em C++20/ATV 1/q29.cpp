#include <iostream>
#include <string>

using namespace std;

void sM(string &palavra) {
    int counter = 0;
    for (char i : palavra) {
        if (i >= 'A' && i <= 'Z') {
            counter++;
            cout << "Tem uma letra maiuscula." << endl;
        }
    }
    if(counter == 0){cout << "Nao tem letra maiuscula" << endl;}
}

int main(){

    string userS;
    cout << "Digite sua palavra: " << endl;
    cin >> userS;

    sM(userS);

    return 0;
}
