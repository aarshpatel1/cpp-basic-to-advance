#include <bits/stdc++.h>
using namespace std;

// int main() {
//     vector<int> marks = {72, 95, 61, 88};

//     marks.push_back(79); // grows automatically

//     sort(marks.begin(), marks.end()); // ready-made sort

//     cout << "Highest: " << marks.back() << endl; // 95
//     cout << (binary_search(marks.begin(), marks.end(), 88) ? "found"
//                                                            : "absent");
// }

// class hashtable {
//     int *data;
//     int size;

//   public:
//     hashtable(int s) {
//         size = s;
//         data = new int[size];
//         for (int i = 0; i < size; i++) {
//             data[i] = -1111;
//         }
//     }
//     int hashing(int key) { return (key % size); }
//     void insert(int key) {
//         int index = hashing(key);
//         while (data[index] != -1111) {
//             index = (index + 1) % size;
//         }
//         data[index] = key;
//     }
//     void search(int key) {
//         int index = hashing(key);
//         int temp = index;
//         while (data[index] != -1111) {
//             if (data[index] == key) {
//                 cout << "element " << key << " found " << endl;
//                 return;
//             }
//             index = (index + 1) % size;
//             if (temp == index) {
//                 break;
//             }
//         }
//         cout << "Element " << key << " not found " << endl;
//     }
//     void display() {
//         for (int i = 0; i < size; i++) {
//             cout << "element at index " << i << " is " << data[i] << endl;
//         }
//     }
// };

// int main() {
//     hashtable h1(10);

//     h1.insert(15);
//     h1.insert(25);
//     h1.insert(35);
//     h1.insert(36);
//     h1.display();
//     h1.search(46);
//     h1.search(36);
//     return 0;
// }

int main() {
    // list<int> numbers = {10, 20, 30, 40, 50};
    // for (auto &i : numbers) {
    //     cout << i << " ";
    // }
    set<int> s = {30, 10, 20, 40};
    // set<int>::iterator it;
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    return 0;
}