//CSC-134
//Andrae Thomas
//Module 2 Tutorial 1
//1-29-2025
// Ask user for amount of apples wanted and only charge them for that amount, also ask for name
//This is an adjustment to the M1T1 File to do more intricate tasks
#include <iostream>
using namespace std;

int main() {
    string name = "Thomas";
    int num_apples = 101; //int means whole numbers such as 1, 2, 12353, etc.
    double cost_each = 1.25; //Double relates to decimal values, such as twenty five cents, 0.25
    string user_name;
    int apples_to_buy;

    cout << "Hello, what is your name? ";
    cin >> user_name;
    cout << "Welcome to the " <<name<< " apple farm" <<endl;
    cout << "There are " <<num_apples<< " apples in stock." <<endl;
    cout << "They cost $" <<cost_each<< " each." <<endl;
    cout << "How many apples would you like, " <<user_name<< "?" <<endl;
    
    cin >> apples_to_buy;
    cout << "That will be " <<apples_to_buy*cost_each<< "$, Enjoy your " <<apples_to_buy<< " apples!" <<endl;
    cout << endl;
    return 0;
}