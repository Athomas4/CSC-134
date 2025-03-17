//CSC-134
//Module 3 Homework
//Andrae Thomas
//3-16-2025

#include <iostream>
using namespace std;

int main()
{
        int number = 0;
        while (number < 5)
{
        cout << "Hello\n";
        number++;
}
        cout << "That's all!\n";

{
        const int MIN_NUMBER = 1, MAX_NUMBER = 10;
        int num = MIN_NUMBER;
    
        cout << "Number\tNumber Squared\n";
        cout << "-----------------------\n";
    
        while (num <= MAX_NUMBER) 
        {
            cout << num << "\t\t" << (num * num) << endl;
            num++;
        }
    
        return 0;
    }}