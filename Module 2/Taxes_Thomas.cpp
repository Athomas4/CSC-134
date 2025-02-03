//Trying to create accurate tax program
#include <iostream>
#include <iomanip> //allows for decimal notation
using namespace std;

int main() {
    double food_price = 5.99;
    string store_name = " T Corp.";
    string food_name = "burger";

    cout << "Welcome to" <<store_name<< endl;
    cout << "You have one " <<food_name;
    cout << " that is $" <<food_price<< endl;

    double subtotal, total;
    subtotal = food_price;
    cout <<"Subtotal:$" << subtotal << endl;

    double tax_percent = 0.08;
    double tax_cost = tax_percent * subtotal;
    total = subtotal + tax_cost;
    
    cout << setprecision(2) << fixed;
    cout <<endl;
    cout <<"Your Receipt    "<< endl;
    cout <<"-----------------"<< endl;
    cout <<"Subtotal:   $"<<subtotal<< endl;
    cout <<"Tax:        $"<<tax_cost<< endl;
     cout<<"-----------------"<< endl;
    cout <<"Total:      $"<<total<< endl;

}
