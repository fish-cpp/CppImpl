#include <iostream>
#include "./math.cpp"

int mai() {
    add();
    std::cout << "Hello, World!" << std::endl;
    std::cout << typeid(int).name() ;
    return 0;
}