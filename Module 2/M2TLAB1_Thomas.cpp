//CSC-134
//Andrae Thomas
//Module 2 Lab 1
//2-10-2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double COST_PER_CUBIC_FOOT=0.23;
    const double CHARGE_PER_CUBIC_FOOT=0.5;
    int length, width, height;
    int Volume;
    double cost, charge, profit;
    
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

cout<<"A crate that is " <<length<< " by " <<width<< " by " <<height<< endl;
cout<<"Crate Volume: " <<Volume<< endl;
cout<<"The Cost to make is: $"<<cost<<endl;
cout<<"The Customer charge is: $"<<charge<<endl;
cout<<"The profit is: $"<<profit<<endl;
}