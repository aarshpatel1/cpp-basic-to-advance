#include <iostream>

int main() {
    std::string name;
    std::cout << "Enter the full name: ";
    std::getline(std::cin, name);
    std::cout << "Your name is: " << name;
    return 0;
}