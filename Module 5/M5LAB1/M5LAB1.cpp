/*
CSC 134
M5LAB1 - Choose Your Own Adventure
3/31/24
Haylee Paredes

This template serves as a starting point for your own program. We'll be using void functions to tell a simple story, where the user gets to make choices.

You can fork this template by clicking on the name above, then click the three
dots on the top right, and click 'fork repl'. This makes a copy for you to use.
*/

#include <iostream>
using namespace std;

// Function Prototypes. Any functions you make will need to be listed here, in this format, at the top.
// This is so the compiler knows to save room for them in the final program.
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_in_house();

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door." << endl;
  cout << "2. Sneak around back." << endl;
  cout << "3. Forget it, and go home." << endl;
  cout << "4. Quit" << endl;
  cout << "Choose: ";

  int choice;
  cin >> choice;

  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    choice_back_door();
  } else if (3 == choice) {
    choice_go_home();
  } else if (4 == choice) {
    cout << "Ok, quitting game." << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but now we have to actually write the functions. They go here, after main().
void choice_front_door() {
  cout << "Try the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back." << endl;
  cout << "2. Give up and go home." << endl;

  int choice;
  cout << "Choose: ";
  cin >> choice;

  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  }
}

void choice_back_door() { 
    cout << "You sneak around back." << endl; 
    cout << "The back door is open by a crack. A dim light flickers inside." << endl;
    cout << "Do you:" << endl;
    cout << "1. Push it open and go inside." << endl;
    cout << "2. Run out from the back of the house and go home." << endl;

    int choice;
    cout << "Choose: ";
    cin >> choice;

    if (1 == choice) {
        choice_in_house();
    } else if (2 == choice) {
        choice_go_home();
    }
}

void choice_go_home() { 
    cout << "You decide the spooky old house isn't worth it." << endl; 
    cout << "As you turn away, the lights in the house flicker once then go dark." << endl;
    cout << "Without noticing the strange occurrence, you walk back down the path, hands in your pockets." << endl;
    cout << "-- THE END --" << endl; 
}

void choice_in_house() {
    cout << "You push the door open and step inside." << endl;
    cout << "The room is dark and dusty. You can hear creaking sounds from the walls." << endl;
    cout << "Do you:" << endl;
    cout << "1. Explore the room." << endl;
    cout << "2. Leave and go home." << endl;

    int choice;
    cout << "Choose: ";
    cin >> choice;

    if (1 == choice) {
        cout << "In the corner, you see a glowing object on a dusty table." << endl;
        cout << "Do you:" << endl;
        cout << "1. Pick it up and inspect it." << endl;
        cout << "2. Nope. Absolutely not, time to go home." << endl;

        int choice2;
        cout << "Choose: ";
        cin >> choice2;

        if (1 == choice2) {
            cout << "You pick up the glowing object. It pulses with a warm light." << endl;
            cout << "It's an old lantern and it seems to be still warm!" << endl;
            cout << "You tuck the lantern under your arm and walk back out into the night." << endl;
            cout << "-- THE END --" << endl;
        } else if (2 == choice2) {
            choice_go_home();
        }

    } else if (2 == choice) {
        choice_go_home();
    }
}