// CSC-134
// M3LAB2
// 03/02/2026
// Haylee Paredes

// Number to Letter Grade Converter

#include <iostream>
using namespace std;

int main() {
    // Welcome message
    cout << "Welcome to Number to Letter Grade Converter!" << endl;

    // Variables
    int numGrade;

    // Ask user for # grade
    cout << "\nPlease enter a numeric grade from 0 to 100: ";
    cin >> numGrade;

    // Convert # grade to letter grade
    // Note: I am very particular about the formatting of the output, so I added spaces and new lines cuz I find it looks cleaner and more readable.
    if (numGrade >= 90 && numGrade <= 100) {
        cout << "\nYour letter grade is an A." << endl;
    }
    else if (numGrade >= 80 && numGrade <= 89) {
        cout << "\nYour letter grade is a B." << endl;
    }
    else if (numGrade >= 70 && numGrade <= 79) {
        cout << "\nYour letter grade is a C." << endl;
    }
    else if (numGrade >= 60 && numGrade <= 69) {
        cout << "\nYour letter grade is a D." << endl;
    }
    else if (numGrade >= 0 && numGrade <= 59) {
        cout << "\nYour letter grade is an F." << endl;
    }
    // Note: So I added this for instances like if the user enters a negative number as input. I usually ask AI to make sure I did all of the requirements of an assignment just in case I miss something but when I did that the AI said that I didn't need this. Is this something I should have put in here? 
    // Note: Also, This does not work with words just numbers. For instance, if I entered "seven" it wouldn't show this message but instead show "Your letter grade is an F." I do not know how to fix that but I just wanted to point it out.
    else {
        cout << "\nYou've entered an invalid grade." << endl;
    }

    // Thank user & end program
    cout << "\nThank you for using the Number to Letter Grade Converter! Goodbye!" << endl;
    return 0;
}