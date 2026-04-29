// CSC 134
// M6HW
// 04/29/2026
// Haylee Paredes

#include <iostream>
using namespace std;
bool hasLantern = false;
bool hasKey = false;

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

  // Front door choice
  void choice_front_door() {
    cout << "You step up onto the porch." << endl;
    cout << "The wood creaks under your weight." << endl;
    cout << "You try the handle." << endl;
    cout << "Locked." << endl;
    cout << "It doesn't budge." << endl;
    cout << "You linger for a second longer than you should..." << endl;
    cout << "Then step back." << endl;
    cout << endl;
    cout << "Do you:" << endl;
    cout << "1. Go around back." << endl;
    cout << "2. Leave." << endl;
    cout << "3. Quit." << endl;
  
    int choice;
    cout << "Choose: ";
    cin >> choice;
  
    if (1 == choice) {
      choice_backyard();
    } else if (2 == choice) {
      choice_go_home();
    }else if (3 == choice) {
        cout << "Ok, quitting game." << endl;
        return;
    } else {
        cout << "That's not a valid choice, please try again." << endl;
        cin.ignore();
        choice_front_door();
    }
}

// Back door/backyard choice 
void choice_backyard() { 
    cout << "You make your way around the side of the house." << endl;
    cout << "The grass is overgrown." << endl;
    cout << "Something crunches under your shoe. You don't look down." << endl;
    cout << "The back door is slightly open." << endl;
    cout << "Just a crack." << endl;
    cout << "Off to the side, half-hidden in the ground:" << endl;
    cout << "A padlocked cellar door." << endl;
    cout << "Heavy. Rusted." << endl;
    cout << "Waiting." << endl;
    cout << endl;
    cout << "Do you:" << endl;
    cout << "1. Go inside the house." << endl;
    cout << "2. Leave." << endl;
    cout << "3. Quit." << endl;

    int choice;
    cout << "Choose: ";
    cin >> choice;

    if (1 == choice) {
        choice_in_house();
    } else if (2 == choice) {
        choice_go_home();
    } else if (3 == choice) {
        cout << "Ok, quitting game." << endl;
        return;
    } else {
        cout << "That's not a valid choice, please try again." << endl;
        cin.ignore();
        choice_backyard();
    }
}

// In the house choice
void choice_in_house() {
    cout << "You push the door open slowly." << endl;
    cout << "It creaks, loud in the silence." << endl;
    cout << "The inside is completely dark." << endl;
    cout << "Dust hangs in the air." << endl;
    cout << "Your phone light barely cuts through it." << endl;
    cout << "There's a small table near the wall." << endl;
    cout << "On it:" << endl;
    cout << "A lantern." << endl;
    cout << "It isn't lit." << endl;
    cout << "But it glows faintly. Warm." << endl;
    cout << "Your phone flickers in your hand." << endl;
    cout << "5%." << endl;
    cout << endl;
    cout << "Do you:" << endl;
    cout << "1. Take the lantern." << endl;
    cout << "2. Ignore it and keep using your phone." << endl;
    cout << "3. Leave." << endl;
    cout << "4. Quit." << endl;

    int choice;
    cout << "Choose: ";
    cin >> choice;

    if (1 == choice) {
        hasLantern = true;
        cout << "The moment your fingers touch it, the glow brightens." << endl;
        cout << "The darkness pulls back just a little." << endl;
        cout << "It feels easier to see now." << endl;
        cout << "Easier to move." << endl;
        cout << "You step deeper into the house." << endl;
        choice_kitchen();
    } else if (2 == choice) {
        cout << "Your phone light flickers again." << endl;
        cout << "Still weak. Still unreliable." << endl;
        cout << "But it's yours." << endl;
        cout << "You take a breath and move forward anyway." << endl;
        choice_side_room();
    } else if (3 == choice) {
        choice_go_home();
    } else if (4 == choice) {
        cout << "Ok, quitting game." << endl;
        return;
    } else {
        cout << "That's not a valid choice, please try again." << endl;
        cin.ignore();
        choice_in_house();
    }
}