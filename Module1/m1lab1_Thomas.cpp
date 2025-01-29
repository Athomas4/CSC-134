//CSC-134
//Module 1 Tutorial 2
//Andrae Thomas
//1-27-2025

#include <iostream>
using namespace std;

int main() {
    string name = "Thomas";
    int num_apples = 101; //int means whole numbers such as 1, 2, 12353, etc.
    double cost_each = 1.25; //Double relates to decimal values, such as twenty five cents, 0.25

    cout << "Welcome to the " <<name<< " apple farm" <<endl;
    cout << "There are " <<num_apples<< " apples in stock." <<endl;
    cout << "They cost $" <<cost_each<< " each." <<endl;

    double total_cost=num_apples*cost_each;
    cout << "The price for all of them is: $" << total_cost << endl;

    cout << endl;
    return 0;
}
