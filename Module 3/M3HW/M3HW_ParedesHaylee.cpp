// CSC 134
// M3HW1 - Gold
// Haylee Paredes
// 03/09/2026

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Declare if more functions
void quest1();
void quest2();
void quest3();
//void quest4();

int main() {
    int choice;
    // TODO: add comment here
    bool keep_going = true;
    
    while (true == keep_going) {
        cout << "\nM3HW - Haylee Paredes" << endl;
        cout << "-------------------------" << endl;
        cout << "Let's Go For GOLD!" << endl;
        cout << "1. Question 1 - Chatbot" << endl;
        cout << "2. Question 2 - Receipt Calculator" << endl;
        cout << "3. Question 3 - What Sanrio Character Are You?" << endl;
        //cout << "4. Question 4 - Math Practice" << endl;
        cout << "0. Exit" << endl;

        // Get user input
        cout << "\nPlease choose a question number from the menu (0-4): ";
        cin >> choice;

        // Call function based on user input
        if (1 == choice) {
            quest1();
        }
        else if (2 == choice) {
            quest2();
        }
        else if (0 == choice) {
            cout << "\nBye! Have a great day!" << endl;
            // Exit program
            keep_going = false;
        }
        else {
            cout << "\nNot a valid choice. Please choose a number from the menu." << endl;
        }
    }
    return 0;
}

// Define all other functions
// Call quest1 if user chooses question 1
void quest1() {
    cout << "\n1. Question 1 - Chatbot" << endl;

    // Declare variables
    string chatInput;

    // Start chatbot convo.
    cout << "Hello, I’m a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;
    cin >> chatInput;

    // Respond to user input
    if ("yes" == chatInput) {
        cout << "That’s great! I’m sure we’ll get along." << endl;
    }
    else if ("no" == chatInput) {
        cout << "Well, maybe you’ll learn to like me later." << endl;
    }
    else {
        cout << "If you’re not sure… that’s OK." << endl;
    }
}

// Call quest2 if user chooses question 2
void quest2() {
    cout << "\n2. Question 2 - Receipt Calculator" << endl;

    // Declare variables
    string meal_name = "Burger Platter";     // Change to anything
    int num_meals;    
                           // How many they buy
    //NOTE: OLD CODE From M2T2
    // double meal_price = 5.99;             // $5.99
    // New variable 
    double meal_price;

    double sub_total;                        // price before tax/tips
    double tax_rate = 0.08;                  // 8% is 8/800 ("per cent")
    double tip_amount;                       
    double tax_amount;                       // $ of the actual tax charged
    double total_price;

    // New variable
    int order_type;  

    // Get user input
    cout << "Welcome to the CSC 134 Grill." << endl;
    cout << "Today's Special: " << meal_name << endl;
    cout << endl;
    cout << "How many would you like? ";
    cin >> num_meals;
    cout << "Please, enter the price of the meal? $";
    cin >> meal_price;

    // NOTE: OLD CODE From M2T2
    // cout << "Tip amount? (min 0) $";
    // cin >> tip_amount;

    // Do the calculation
    sub_total = meal_price * num_meals;

    // New code for order type
    // Ask user if dine in or to go
    cout << "Please enter 1 if the order is dine in, 2 if it is to go: " << endl;
    cin >> order_type;

    // If dine in, add 15% tip. If to go, no tip.
    if (1 == order_type) {
        tip_amount = sub_total * 0.15;     // 15% tip for dine in
    }
    else {
        tip_amount = 0;
    }
    
    // Continue calculations
    tax_amount = sub_total * tax_rate;      // this is added to the bill
    // Add tax and tips
    total_price = sub_total + tip_amount + tax_amount;

    // Present the output with 2 decimal places
    cout << setprecision(2) << fixed;       // REMEMBER to import <iomanip>
    cout << endl;
    cout << "YOUR ORDER" << endl << "--------------------------------" << endl;
    cout << num_meals << " x " << meal_name << "\t$" << meal_price << endl;
    cout << "Subtotal: \t\t$" << sub_total << endl;
    cout << "Tip: \t\t\t$" << tip_amount << endl;
    cout << "Tax: \t\t\t$" << tax_amount << endl;
    cout << "--------------------------------" << endl;
    cout << "Total: \t\t\t$" << total_price << endl; 
    cout << "THANK YOU COME AGAIN" << endl;
}

// Call quest3 if user chooses question 3
void quest3() {
    cout << "\n3. Question 3 - What Sanrio Character Are You?" << endl;

    cout << "\nWelcome to 'What Sanrio Character Are You?' quiz!" << endl;
    cout << "Answer two questions to find out your Sanrio character match!!" << endl;
    cout << "And don't worry, there are no wrong answers!!" << endl;

    // Declare variables
    int answer1;
    int answer2;

    // Ask question 1 of quiz
    cout << "\nQuestion 1: It's the weekend. What are you most likely doing?" << endl;
    cout << "1. Waking up early, making breakfast, and enjoying the morning." << endl;
    cout << "2. Sleeping in, staying up late, and enjoying a quiet night." << endl;
    cout << "Enter 1 or 2: ";
    cin >> answer1;

    if (1 == answer1) {
        cout << "\nQuestion 2: Your friend invites you out. What sounds more fun?" << endl;
        cout << "1. Going to a cafe and trying all the desserts." << endl;
        cout << "2. Exploring somewhere new and going on an adventure." << endl;
        cout << "Enter 1 or 2: ";
        cin >> answer2;

        if (1 == answer2) {
            cout << "\nYou are Pompompurin!" << endl;
            cout << "You are sweet, easygoing, and always down for good food and good company." << endl;
            cout << "You bring comfort and happiness wherever you go!" << endl;
        }
        else {
            cout << "\nYou are Hello Kitty!" << endl;
            cout << "You are cheerful, bold, and always up for something new." << endl;
            cout << "You make friends everywhere you go!" << endl;
        }
    }
    else {
        cout << "\nYou are Cinnamoroll!" << endl;
        cout << "You are dreamy, gentle, and a little mysterious." << endl;
        cout << "You find peace in the quiet and have a big imagination!" << endl;
    }
}

// Call quest4 if user chooses question 4