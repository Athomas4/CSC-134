//CSC-134
//Module 6 Tutorial 1
//Andrae Thomas
//4-7-2025

#include <iostream>
#include <string>
using namespace std;

double NUM_CARS();
double TOT_CARS();
double AVG_CARS(double cars_total);

void test_function(int my_array[]) {
    cout << "Item 0 = " << my_array[0];
}

int main () {
    const int DAYS=5;
    int cars_today;
    int cars_total = 0;
    double cars_average;

    int cars[DAYS];
    cout <<"Enter the amount of cars that pass for each weekday. \n";
    for (int i=0; i<DAYS; i++) {
        cout<<"Day "<< i+1 << ": ";
        cin>> cars_today;
        cars[i] =cars_today;
        cars_total += cars_today;
    }
    cout << "Over " <<DAYS<< " DAYS, total cars = " << cars_total<< endl;
    cars_average = (double) cars_total/DAYS;
    cout <<"The average number of cars per day is "<<cars_average<<endl;

    for (int i=0; i<DAYS; i++) {
        cout << "Day:"<< i+1 << " Count: "<< cars[i] << endl;
    }
    // test passing an array
    test_function(cars);

    return 0;

}
