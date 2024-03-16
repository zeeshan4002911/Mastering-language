#include <iostream>
using namespace std;

int main()
{
    int option;
    do {
        cout << "Select the type of conversion(1/2)\n";
        cout << "\t1. Fahrenheit to Celsius \n";
        cout << "\t2. Celsius to Fahrenheit\n";
        cin >> option;
    } while (isdigit(option) && option != 1 && option != 2);
    
    double F, C;
    switch (option)
    {
    case 1:
        cout << "Enter the Fahrenheit Temperature: \n";
        cin >> F;
        C = ((F - 32) * 5) / 9;
        cout << "Temperature in Celsius: " << C;
        break;
    case 2:
        cout << "Enter the Celsius Temperature: \n";
        cin >> C;
        F = ((9 * C) / 5) + 32;
        cout << "Temperature in Fahrenheit " << F;
        break;
    default:
        break;
    }
    return 0;
}