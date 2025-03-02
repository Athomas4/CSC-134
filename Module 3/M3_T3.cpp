//CSC-134
//Module 3 Tutorial 1
//Andrae Thomas
//3-2-2025

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int SIDES = 20;
    
    srand(time(0));
    
    double money;
    
    cout << "Welcome to the Great Gambling Simulation! Think you can win? " <<endl;
    cout<<"The rules are simple, if you roll 4 or below you lose. If you roll 5 to 15 then we give you another chance! Finally, if you roll 16-20 then you win!" <<endl;
    cout << "How much are you going to bet? $";
    cin >> money;
    
    if (money <= 0) {
        cout << "Enter a number greater than 0 my friend." << endl;
        return 1;
    }

    int roll;

    while (true) {
        roll = (rand() % SIDES) + 1;
        
        cout << "You rolled a " << roll << ".\n";

        if (roll >= 5 && roll <= 15) {
            cout << "Time for a reroll!" << endl;
        }
        else if (roll >= 16 && roll <= 20) {
            cout << "You win!" << endl;
            money *= 2;
            cout << "You got a massive payout! You now have $" << money << endl;
            break;
        }
        else if (roll >= 1 && roll <= 4) {
            cout << "You lose! Better luck next time." << endl;
            money *= 0.5;
            cout << "An unfortunate outcome, you now have $" << money << endl;
            break;
        }
    }

    return 0;
}
