#include <iostream>
using std::cout, std::endl;

#include "Time.h"

int main() {
    Time t(11,50,59);
    Time t2(11,59,59);
    Time t3(23,59,59);
    Time t4(23,00,00);
    Time t5(23,59,00);

    t.tick();
    t2.tick();
    t3.tick();
    t4.tick();
    t5.tick();

    cout << t.toUniversal() << endl;
    cout << t2.toUniversal() << endl;
    cout << t3.toUniversal() << endl;
    cout << t4.toUniversal() << endl;
    cout << t5.toUniversal() << endl;

    return 0;
}
