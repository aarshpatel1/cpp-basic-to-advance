#include <iostream>

class Complex {

  public:
    int real, img;
    Complex(int r = 0, int i = 0) {
        real = r;
        img = i;
    }
    Complex operator+(Complex c) {
        // Complex temp;
        // temp.real = real + c.real;
        // temp.img = img + c.img;
        // return temp;

        return Complex(real + c.real, img + c.img);
    }
};

int main() {
    Complex c1(5, 10), c2(8, 9), c3 = c1 + c2;
    std::cout << "C3: " << c3.real << "+i" << c3.img;

    return 0;
}