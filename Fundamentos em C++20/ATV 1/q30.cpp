#include <iostream>
#include <string>

using namespace std;

void sm(string &palavra) {
    int i = 0;

    while (palavra[i] != '\0') {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z') {
            palavra[i] += 32;  //sacada pra transformar
        }
        i++;
    }
    cout << palavra << endl;
}

int main(){
    string userS;
    cout << "Digite sua palavra: " << endl;
    cin >> userS;

    sm(userS);

    return 0;
}
