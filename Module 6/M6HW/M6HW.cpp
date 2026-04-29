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
void choice_returning_outside();
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

// Side room choice
void choice_side_room() {
    cout << "You move deeper into the house." << endl;
    cout << "The floor creaks beneath each step." << endl;
    cout << "In a small side room, something catches your eye." << endl;
    cout << "A key." << endl;
    cout << "It looks newer than everything else here." << endl;
    cout << "Clean. Out of place." << endl;
    cout << "You pick it up." << endl;
    cout << endl;
    hasKey = true;
    choice_returning_outside();
}

// Kitchen choice
void choice_kitchen() {
    cout << "The next room smells faintly of something you can't place." << endl;
    cout << "On the counter:" << endl;
    cout << "Another key." << endl;
    cout << "Rusted." << endl;
    cout << "Worn smooth, like it's been used over and over again." << endl;
    cout << "You take it." << endl;
    cout << endl;
    hasKey = true;
    choice_returning_outside();
}

// Return outside choice
void choice_returning_outside() {
    cout << "You step back through the rear door." << endl;
    cout << "It creaks shut behind you." << endl;
    cout << "For a second..." << endl;
    cout << "You're not sure if it will open again." << endl;
    cout << endl;
    cout << "You stand over the cellar door." << endl;
    cout << "The padlock hangs loose in your hand now." << endl;
    cout << "It clicks open." << endl;
    cout << "The door is heavier than it should be." << endl;
    cout << endl;
    cout << "Do you:" << endl;
    cout << "1. Open the cellar door." << endl;
    cout << "2. Leave." << endl;
    cout << "3. Quit." << endl;

    int choice;
    cout << "Choose: ";
    cin >> choice;

    if (1 == choice) {
        choice_cellar();
    } else if (2 == choice) {
        choice_go_home();
    } else if (3 == choice) {
        cout << "Ok, quitting game." << endl;
        return;
    } else {
        cout << "That's not a valid choice, please try again." << endl;
        cin.ignore();
        choice_returning_outside();
    }
}

// Cellar choice
void choice_cellar() {
    if (hasLantern) {
        cout << "You lift the cellar door." << endl;
        cout << "Warm air rises from below." << endl;
        cout << "Too warm." << endl;
        cout << "You climb down." << endl;
        choice_bad_ending();
    } else {
        cout << "You lift the cellar door." << endl;
        cout << "Cool air rises from below." << endl;
        cout << "Fresh." << endl;
        cout << "You drop down carefully." << endl;
        choice_good_ending();
    }
}

// Bad ending
void choice_bad_ending() {
    cout << "Your light fills the space." << endl;
    cout << "Photos." << endl;
    cout << "Everywhere." << endl;
    cout << "Taped to the walls." << endl;
    cout << "Nailed into the wood." << endl;
    cout << "Scattered across the ground." << endl;
    cout << "All of them..." << endl;
    cout << "you." << endl;
    cout << endl;
    cout << "Standing on the front path." << endl;
    cout << "Walking toward the house." << endl;
    cout << "Inside the house." << endl;
    cout << "Watching." << endl;
    cout << endl;
    cout << "One photo sits apart from the others." << endl;
    cout << "You pick it up." << endl;
    cout << "It's you..." << endl;
    cout << "standing exactly where you are now." << endl;
    cout << "Holding the lantern." << endl;
    cout << endl;
    cout << "The door slams shut above you." << endl;
    cout << "Darkness." << endl;
    cout << endl;
    cout << "The house wins." << endl;
    cout << "The end." << endl;
}

// Good ending
void choice_good_ending() {
    cout << "It's not really a cellar." << endl;
    cout << "More like a storm hatch." << endl;
    cout << "Shallow. Tight." << endl;
    cout << "Faint light spills in from the other side." << endl;
    cout << endl;
    cout << "Scratches line the inside of the door above you." << endl;
    cout << "Deep. Uneven." << endl;
    cout << "Like something tried to get out." << endl;
    cout << endl;
    cout << "You don't stay long." << endl;
    cout << "You move forward." << endl;
    cout << "Within seconds, you're outside." << endl;
    cout << endl;
    cout << "You don't look back." << endl;
    cout << "You just walk." << endl;
    cout << "The house disappears behind you." << endl;
    cout << "From here, it looks normal." << endl;
    cout << endl;
    cout << "Your phone buzzes weakly in your hand." << endl;
    cout << "1%." << endl;
    cout << endl;
    cout << "1 New Notification" << endl;
    cout << "Photos (1)" << endl;
    cout << endl;
    cout << "You open it." << endl;
    cout << "It's you." << endl;
    cout << "Standing on the front path." << endl;
    cout << "Looking directly at the camera." << endl;
    cout << "Timestamp: 3 weeks ago." << endl;
    cout << endl;
    cout << "Your phone dies." << endl;
    cout << endl;
    cout << "For a moment..." << endl;
    cout << "you feel like you're forgetting something." << endl;
    cout << "You keep walking." << endl;
    cout << "The end." << endl;
}

void choice_go_home() { 
    cout << "You turn away from the house." << endl;
    cout << "You don't go inside." << endl;
    cout << "You don't go around back." << endl;
    cout << "You just leave." << endl;
    cout << endl;
    cout << "The walk home feels longer than it should." << endl;
    cout << "Too quiet." << endl;
    cout << "Something about the night feels off." << endl;
    cout << "Like you were supposed to do something." << endl;
    cout << "And didn't." << endl;
    cout << endl;
    cout << "-- THE END --" << endl;
}