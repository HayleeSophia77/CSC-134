// CSC-134
// M3LAB1
// 03/02/2026
// Haylee Paredes

#include <iostream>
using namespace std;

// NOTE: declare if we have more functions than main()
// NOTE: these tell the program that these functions will exist but will be defined later
// void chooseDoor1();
// void chooseDoor2();

void chooseFF1();
void chooseFF2();

int main() {
    // Example 1: simple program.
    // cout << "Hello World!" << endl;

    cout << "Hello, welcome to Sanrio Fun Fact Picker!" << endl;

    // Example 2: Ask user a question and respond to it. Should be able to run it and test it with different inputs.
    // NOTE: example test values: 1, 2, 3, banana

    // NOTE: Declare variable
    int choice;

    // NOTE: Ask user a question
    // cout << "Do you choose door 1 or door 2?" << endl;

    cout << "\nDo you choose fun fact 1 or fun fact 2?" << endl;
    cout << "Type 1 or 2: ";
    cin >> choice;

    // NOTE: if statement = decision based on user input
    /*
    if (1 == choice) {
        chooseDoor1();
    }
    else if (2 == choice) {
        chooseDoor2();
    }
    else {
        cout << "I'm sorry, that is not a valid choice. Please choose door 1 or door 2." << endl;
    }
    */

    // I decided to do fun facts about Sanrio as my own version of the examples for M3LAB1.
    if (1 == choice) {
        chooseFF1();
    }
    else if (2 == choice) {
        chooseFF2();
    }
    else {
        cout << "I'm sorry, that is not a valid choice. Please choose fun fact 1 or fun fact 2." << endl;
    }

    // NOTE: end of program
    // NOTE: runs no matter what they choose
    cout << "\nThank you for playing!" << endl;
    return 0;
} // NOTE: end of main() method

// Example 3: Define all other functions. 
// NOTE: Declaring = "this function exists"
// NOTE: Defining = "this is what the function does"

// NOTE: function is called if user chooses door 1
/*
void chooseDoor1() {
    cout << "You chose door 1." << endl;
    cout << "You win ... a new car!" << endl;
}

// NOTE: function is called if user chooses door 2
void chooseDoor2() {
    cout << "You chose door 2." << endl;
    cout << "You win ... a bottle of floor wax." << endl;
}
*/

// Both fun facts come from a website called "Top Toy."
// The link to this website is: https://gotoptoy.com/blogs/news/8-surprising-facts-about-sanrio-characters?srsltid=AfmBOoqtViaARMxeOU8QQUrI_YS9wP9LhdcNnTGP1v4WcN0P-VxGq-NA.
// I picked fact #1 and #6 for this assignment. 
void chooseFF1() {
    cout << "\nYou chose fun fact 1!" << endl;
    cout << "Hello Kitty was not Sanrio’s first character. The honor goes to a bear named Coro-Chan!" << endl;
}

// NOTE: function is called if user chooses door 2
void chooseFF2() {
    cout << "\nYou chose fun fact 2!" << endl;
    cout << "Pochacco only celebrates his birthday every four years. Pochacco is a leap-year baby who was born on February 29, which means he only gets to celebrate his birthday once every four years!" << endl;
}

// NOTE: if added door 3 or 4, we would add another else-if to our main(), and declare and define chooseDoor3() and so on. 