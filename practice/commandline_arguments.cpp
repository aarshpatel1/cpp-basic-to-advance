// #include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    if (argc != 3) {
        cout << "Usage: ./sum number1 number2";
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    cout << "Sum = " << a + b << endl;

    return 0;
}