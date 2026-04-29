// CSC 134
// M6HW
// 04/29/2026
// Haylee Paredes

#include <iostream>
using namespace std;

void main_menu();
void choice_front_door();
void choice_backyard();
void choice_go_home();
void choice_in_house();
void choice_side_room();
void choice_kitchen();
void choice_cellar();
void choice_bad_ending();
void choice_good_ending();

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

// Main menu
void main_menu() {
    // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
    cout << "You wake up standing on a gravel path." << endl;
    cout << "The air is cold. Quiet." << endl;
    cout << "In front of you sits a house, old, dark, and completely still." << endl;
    cout << "You don't remember leaving your bed." << endl;
    cout << "You don't remember coming here." << endl;
    cout << "Your phone is in your hand." << endl;
    cout << "5% battery." << endl;
    cout << "The flashlight flickers weakly as you turn it on." << endl;
    cout << "For a moment, you get the strange feeling..." << endl;
    cout << "You didn't find this house." << endl;
    cout << "It wanted you here." << endl;
    cout << endl;
    cout << "Do you:" << endl;
    cout << "1. Try the front door." << endl;
    cout << "2. Go around back." << endl;
    cout << "3. Leave." << endl;
    cout << "4. Quit." << endl;
    cout << "Choose: ";
  
    int choice;
    cin >> choice;
  
    if (1 == choice) {
      choice_front_door();
    } else if (2 == choice) {
      choice_backyard();
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

  