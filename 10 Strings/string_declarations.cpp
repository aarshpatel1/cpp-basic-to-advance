#include <iostream>

int main() {

    char x = 'A';
    char S[11] = "HelloWorld";
    char s[] = "Hello World";
    char char_arr[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char int_char_arr[] = {65, 66, 67, 68, 69, '\0'};
    char *p_string = "Hello";
    std::string str = "Hello";

    std::cout << S << std::endl;
    std::cout << s << std::endl;
    std::cout << char_arr << std::endl;
    std::cout << int_char_arr << std::endl;
    std::cout << p_string << std::endl;
    std::cout << *p_string << std::endl;
    std::cout << str << std::endl;

    return 0;
}