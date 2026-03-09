// CSC 134
// M3HW1 - Gold
// Haylee Paredes
// 03/09/2026

#include <iostream>
#include <iomanip>
using namespace std;

// Declare if more functions
void quest1();
//void quest2();
//void quest3();
//void quest4();

int main() {
    int choice;
    // TODO: add comment here
    bool keep_going = true;
    
    while (true == keep_going) {
        cout << "M3HW - Haylee Paredes" << endl;
        cout << "Let's Go For GOLD!" << endl;
        cout << "1. Question 1 - Chatbot" << endl;
        //cout << "2. Question 2 - Receipt Calculator" << endl;
        //cout << "3. Question 3 - Choose Your Own Adventure" << endl;
        //cout << "4. Question 4 - Math Practice" << endl;
        cout << "0. Exit" << endl;

        cin >> choice;
        if (1 == choice) {
            quest1();
        }
        else if (0 == choice) {
            cout << "Bye! Have a great day!" << endl;
            // Exit program
            keep_going = false;
        }
        else {
            cout << "Not a valid choice. Please choose a number from the menu." << endl;
        }
    }
    return 0;
}

quest1() {
    cout << "1. Question 1 - Chatbot" << endl;
    string chatInput;
    cout << "Hello, I’m a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;
    cin >> chatInput;

    if (yes == chatInput) {
        cout << "That’s great! I’m sure we’ll get along." << endl;
    }
    else if (no == chatInput) {
        cout << "Well, maybe you’ll learn to like me later." << endl;
    }
    else {
        cout << "If you’re not sure… that’s OK." << endl;
    }
}