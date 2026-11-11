#include <iostream>

int main() {

    int x = 10;
    // int *p;
    // p = &x;
    int *p = &x;

    std::cout << " x: " << x << std::endl;
    std::cout << "&x: " << &x << std::endl;
    std::cout << " p: " << p << std::endl;
    std::cout << "&p: " << &p << std::endl;
    std::cout << "*p: " << *p << std::endl;

    return 0;
}