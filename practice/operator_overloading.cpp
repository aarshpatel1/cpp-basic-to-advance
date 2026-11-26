#include <iostream>
using namespace std;

// class Complex {
//   public:
//     int real, img;
//     Complex(int r, int i) {
//         real = r;
//         img = i;
//     }

//     friend Complex operator+(Complex c1, Complex c2);
//     friend Complex operator-(Complex c1, Complex c2);
// };

// Complex operator+(Complex c1, Complex c2) {
//     return Complex(c1.real + c2.real, c1.img + c2.img);
// }

// Complex operator-(Complex c1, Complex c2) {
//     return Complex(c1.real - c2.real, c1.img - c2.img);
// }

// class Bank {
//   public:
//     int balance = 0;
//     void operator+(int amount) { balance += amount; }

//     friend bool operator>(Bank account1, Bank account2);
// };

// bool operator>(Bank account1, Bank account2) {
//     return account1.balance > account2.balance;
// }

class Counter {
  public:
    int count = 0;

    Counter(int c) { count = c; }
    // prefix
    // Counter& operator++() {
    //     count++;
    //     return *this;
    // }
    void operator++() { count++; }
    void operator--() { count--; }

    // postfix
    // Counter &operator++(int) {
    //     count++;
    //     return *this;
    // }
    void operator++(int) { count++; }
    void operator--(int) { count--; }
    void display() { cout << count << endl; }
};

int main() {

    // Complex c1(213, 321);
    // Complex c2(432, 565);

    // Complex c3 = c1 + c2;
    // cout << c3.real << "+i" << c3.img << endl;
    // Complex c4 = c1 - c2;
    // cout << c4.real << "+i" << c4.img << endl;

    // Bank user1;
    // cout << user1.balance << endl;
    // user1 + 1000;
    // cout << user1.balance << endl;

    // Bank user2, user3;
    // user2 + 10000;
    // user3 + 20000;
    // if (user2 > user3) {
    //     cout << "User 2 has more balance " << endl;
    // } else {
    //     cout << "User 3 has more balance " << endl;
    // }

    // Counter count(2);
    Counter count = 2;
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            count++;
        } else {
            ++count;
        }
    }
    count.display();
    --count;
    count--;
    count.display();

    return 0;
}