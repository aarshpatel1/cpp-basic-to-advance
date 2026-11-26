#include <iostream>
using namespace std;

// class Base {
//   public:
//      virtual void show() { cout << "Base" << endl; }
// };

// class Derived : public Base {
//   public:
//     void show() { cout << "Derived" << endl; }
// };

// int main() {
//     // Base b;
//     Derived d;

//     // b.show();
//     // d.Base::show();
//     d.show();
//     // Base *ptr;

//     // ptr = &b;
//     // ptr->show();

//     // ptr = &d;
//     // ptr->show();

//     return 0;
// }

// class shape {
//   protected:
//     int width;
//     int length;

//   public:
//     shape(int w, int l) {
//         width = w;
//         length = l;
//     }
//     int area() {
//         cout << "shape is vague concept";
//         return -1;
//     }
// };

// class rectangle : public shape {
//   public:
//     rectangle(int w, int l) : shape(w, l) {}
//     int area() {
//         cout << "rectangle area =";
//         return (width * length);
//     }
// };

// class tringle : public shape {
//   public:
//     tringle(int w, int l) : shape(w, l) {}
//     int area() {
//         cout << "square area =";
//         return ((width * length) / 2);
//     }
// };

// int main() {
//     shape s(10, 5);
//     rectangle r(10, 5);
//     tringle t(10, 5);
//     shape *sptr;
//     sptr = &r;
//     cout << sptr->area() << endl;
//     sptr = &t;
//     cout << sptr->area() << endl;
//     return 0;
// }

class Base {
  public:
    int x;
};

class Derived : public Base {
  public:
    int y;
};

int main() {
    // Derived *d;
    // Base b;
    // d = &b;
    Derived d;
    Base *b;
    b = &d;
    return 0;
}