#include <iostream>
using namespace std;

// class Base {
//   public:
//     Base(int x) { cout << "Base: " << x << endl; }
// };

// class Derived : public Base {
//   public:
//     Derived(int a) : Base(a) { // calling base constructor
//         cout << "Derived: " << a << endl;
//     }
// };
// int main() { Derived obj(10); }

// dimand hybrid inheritance problem
// class A {
//   public:
//     A() { cout << "Constructing class A" << endl; }
//     int x;
// };
// class B : virtual public A { // Derived class B inheriting from A
//   public:
//     B() { cout << "Constructing class B" << endl; }
// };
// class C : virtual public A { // Derived class C inheriting from A
//   public:
//     C() { cout << "Constructing class C" << endl; }
// };
// class D : public B, public C { // Derived class D inheriting from B and C
//   public:
//     D() { cout << "Constructing class D" << endl; }
// };
// int main() {
//     D d;
//     // d.x = 10;    // ERROR: ambiguous
//     d.x = 10; // Alternative Fix
//     return 0;
// }