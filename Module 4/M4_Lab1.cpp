//CSC-134
//Module 4 Lab 1
//Andrae Thomas
//3-17-2025

#include <iostream>
using namespace std;

int main() {

    string pixel = "😢";
    const int size = 5;
    const int Width = 5;
    const int height = 5;

    int count = 0;
    while (count < 5) {
        cout<< pixel;
        count++;
    }
    cout<<endl;
    count=0;
    do{
        cout<<pixel<<"🧠";
        count++;
    } while (count < 5);
    cout<<endl;
    cout<< pixel<< " printed horizontally (row)"<<endl;
    for (int i=0; i<size; i++) {
        cout<<pixel<<" ";
    }
    cout<<endl;
    cout<< pixel<< " printed vertically (column)"<<endl;
    for (int i=0; i<size; i++) {
        cout<<pixel<<endl;
    }
    cout<< endl<< " Printing a box " << Width << " by " <<height<< endl;

    for (int h=0; h<height; h++) {
        for (int w=0; w<Width; w++) {
            cout<<pixel<<" ";
        }
        cout<<endl;
    }
}