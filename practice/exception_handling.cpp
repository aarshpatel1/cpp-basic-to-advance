#include <bits/stdc++.h>
using namespace std;

int main() {

    try {
        cout << "hello world" << endl;
        // throw;
        // throw "error";
        // throw runtime_error("it is runtime error");
        throw 123;
    } catch (const exception &e) {
        cerr << e.what() << '\n';
    } catch (...) {
        cout << "Something wrong..";
    }

    return 0;
}