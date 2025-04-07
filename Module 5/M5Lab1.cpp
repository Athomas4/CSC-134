//CSC-134
//Module 5 Lab 1
//Andrae Thomas
//4-06-2025

#include <iostream>
#include <string>

void choice_back_door();
void follow_whispers();
void turn_back();

void choice_go_home();
void go_watch_tv();
void take_a_nap();

void choice_explore();
void enter_basement();
void check_windows();

void choice_fresh_air();
void pick_flowers();
void lay_down();

// Main function
int main() {
    int choice = 0;

    while (true) {
        std::cout << "You are in an open field and there is an ominous house in front of you.\n";
        std::cout << "The house's front door is boarded up.\n";
        std::cout << "What do you do?\n";
        std::cout << "1. Go through the back door\n";
        std::cout << "2. Go home\n";
        std::cout << "3. Stay and explore\n";
        std::cout << "4. Sit outside and enjoy the fresh air\n";
        std::cout << "Please choose an option (1, 2, 3, or 4): ";
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Invalid input. Please enter a number between 1 and 4.\n";
            continue;
        }

        if (choice == 1) {
            choice_back_door();
            break;
        } else if (choice == 2) {
            choice_go_home();
            break;
        } else if (choice == 3) {
            choice_explore();
            break;
        } else if (choice == 4) {
            choice_fresh_air();
            break;
        } else {
            std::cout << "Invalid option. Please choose 1, 2, 3, or 4.\n";
        }
    }

    return 0;
}

// ----------- Branch Functions -----------

void choice_back_door() {
    int choice;
    std::cout << "\nYou open the back door and step into a dimly-lit kitchen.\n";
    std::cout << "You hear whispers coming from the hallway.\n";
    std::cout << "1. Follow the whispers\n";
    std::cout << "2. Turn back and leave the house\n";
    std::cout << "What do you do? ";
    std::cin >> choice;

    if (choice == 1) {
        follow_whispers();
    } else {
        turn_back();
    }
}

void follow_whispers() {
    std::cout << "\nYou follow the whispers and find a dusty old radio playing static.\n";
    std::cout << "Suddenly, a voice comes through: 'Welcome back... we've been waiting.'\n";
}

void turn_back() {
    std::cout << "\nYou turn back and exit the house safely, but you can't shake the feeling of being watched.\n";
}

// -------------------

void choice_go_home() {
    int choice;
    std::cout << "\nYou decide to head home and forget about the spooky house.\n";
    std::cout << "1. Watch TV\n";
    std::cout << "2. Take a nap\n";
    std::cout << "What do you do when you get home? ";
    std::cin >> choice;

    if (choice == 1) {
        go_watch_tv();
    } else {
        take_a_nap();
    }
}

void go_watch_tv() {
    std::cout << "\nYou watch a horror movie and wonder if it’s based on real events...\n";
}

void take_a_nap() {
    std::cout << "\nYou drift off into a peaceful sleep... or so you think. In your dream, the house returns.\n";
}

// -------------------

void choice_explore() {
    int choice;
    std::cout << "\nYou decide to explore the outside of the house.\n";
    std::cout << "1. Enter the basement through a broken window\n";
    std::cout << "2. Peek through the dusty windows\n";
    std::cout << "What do you do? ";
    std::cin >> choice;

    if (choice == 1) {
        enter_basement();
    } else {
        check_windows();
    }
}

void enter_basement() {
    std::cout << "\nYou climb into the cold, damp basement. Something scurries away in the dark.\n";
}

void check_windows() {
    std::cout << "\nYou wipe the dust from a window and see movement inside. A face stares back.\n";
}

// -------------------

void choice_fresh_air() {
    int choice;
    std::cout << "\nYou decide to relax and enjoy the peaceful surroundings.\n";
    std::cout << "1. Pick some flowers\n";
    std::cout << "2. Lay down in the grass\n";
    std::cout << "What do you do? ";
    std::cin >> choice;

    if (choice == 1) {
        pick_flowers();
    } else {
        lay_down();
    }
}

void pick_flowers() {
    std::cout << "\nYou pick a few wildflowers and notice one has a strange glowing center...\n";
}

void lay_down() {
    std::cout << "\nYou lay in the grass, looking up at the sky, and slowly drift into a dreamlike state.\n";
}