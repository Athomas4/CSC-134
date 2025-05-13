//CSC-134
//Module 7 Tutorial 1
//Andrae Thomas
//5-12-2025
//Silver

#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:
    void setLength(double);
    void setWidth(double);
    double getLength() const;
    double getWidth() const;
    double getArea() const;
};


void Rectangle::setLength(double len)
{
    length = len;
}

void Rectangle::setWidth(double w)
{
    width = w;
}

double Rectangle::getLength() const
{
    return length;
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getArea() const
{
    return length * width;
}

int main()
{
    Rectangle box;
    double boxLength;
    double boxWidth;

    cout << "Enter the length of the rectangle: ";
    cin >> boxLength;
    while (boxLength <= 0)
    {
        cout << "Length must be greater than 0. Please enter again: ";
        cin >> boxLength;
    }

    cout << "Enter the width of the rectangle: ";
    cin >> boxWidth;
    while (boxWidth <= 0)
    {
        cout << "Width must be greater than 0. Please enter again: ";
        cin >> boxWidth;
    }

    box.setLength(boxLength);
    box.setWidth(boxWidth);

    cout << "\nHere is the rectangle's data:\n";
    cout << "Length: " << box.getLength() << endl;
    cout << "Width: " << box.getWidth() << endl;
    cout << "Area: " << box.getArea() << endl;

    return 0;
}