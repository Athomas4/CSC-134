//CSC-134
//Module 6 Lab 1
//Andrae Thomas
//4-21-2025

#include <vector>
#include <iostream>
using namespace std;
int main() {

    const int RED = 1;
    const int BLACK = 2;
    const int EMPTY = 0;
    const int SIZE = 6;
    int magazine[] = {BLACK, RED, BLACK, BLACK, RED, BLACK};
    for (int i=0; i<SIZE; i++) {
        string shellname;
        if (magazine[i] == BLACK) {
            shellname = "Black";
        }
        if (magazine[i] == RED) {
            shellname = "Red";
        }
        cout << "Next shell: " << shellname <<endl;
    }
    vector<int> mag;
    mag.push_back(RED);
    mag.push_back(BLACK);
    mag.push_back(BLACK);
    mag.push_back(BLACK);
    int num_shells = 2;
    int current_shell = mag.at(num_shells-1);
    cout << "Next shell: " <<current_shell << endl;
    mag.pop_back();
    num_shells--;
    current_shell = mag.at(num_shells-1);
    mag.pop_back();
    cout << "Mag contains " <<mag.size() << " shells." <<endl;
    cout << "It could hold up to " << mag.capacity() << " before resizing. " <<endl;
    return 0;

}
