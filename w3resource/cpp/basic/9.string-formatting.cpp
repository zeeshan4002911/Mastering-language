#include <iostream> // Including the input-output stream header file
#include <iomanip>  // Including the header file for formatted I/O

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    cout << "\n\n Formatting the output :\n"; // Outputting a message to indicate formatted output
	cout << "----------------------------\n"; // Outputting a separator line

    double pi = 3.14159265; // Initializing a double variable 'pi' with the value of pi
    cout << fixed << setprecision(4); // Setting the output format to fixed with 4 decimal places
    cout <<" The value of pi : " << pi << endl; // Displaying 'pi' with 4 decimal places

    cout << " The value of pi 4 decimal place of total width 8   : |" << setw(8) << pi << "|" << endl; // Displaying 'pi' with 4 decimal places and a width of 8
    cout << " The value of pi 4 decimal place of total width 10  : |" << setw(10) << pi << "|"<< endl; // Displaying 'pi' with 4 decimal places and a width of 10

    cout << setfill('-'); // Setting the fill character to '-'
    cout << " The value of pi 4 decimal place of total width 8   : |" << setw(8) << pi << "|" << endl; // Displaying 'pi' with 4 decimal places and a width of 8, filled with '-'
    cout << " The value of pi 4 decimal place of total width 10  : |" << setw(10) << pi << "|"<< endl; // Displaying 'pi' with 4 decimal places and a width of 10, filled with '-'

    cout << scientific;  // Setting the output format to scientific notation
    cout <<" The value of pi in scientific format is : " << pi << endl; // Displaying 'pi' in scientific notation

    bool done = false; // Initializing a boolean variable 'done' with the value false
    cout <<" Status in number : " << done << endl;  // Displaying the boolean variable 'done' as a number (0 for false, 1 for true)

    cout << boolalpha; // Setting the output format to display true or false as words
    cout <<" Status in alphabet : " << done << endl; // Displaying the boolean variable 'done' as true or false

    cout << endl; // Outputting a blank line for better readability
    return 0; // Returning 0 to indicate successful program execution
} // End of the main function