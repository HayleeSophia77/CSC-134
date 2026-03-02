// CSC-134
// M3LAB2
// 03/02/2026
// Haylee Paredes

#include <iostream>
using namespace std;

int main() {
    // Welcome message
    cout << "Welcome to Number to Letter Grade Converter!" << endl;

    // Variables
    int numGrade;

    // Ask user for # grade
    cout << "\nPlease enter a numeric grade from 0 to 100: " << endl;
    cin >> numGrade;

    // Convert # grade to letter grade
    // Note: I am very particular about the formatting of the output, so I added spaces and new lines cuz I find it looks cleaner and more readable.
    if (numGrade >= 90 && numGrade <= 100) {
        cout << "\nYour grade is an A." << endl;
    }
    else if (numGrade >= 80 && numGrade < 89) {
        cout << "\nYour grade is a B." << endl;
    }
    else if (numGrade >= 70 && numGrade < 79) {
        cout << "\nYour grade is a C." << endl;
    }
    else if (numGrade >= 60 && numGrade < 69) {
        cout << "\nYour grade is a D." << endl;
    }
    else if (numGrade >= 0 && numGrade < 59) {
        cout << "\nYour grade is an F." << endl;
    }
    else {
        cout << "\nYou've entered an invalid grade." << endl;
    }

    // Thank user & end program
    cout << "\nThank you for using the Number to Letter Grade Converter! Goodbye!" << endl;
    return 0;
}