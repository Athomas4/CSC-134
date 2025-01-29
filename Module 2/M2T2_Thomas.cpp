//CSC-134
//Andrae Thomas
//Module 2 Tutorial 2
//1-29-2025

//This is an adjustment to the M2T1 File to dinclude taxes

#include <iostream>
using namespace std;

int main() {
    string name = "Thomas";
    int num_apples = 101; //int means whole numbers such as 1, 2, 12353, etc.
    double cost_each = 1.25; //Double relates to decimal values, such as twenty five cents, 0.25
    double tax_rate = 0.08;
    double tax_total;
    //indicate how to calculate tax_total

    string user_name;
    int apples_to_buy;
    double total_cost;
    double total;

    cout << "Hello, what is your name? ";
    cin >> user_name;
    cout << "Welcome to the " <<name<< " apple farm" <<endl;
    cout << "There are " <<num_apples<< " apples in stock." <<endl;
    cout << "They cost $" <<cost_each<< " each." <<endl;
    cout << "How many apples would you like, " <<user_name<< "?" <<endl;
    
    cin >> apples_to_buy;
    total_cost = apples_to_buy*cost_each;
     tax_total = total_cost*tax_rate;
     total = tax_total + total_cost;
    cout << "with $0.08 tax that will be $" <<total<< " Enjoy your " <<apples_to_buy<< " apples!" <<endl;
    cout << endl;
    return 0;}