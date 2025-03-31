//CSC-134
//Module 4 Homework
//Andrae Thomas
//3-30-2025

#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
    double num, multiplier;
    
    while (true) {
        cout << "What number are we multiplying? ";
        cin >> num;
        
        if (cin.fail() || num < 1 || num > 12) {
            cin.clear(); // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a number between 1 and 12.\n";
        } else {
            break;
        }
    }
    
    while (true) {
        cout << "What is the second number? ";
        cin >> multiplier;
        
        if (cin.fail() || multiplier < 1 || multiplier > 12) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number between 1 and 12.\n";
        } else {
            break;
        }
    }
    
    double result = num * multiplier;
    
    cout << num << " times " << multiplier << " is " << result << endl;
    
    return 0;
}
