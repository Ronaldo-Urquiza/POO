#include <iostream>
#include "IntegerSet.h"

int main() {
    IntegerSet set1;
    set1.insertElement(1);
    set1.insertElement(3);
    set1.insertElement(5);

    IntegerSet set2;
    set2.insertElement(3);
    set2.insertElement(4);
    set2.insertElement(5);

    std::cout << "Conjunto 1: ";
    set1.print();

    std::cout << "Conjunto 2: ";
    set2.print();

    // União de set1 e set2
    IntegerSet unionSet = unionOfSets(set1, set2);
    std::cout << "Uniao: ";
    unionSet.print();

    // Interseção de set1 e set2
    IntegerSet intersectionSet = intersectionOfSets(set1, set2);
    std::cout << "Intersecao: ";
    intersectionSet.print();

    // Remover um elemento
    set1.deleteElement(3);
    std::cout << "Conjunto 1 apos remocao do 3: ";
    set1.print();

    return 0;
}
