//CSC-134
//Module 6 Lab 1
//Andrae Thomas
//4-21-2025

#include <vector>
#include <iostream>
uing namespace std;

    const int RED = 1;
    const int BLACK = 2;
    const int EMPTY = 0;

    int magazine = {BLACK, RED, EMPTY};
    for (int shell : magazine) {
        string shellname;
        if (shell == BLACK) {
            shellname = "Black";
        }
        if (shell == RED) {
            shellname = "Red";
        }
        cout << "Next shell: " << shellname <<endl;
    }
