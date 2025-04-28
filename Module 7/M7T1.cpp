//CSC-134
//Module 7 Tutorial 1
//Andrae Thomas
//4-28-2025

#include <iostream>
using namespace std;

// Use Restaurant class to store user ratings
class Restaurant {
  private:
    string name;    // the name
    double rating;  // 0 to 5 stars

  public:
	// constructor 
	Restaurant(string n, double r) {
		name = n;
		rating = r;
	}
    Restaurant() {

    }
	// getters and setters
    void setName(string n) {
        name = n; 
    }
    void setRating(double r) {
        rating = r;
    }
    string getName() const {
        return name;
    }
    double getRating() const {
        return rating;
    }
    void showInfo() {
        cout << "Restaurant Name: ";
        cout << this->name <<endl;
        cout << "Rating: ";
        cout << this->rating <<endl;
    }
  
};

int main() {
    cout << "M7T1 - Restaurant Reviews" << endl;
    Restaurant rest1=Restaurant("Mi Casita", 3.5);
    Restaurant rest2=Restaurant();
    cout << "Enter restaurant name: ";
    string name;
    cin.ignore();
    getline(cin, name);
    rest2.setName(name);
    cout << "Enter restaurant rating: ";
    double rating;
    cin >> rating;
    rest2.setRating(rating);

    rest1.showInfo();
    return 0;

}