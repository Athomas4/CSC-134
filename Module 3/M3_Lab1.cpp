//CSC-134
//Module 3 Lab 1
//Andrae Thomas
//3-2-2025

#include <iostream>
using namespace std;

int main() {
    double money;

    cout << "Welcome to the Great Gambling Simulation! Think you can win? " <<endl;
    cout << "How much are you going to bet? $";
    cin >> money;

    if (money <= 0) {
        cout << "Stop trying to cheat the system! You gotta bet something!" << endl;
        return 1;
    }

    int choice;

    cout <<"You've been gambling for a little while but now is the decisive choice, You wanna go all in or cash out?" << endl;
    cout << "Enter 1 for 'Go All In' or 2 for 'Cash Out': " <<endl;
    cin >> choice;

    
    if (choice == 1) {
        money *= 2;
        cout << "You went All In! Your bold play has played out amazingly! You won $" << money << endl;
    } else if (choice == 2) {
        money *= 1.10;
        cout << "You cashed out! You won $" << money << "!" << endl;
    } else {
        cout << "Hey man, pick a valid choice!" << endl;
        return 1;
    }

    return 0;
}