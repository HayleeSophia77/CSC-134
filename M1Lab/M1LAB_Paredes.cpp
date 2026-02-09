// CSC 134
// M1LAB
// Haylee Paredes
// 2/2/2026

#include <iostream>
#include <iomanip> // for the 2 decimal places
using namespace std;

int main() {
    // This program will simulate an apple orchard.
    // The users name
    // string name = "Haylee Paredes";
    string first_name, last_name, full_name;

    // add product variable
    string product = "apples";

    // number of apples owned
    // int apples;
    int amount_purchased;

    // add cost of each apple
    double cost_each = 0.99;

    // price per apple
    // double pricePerApple;
    double total_cost;

    // greet the customer
    // allow user input for their name, # of apples, & price of apples
    cout << "Welcome to our " << product << " store!" << endl;
    cout << "What is your first name? ";
    cin >> first_name;
    cout << "What is your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << endl;

    // ask how much they'd like to purchase
    cout << "How many " << product << " would you like today? ";
    cin >> amount_purchased;

    // calculate total price
    total_cost = amount_purchased * cost_each;

    // Formatting: set all prices to 2 decimal places
    cout << setprecision(2) << fixed;

    // give the result
    cout << "For " << amount_purchased << " " << product << endl;
    cout << "That will be: $" << total_cost << endl;
    cout << "Thank you fro shopping with us!" << endl;


    return 0; //no errors
}