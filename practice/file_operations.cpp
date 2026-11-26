#include <fstream>
#include <iostream>
using namespace std;

int main() {
    // ofstream fout("F:\\Coding\\cpp-basic-to-advance\\practice\\student.txt");
    // fout << "Jai Swaminarayan" << endl;
    // fout << 101 << endl;
    // fout << 85.5 << endl;
    // fout.close();
    // cout << "Data written successfully.";

    ifstream fin("F:\\Coding\\cpp-basic-to-advance\\practice\\student.txt");
    if (!fin.is_open()) {
        cout << "Error opening file!";
        return 1;
    }
    string name;
    getline(fin, name);
    cout << "Name: " << name << endl;

    int rollNo;
    float marks;
    fin >> name;
    fin >> rollNo;
    fin >> marks;
    cout << "Roll No: " << rollNo << endl;
    cout << "Marks: " << marks << endl;
    fin.close();

    // int number = 100;
    // ofstream fout("F:\\Coding\\cpp-basic-to-advance\\practice\\number.dat",
    //               ios::binary);
    // fout.write(reinterpret_cast<const char *>(&number), sizeof(number));
    // fout.close();

    // ifstream fin("F:\\Coding\\cpp-basic-to-advance\\practice\\student.txt");
    // string word;
    // while (fin >> word) {
    //     cout << word << endl;
    // }
    // string line;
    // while (getline(fin, line)) {
    //     cout << line << endl;
    // }
    // char ch;
    // while (fin.get(ch)) {
    //     cout << ch;
    // }
    // fin.close();

    // int number = 100;
    // ofstream fout("F:\\Coding\\cpp-basic-to-advance\\practice\\number.dat",
    //               ios::binary);
    // if (!fout) {
    //     cout << "File opening failed!";
    //     return 1;
    // }
    // fout.write(reinterpret_cast<const char *>(&number), sizeof(number));
    // cout << "Binary data written successfully.";

    // ifstream fin("F:\\Coding\\cpp-basic-to-advance\\practice\\number.dat",
    //              ios::binary);
    // if (!fin) {
    //     cout << "File opening failed!";
    //     return 1;
    // }
    // fin.read(reinterpret_cast<char *>(&number), sizeof(number));
    // if (fin) {
    //     cout << "Number = " << number << endl;
    // } else {
    //     cout << "Error reading binary file!";
    // }
    // fin.close();

    // fstream file;
    // // Open file for reading and writing
    // file.open("F:\\Coding\\cpp-basic-to-advance\\practice\\student.txt",
    //           ios::in | ios::out);
    // if (!file) {
    //     cout << "Unable to open file!";
    //     return 1;
    // }

    // file << "C++ File Handling"; // write data

    // file.seekg(0, ios::beg); // move the file pointer to the beginning

    // string text; // read data
    // getline(file, text);
    // cout << "File content: " << text << endl;

    // file.close(); 

    return 0;
}

