//CSC-134
//Module 3 Tutorial 2
//Andrae Thomas
//2-23-2025

#include <iostream>
using namespace std;

int main() {

    int width_one, length_one, width_two, length_two;
    int area_one, area_two;

    cout<< "What is the length and width of the first rectangle? Seperate the entries with a space."<< endl;
    cin>> width_one >> length_one;

    area_one = width_one * length_one;

    cout<< "What is the length and width of the first rectangle? Seperate the entries with a space."<< endl;
    cin>> width_two >> length_two;

    area_two = width_two * length_two;

    cout<< "The first rectangle has an area of " <<area_one<< endl;
    cout<< "The second rectangle has an area of " <<area_two<< endl;
    
    if (area_one > area_two) {
        cout<< "Reactangle One is bigger." <<endl;
    }
    if (area_one == area_two){
        cout<< "The rectangles are the same size." <<endl;
    }
    if (area_one < area_two){
        cout<< "Reactangle Two is bigger." <<endl;
    }

}
