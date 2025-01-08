#include <iostream>
#include "ArrayList.h"

int main() {
    ArrayList list(5);

    list.add(10).add(20).add(30);
    list.print(); // S: 10 20 30

    somaArray(list, 5);
    list.print(); // S: 15 25 35

    subArray(list, 10);
    list.print(); // S: 5 15 25

    mulArray(list, 2);
    list.print(); // S: 10 30 50

    divArray(list, 2);
    list.print(); // S: 5 15 25

    divArray(list, 0);
    list.print();


    return 0;
}
