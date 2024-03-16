#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the First Number: " << endl;
    cin >> num1;
    cout << "Enter the Second Number" << endl;
    cin >> num2;

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout << "After Swapping, First Number " << num1 << endl;
    cout << "After Swapping, Second Number " << num2 << endl;
    return 0;
}