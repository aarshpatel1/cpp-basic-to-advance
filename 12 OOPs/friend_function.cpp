#include <iostream>
using namespace std;
class Complex {
  private:
    int real;
    int img;

  public:
    Complex(int r, int i) {
        real = r;
        img = i;
    }

    void display() { cout << "C3: " << real << "+i" << img; }

    friend Complex operator+(Complex c1, Complex c2);

    friend ostream &operator<<(ostream &out, Complex &c);
};

ostream &operator<<(ostream &out, Complex &c) {
    out << c.real << "+i" << c.img << endl;
    return out;
}

Complex operator+(Complex c1, Complex c2) {
    return Complex(c1.real + c2.real, c1.img + c2.img);
}

int main() {
    Complex c1(5, 10), c2(6, 12), c3 = c1 + c2;
    // c3.display();
    // operator<<(cout, c3);
    cout << c3;
    return 0;
}