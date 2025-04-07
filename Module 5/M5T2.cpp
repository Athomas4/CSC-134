//CSC-134
//Module 5 Tutorial 2
//Andrae Thomas
//4-6-2025

#include <iostream>

int square(int num);
void printAnswerLine(int num);

int main() {
    std::cout << "Number\tSquare\n";
    std::cout << "---------------\n";

    for (int i = 1; i <= 10; ++i) {
        printAnswerLine(i);
    }

    return 0;
}

int square(int num) {
    return num * num;
}

void printAnswerLine(int num) {
    std::cout << num << "\t" << square(num) << "\n";
}