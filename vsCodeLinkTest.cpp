#include <iostream>
#include "header.h"

void doMath(int x, int y){
    std::cout << x << " + " << y << " = " << x + y;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    doMath(2, 3);
    return 0;
}