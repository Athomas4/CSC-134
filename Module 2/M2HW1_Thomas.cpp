//CSC-134
//Module 2 Homework 1 - Gold
//Andrae Thomas
//2-9-2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int account_number=36323451;
    string bank="Wells Fargo";
    string user_name;
    double Starting_Balance;
    double Deposit_amount;
    double Withdrawal_amount;
    double Total_Balance;

    cout << "Question 1"<< endl;
    cout << "Hello, what is your name? ";
    cin >> user_name;
    cout << "What is your balance? ";
    cin >>Starting_Balance;
    cout << "How much would you like to deposit? ";
    cin >>Deposit_amount;
    cout << "How much would you like to withdraw? ";
    cin >>Withdrawal_amount;
        Total_Balance = Starting_Balance+Deposit_amount-Withdrawal_amount;
    cout <<endl;
    cout <<user_name<< endl;
    cout <<"-------------------------------"<< endl;
    cout <<"Thank you for using "<<bank<< endl;
    cout <<"Account Number:        "<<account_number<< endl;
    cout<<"-------------------------------"<< endl;
    cout <<"Total Balance:                 $"<<Total_Balance<< endl;

}

