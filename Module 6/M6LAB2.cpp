//CSC-134
//Module 6 Lab 2
//Andrae Thomas
//4-27-2025

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

// Define constants for directions
enum Direction {
    UP = 0,
    RIGHT = 1,
    DOWN = 2,
    LEFT = 3,
    NUM_DIRECTIONS = 4
};

// Direction names for output
const string DIRECTION_NAMES[NUM_DIRECTIONS] = {
    "up", "right", "down", "left"
};

// Define constants for rooms
enum Room {
    DOCKING_BAY = 0,
    COMMAND_CENTER = 1,
    CREW_QUARTERS = 2,
    ENGINE_ROOM = 3,
    OBSERVATION_DECK = 4,
    NUM_ROOMS = 5
};

int main() {
    // Room names
    string roomNames[NUM_ROOMS] = {
        "Docking Bay",
        "Command Center",
        "Crew Quarters",
        "Engine Room",
        "Observation Deck"
    };

    // Room descriptions
    string roomDescriptions[NUM_ROOMS] = {
        "You stand in the Docking Bay. The airlock doors hum quietly behind you.",
        "Screens flash with warning lights in the Command Center.",
        "Bunks line the walls of the Crew Quarters. Everything looks recently abandoned.",
        "The Engine Room vibrates softly as the core pulses with energy.",
        "Stars stretch endlessly beyond the glass in the Observation Deck."
    };

    // Connections between rooms
    int connections[NUM_ROOMS][NUM_DIRECTIONS];

    // Initialize all to -1 (no connection)
    for (int i = 0; i < NUM_ROOMS; i++) {
        for (int j = 0; j < NUM_DIRECTIONS; j++) {
            connections[i][j] = -1;
        }
    }

    // Define the paths
    connections[DOCKING_BAY][UP] = COMMAND_CENTER;
    connections[DOCKING_BAY][RIGHT] = CREW_QUARTERS;
    connections[DOCKING_BAY][LEFT] = ENGINE_ROOM;

    connections[COMMAND_CENTER][DOWN] = DOCKING_BAY;

    connections[CREW_QUARTERS][LEFT] = DOCKING_BAY;
    connections[CREW_QUARTERS][DOWN] = OBSERVATION_DECK;

    connections[ENGINE_ROOM][RIGHT] = DOCKING_BAY;

    connections[OBSERVATION_DECK][UP] = CREW_QUARTERS;

    // Game state
    int currentRoom = DOCKING_BAY;
    bool playing = true;

    // Game loop
    while (playing) {
        cout << "\nYou are at the " << roomNames[currentRoom] << "." << endl;
        cout << roomDescriptions[currentRoom] << endl;

        // Show available exits
        cout << "Exits: ";
        bool foundExit = false;
        for (int dir = 0; dir < NUM_DIRECTIONS; dir++) {
            if (connections[currentRoom][dir] != -1) {
                cout << DIRECTION_NAMES[dir] << " ";
                foundExit = true;
            }
        }
        if (!foundExit) {
            cout << "none";
        }
        cout << endl;

        // Player input
        string input;
        cout << "\nWhat do you want to do? ";
        cin >> input;

        // Process input
        if (input == "up" || input == "u") {
            if (connections[currentRoom][UP] != -1) {
                currentRoom = connections[currentRoom][UP];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (input == "right" || input == "r") {
            if (connections[currentRoom][RIGHT] != -1) {
                currentRoom = connections[currentRoom][RIGHT];
            } else {
                cout << "No passage that way." << endl;
            }
        } else if (input == "down" || input == "d") {
            if (connections[currentRoom][DOWN] != -1) {
                currentRoom = connections[currentRoom][DOWN];
            } else {
                cout << "No path there." << endl;
            }
        } else if (input == "left" || input == "l") {
            if (connections[currentRoom][LEFT] != -1) {
                currentRoom = connections[currentRoom][LEFT];
            } else {
                cout << "Can't move that direction." << endl;
            }
        } else if (input == "quit" || input == "q") {
            playing = false;
        } else {
            cout << "Command not recognized." << endl;
        }
    }

    cout << "Mission terminated. Goodbye, astronaut." << endl;
    return 0;
}