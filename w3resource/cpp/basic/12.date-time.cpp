#include <iostream> // Including input-output stream header file
#include <cmath>    // Including the header file for math functions
#include <ctime>    // Including the header file to work with date and time

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    time_t t = time(NULL);    // Declaring a time_t variable and assigning the current time to it
    tm *tPtr = localtime(&t); // Creating a pointer to a tm structure and obtaining the local time

    cout << "\n\n Display the Current Date and Time :\n"; // Outputting a message indicating the purpose of the program
    cout << "----------------------------------------\n"; // Outputting a separator line

    // Outputting different components of the current date and time
    cout << " seconds = " << (tPtr->tm_sec) << endl;            // Displaying seconds
    cout << " minutes = " << (tPtr->tm_min) << endl;            // Displaying minutes
    cout << " hours = " << (tPtr->tm_hour) << endl;             // Displaying hours
    cout << " day of month = " << (tPtr->tm_mday) << endl;      // Displaying day of the month
    cout << " month of year = " << (tPtr->tm_mon) + 1 << endl;  // Displaying month of the year
    cout << " year = " << (tPtr->tm_year) + 1900 << endl;       // Displaying year
    cout << " weekday = " << (tPtr->tm_wday) << endl;           // Displaying weekday
    cout << " day of year = " << (tPtr->tm_yday) << endl;       // Displaying day of the year
    cout << " daylight savings = " << (tPtr->tm_isdst) << endl; // Displaying daylight savings

    cout << endl; // Outputting empty lines for formatting

    // Displaying current date and time in a formatted manner
    cout << " Current Date: " << (tPtr->tm_mday) << "/" << (tPtr->tm_mon) + 1 << "/" << (tPtr->tm_year) + 1900 << endl; // Displaying the current date
    cout << " Current Time: " << (tPtr->tm_hour) << ":" << (tPtr->tm_min) << ":" << (tPtr->tm_sec) << endl;             // Displaying the current time

    cout << endl; // Outputting empty line for formatting

    return 0; // Returning 0 to indicate successful program execution
}