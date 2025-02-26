//CSC-134
//Module 3 Lab 2
//Andrae Thomas
//2-23-2025

#include <iostream>
using namespace std;

int main() {
    string letter_grade;
    int num_grade;
    const int A_plus= 100;
    const int A=90;
    const int B=80;
    const int C=70;
    const int D=60;
    const int F=0;

cout << "Number grade to letter conversion program." << endl;
cout << "Enter the number grade." << endl;
cin >> num_grade;
    if (num_grade >= A_plus) {
        letter_grade = "A+";
    }
    if (num_grade >= A && num_grade < A_plus) {
        letter_grade = "A";
    }
    if (num_grade >= B && num_grade < A) {
        letter_grade = "B";
    }
    if (num_grade >= C && num_grade < B) {
        letter_grade = "C";
    }
    if (num_grade >= D && num_grade < C) {
        letter_grade = "D";
    }
    if (num_grade >= F && num_grade < D) {
        letter_grade = "F";
    }
cout << "This grade is " << num_grade << " you've got a " << letter_grade << "." << endl;
    


}
