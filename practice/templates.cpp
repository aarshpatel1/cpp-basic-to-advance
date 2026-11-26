#include <iostream>
using namespace std;

// template <typename T, typename D> T add(T a, D b) { return a + b; }

// int main() {
//     cout << add(5, 3) << endl;       // int
//     cout << add(2.5, 3.7) << endl;   // double
//     cout << add('A', 2) << endl;     // char + int
//     cout << add('A', 2.813) << endl; // char + float
//     cout << add(2, 'a') << endl;     // int + char
//     cout << add(3.213, 'a') << endl; // float + char
// }

template <typename T, typename U> class Pair {
  private:
    T first;
    U second;

  public:
    Pair(T a, U b) {
        first = a;
        second = b;
    }
    void show() { cout << first << " " << second << endl; }
};

int main() {

    Pair<int, float> p1(10, 5.5);
    Pair<string, int> p2("Age", 25);
    p1.show();
    p2.show();
}