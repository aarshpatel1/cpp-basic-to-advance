#include <iostream>
using namespace std;

template <typename T, typename D> T add(T a, D b) { return a + b; }

int main() {
    cout << add(5, 3) << endl;     // int
    cout << add(2.5, 3.7) << endl; // double
    cout << add('A', 2) << endl;   // char + int 
}