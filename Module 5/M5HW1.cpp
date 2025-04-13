//CSC-134
//Module 5 Homework
//Andrae Thomas
//4-13-2025
//Bronze

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string month1, month2, month3;
    double rain1, rain2, rain3;

    // Input for first month
    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rain1;

    // Input for second month
    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rain2;

    // Input for third month
    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rain3;

    // Calculate average
    double average = (rain1 + rain2 + rain3) / 3.0;

    // Output with precision
    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << month1 << ", " << month2
         << ", and " << month3 << " is " << average << " inches." << endl;

         
    double width, length, height;

    cout <<"Question 2\n";

    cout << "Enter width of the block: ";
    cin >> width;
    while (width <= 0) {
        cout << "Width must be greater than 0. Please enter again: ";
        cin >> width;
    }

    cout << "Enter length of the block: ";
    cin >> length;
    while (length <= 0) {
        cout << "Length must be greater than 0. Please enter again: ";
        cin >> length;
    }

    cout << "Enter height of the block: ";
    cin >> height;
    while (height <= 0) {
        cout << "Height must be greater than 0. Please enter again: ";
        cin >> height;
    }

    // Calculate volume
    double volume = width * length * height;

    // Display result
    cout << "The volume of the block is " << volume << " cubic units." << endl;

    int number;

    cout << "Question 3\n";
    cout << "Enter a number between 1 and 10: ";
    cin >> number;

    // Input validation
    while (number < 1 || number > 10) {
        cout << "Invalid input. Please enter a number between 1 and 10: ";
        cin >> number;
    }

    // Display Roman numeral using switch
    cout << "The Roman numeral version of " << number << " is ";

    switch (number) {
        case 1: cout << "I"; break;
        case 2: cout << "II"; break;
        case 3: cout << "III"; break;
        case 4: cout << "IV"; break;
        case 5: cout << "V"; break;
        case 6: cout << "VI"; break;
        case 7: cout << "VII"; break;
        case 8: cout << "VIII"; break;
        case 9: cout << "IX"; break;
        case 10: cout << "X"; break;
    }

    cout << "." << endl;
    return 0;
}