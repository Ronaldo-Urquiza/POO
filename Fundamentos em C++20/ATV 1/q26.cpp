#include <iostream>

using namespace std;

float number = 0;
int counter = 0;

float zerotoinfinite () {
    return (counter++ == 0) ? 0 : ++number;
}

int main() {

    cout << zerotoinfinite() << endl;
    cout << zerotoinfinite() << endl;
    cout << zerotoinfinite() << endl;
    cout << zerotoinfinite() << endl;

    return 0;
}
