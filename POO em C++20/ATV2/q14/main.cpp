#include "Pessoa.h"
#include <iostream>
using namespace std;

int main() {

    Pessoa pessoa1("Ronaldo Urquiza", "529.982.247-25");
    pessoa1.apresentar();
    cout << endl;

    Pessoa pessoa2("Vladimir Tepes", "123.456.789-12");
    pessoa2.apresentar();
    cout << endl;

    pessoa2.setCPF("777.777.777-77");
    pessoa2.apresentar();
    cout << endl;

    pessoa2.setCPF("111.444.777-35");
    pessoa2.apresentar();

    return 0;
}
