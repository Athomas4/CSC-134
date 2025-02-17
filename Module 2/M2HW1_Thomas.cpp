//CSC-134
//Module 2 Homework 1 - Silver
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
    cout <<"Total Balance:              $"<<Total_Balance<< endl;


    const double COST_PER_CUBIC_FOOT=0.3;
    const double CHARGE_PER_CUBIC_FOOT=0.52;
    int length, width, height;
    int Volume;
    double cost, charge, profit;
   
cout<<"Question 2"<< endl;
cout<<"Crate Dos"<< endl;
cout<<"What are the dimensions of the crate? "<< endl;
cout<<"Length? ";
cin>>length;
cout<<"Width? ";
cin>>width;
cout<<"Height? ";
cin>>height;

    Volume=length*width*height;
    cost=COST_PER_CUBIC_FOOT*Volume;
    charge=CHARGE_PER_CUBIC_FOOT*Volume;
    profit=charge-cost;

cout<<setprecision(2)<<fixed<<showpoint;
cout<<"A crate that is " <<length<< " by " <<width<< " by " <<height<< endl;
cout<<"Crate Volume: " <<Volume<< endl;
cout<<"The Cost to make is: $"<<cost<<endl;
cout<<"The Customer charge is: $"<<charge<<endl;
cout<<"The profit is: $"<<profit<<endl;

int slices, amount_pizza, visitors;
double Left_over, number_slices;

cout<<"Question 3"<< endl;
cout<<"How many pizza's would you like to order? ";
cin>>amount_pizza;
cout<<"How many slice's are there in each pizza? ";
cin>>slices;
cout<<"How many Visitors? ";
cin>>visitors;
cout<<endl;
number_slices = amount_pizza*slices;

cout<<"You have " <<number_slices<< " slices of pizza. ";

Left_over= number_slices / visitors*3;
cout<<endl;
cout<<"There are " <<Left_over<< " slices left over. ";
}