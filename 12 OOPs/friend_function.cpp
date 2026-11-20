#include <iostream>

class Complex {
  private:
    int real;
    int img;

  public:
    Complex(int r, int i) {
        real = r;
        img = i;
    }

    void display() { std::cout << "C3: " << real << "+i" << img; }

    friend Complex operator+(Complex c1, Complex c2);
};

Complex operator+(Complex c1, Complex c2) {
    return Complex(c1.real + c2.real, c1.img + c2.img);
}

int main() {
    Complex c1(5, 10), c2(6, 12), c3 = c1 + c2;
    c3.display();
    return 0;
}