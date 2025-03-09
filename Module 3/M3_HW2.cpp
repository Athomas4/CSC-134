//CSC-134
//Module 3 Homework
//Andrae Thomas
//3-9-2025
//Bronze

#include <iostream>
#include <string>  // For handling string input
using namespace std;

int main() {
    string choice;  // Declare choice as a string to handle text input
    cout<<"Question 1\n";
    cout << "Hello, Do you like tangerines?\n";
    cout << "Please type yes or no\n";
    cin >> choice;


    if (choice == "yes" || choice == "Yes") {
        cout << "Great! Tangerines are tasty!\n";
    }
    else if (choice == "no" || choice == "No") {
        cout << "Tangerines are delicious, you should give them another chance!\n";
    }
    else {
        cout << "I didn't quite get that, Please type 'yes' or 'no'.\n";
    }

    cout<<"Question 2\n";
    string store_name = "T Corp.";
    double food_price;
    string food_name = "burger";

    cout << "Welcome to " << store_name << endl;
    cout << "Please enter the price of your meal $";
    cin >> food_price;

    int order_type;
    cout << "Please enter 1 if the order is dine-in or 2 if it is takeaway\n";
    cin >> order_type;

    double subtotal = food_price;
    double tax_percent = 0.08;
    double tax_cost = tax_percent * subtotal;

    double tip = 0.0;
    if (order_type == 1) {
        tip = 0.15 * subtotal;
    }

    double total = subtotal + tax_cost + tip;


    cout << endl;
    cout << "Your Receipt" << endl;
    cout << "------------------" << endl;
    cout << "Meal:        $" << subtotal << endl;
    cout << "Tax:         $" << tax_cost << endl;

    if (order_type == 1) {
        cout << "Tip:         $" << tip << endl;
    }

    cout << "------------------" << endl;
    cout << "Total:       $" << total << endl;

    return 0;
}