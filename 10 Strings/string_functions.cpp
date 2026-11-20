#include <cstring>
#include <iostream>

int main() {
    // char s[100] = "x=10;y=20;z=30;";
    // char *token = strtok(s, "=;");
    // while (token != NULL) {
    //     std::cout << token << std::endl;
    //     // token = strtok(NULL, "=;");
    //     // token = strtok(NULL, "=");
    //     // token = strtok(NULL, ";");
    //     // token  =strtok(NULL, ";=");
    //     // token = strtok(NULL, "?=");
    //     // token = strtok(NULL, "?");
    // }

    std::string name="Nilkanth Varni Maharaj";
    std::cout << name.length() << std::endl;
    std::cout << name.capacity() << std::endl;

    return 0;
}