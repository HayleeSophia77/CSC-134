// CSC-134
// M3LAB1
// 03/02/2026
// Haylee Paredes

#include <iostream>
using namespace std;

int main() {
    // Example 1: simple program.
    cout << "Hello World!" << endl;

    // Example 2: Ask user a question and respond to it. Should be able to run it and test it with different inputs.
    // NOTE: example test values: 1, 2, 3, banana

    // NOTE: Declare variable
    int choice;

    // NOTE: Ask user a question
    cout << "Do you choose door 1 or door 2?" << endl;
    cout << "Type 1 or 2: " << endl;
    cin >> choice;

    // NOTE: if statement = decision based on user input
    if (1 == choice) {
        cout << "You chose door 1." << endl;
    }
    else if (2 == choice) {
        cout << "You chose door 2." << endl;
    }
    else {
        cout << "I'm sorry, that is not a valid choice. Please choose door 1 or door 2." << endl;
    }

    // NOTE: end of program
    // NOTE: runs no matter what they choose
    cout << "Thank you for playing!" << endl;
    return 0;
} // NOTE: end of main() method

// Example 3: Define all other functions. 
// NOTE: Declaring = "this function exists"
// NOTE: Defining = "this is what the function does"

// NOTE: function is called if user chooses door 1
void chooseDoor1() {
    cout << "You chose door 1." << endl;
    cout << "You win ... a new car!" << endl;
}

// NOTE: function is called if user chooses door 2
void chooseDoor2() {
    cout << "You chose door 2." << endl;
    cout << "You win ... a bottle of floor wax." << endl;
}

// NOTE: if added door 3 or 4, we would add another else-if to our main(), and declare and define chooseDoor3() and so on. 