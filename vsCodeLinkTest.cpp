#include <iostream>
#include "header.h"

void doMath(int x, int y){
    std::cout << x << " + " << y << " = " << x + y << std::endl;
}

void whatUp(){
    print("Not much how about you");
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    doMath(2, 3);
    combineFunc();
    return 0;
}