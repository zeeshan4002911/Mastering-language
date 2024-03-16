#include<iostream>

using namespace std;

int main() {
    int a = 0;
    cout << "Pre Increment " << ++a << endl; // It will give incremented value
    cout << "After pre Increment " << a << endl;
    cout << "Post Increment " << a++ << endl; // It will give old value without increment
    cout << "After post Increment " << a << endl;

    cout << "-------------------------------\n";

    a = 5;
    cout << "Pre Decrement " << --a << endl; // It will give Decremented value
    cout << "After pre Decrement " << a << endl;
    cout << "Post Decrement " << a-- << endl; // It will give old value without Decrement
    cout << "After post Decrement " << a << endl;
    return 0;
}