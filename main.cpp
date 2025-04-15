#include <iostream>
#include "IntList.h"

int main() {
    IntList list;

    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_front(0);

    std::cout << "List forward: " << list << std::endl;

    std::cout << "List reverse: ";
    list.printReverse();
    std::cout << std::endl;

    list.pop_front();
    list.pop_back();

    std::cout << "After popping front and back: " << list << std::endl;

    return 0;
}
