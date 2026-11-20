#include <iostream>

class Rectangle {
  public:
    int length, breadth;
    int area() { return length * breadth; }
    int parameter() { return (length + breadth) * 2; }
};

int main() {
    Rectangle *p = new Rectangle();
    return 0;
}
