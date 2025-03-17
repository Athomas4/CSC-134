//CSC-134
//Module 3 Homework
//Andrae Thomas
//3-2-2025
#include <iostream>
using namespace std;

void question1();
void question2();
int main() {
    cout<< "Example of Homework\n";
    cout<<"1. Question 1\n";
    cout<<"2. Question 2\n";
    cout<<"0 Exit\n";
    int choice;
    cin >> choice;
        if (1==choice) {
            question1();
        }
        else if (2==choice){
                question2();
        }
        else if (0==choice){
                cout<< "Goodbye\n";
        }
        else {
                cout<<"Not a Valid option.\n";
        }
    question1();
    question2();
    return 0; 
}
void question1(){
    cout<< "Question 1 goes here\n";
}
void question2() {
    int age = 30;
    cout<<"Question 2 goes here\n"; 
}