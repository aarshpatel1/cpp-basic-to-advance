#include <iostream>

int main() {

    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;
    int *q = &arr[4];

    // std::cout << q - p << std::endl;
    // std::cout << p - q << std::endl;
    // std::cout << p - 1 << std::endl;

    // std::cout << *p << std::endl;
    // p--;
    // std::cout << p << std::endl;
    // p++;
    // std::cout << *p << std::endl;
    // p--;
    // std::cout << *p << std::endl;

    // std::cout << p << std::endl;
    // p+=2;
    // std::cout << p << std::endl;

    // std::cout << p << std::endl;
    // for (int i = 0; i < 5; i++) {
    // std::cout << arr[i] <<std::endl;
    // std::cout << i[arr] << std::endl;
    // std::cout << *(arr + i) << std::endl;
    // std::cout << *(p + i) << std::endl;
    // std::cout << p[i] << std::endl;

    // std::cout << arr + i << std::endl;
    // std::cout << p + i << std::endl;
    // std::cout << *p << std::endl;
    // p++;
    // }
    // std::cout << p << std::endl;

    return 0;
}