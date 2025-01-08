#include "HugeInteger.h"
#include <iostream>

using namespace std;

int main() {

    HugeInteger num1, num2;

    num1.input("1234567890123456789012345678901234567890");
    num2.input("987654321098765432109876543210");


    cout << "num1 == num2? " << (num1.isEqualTo(num2) ? "Sim" : "Não") << endl;
    cout << "num1 != num2? " << (num1.isNotEqualTo(num2) ? "Sim" : "Não") << endl;
    cout << "num1 > num2? " << (num1.isGreaterThan(num2) ? "Sim" : "Não") << endl;
    cout << "num1 < num2? " << (num1.isLessThan(num2) ? "Sim" : "Não") << endl;
    cout << "num1 >= num2? " << (num1.isGreaterThanOrEqual(num2) ? "Sim" : "Não") << endl;
    cout << "num1 <= num2? " << (num1.isLessThanOrEqual(num2) ? "Sim" : "Não") << endl;

    return 0;
}

