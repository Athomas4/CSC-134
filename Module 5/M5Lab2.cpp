//CSC-134
//Module 5 Lab 2
//Andrae Thomas
//4-02-2025

#include <iostream>
#include <string>
using namespace std;

// Calculate the Area of a Rectangle
// the getLength,
// getWidth, getArea, and displayData

double getlength();
double getwidth();
double getarea(double Length, double Width);
void displayData(double Length, double Width, double Area);

int main () {
    
    double Length, Width, Area;

cout<<" This program is to calculate the Area of a rectangle.\n";
Length=getlength();
Width=getwidth();
Area=getarea(Length, Width);
displayData(Length, Width, Area);

return 0;
}
double getlength(){
    double Length;
    cout<<" Input the Length: ";
    cin>>Length;
return Length;
}
double getwidth(){
    double Width;
    cout<<" Input the Width: ";
    cin>>Width;
return Width;
}
double getarea(double Length, double Width) {
    double Area;
        Area=Width*Length;
return Area;
}
void displayData(double Length, double Width, double Area) {
    cout<<" The Length is: "<< Length << endl;
    cout<<" The Width is: "<< Width << endl;
    cout<<" The Area is: "<< Area << endl;
return;
}

