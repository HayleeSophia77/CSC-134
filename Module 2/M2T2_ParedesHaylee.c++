/*
CIS-134
M2T2 Receipt Calculator
02/16/2026
Haylee Paredes

Our Goal: A correct looking receipt that handles sales tax, assuming that the sales tax rate is 8%.
*/

#include <iostream>
using namespace std;
// note: if you don't use namespace std, you will need to use std::cout instead of cout (also cin)

int main() {
    // This is Peudocode, just notes or comments for what I want to do
    // We are making a recipt printer for a restaurant

    //Declare variables
    string meal_name = "Burger Platter";     // Change to anything
    int num_meals;                           // How many they buy
    double meal_price = 5.99;                // $5.99
    double sub_total;                        // price before tax/tips
    double tax_rate = 0.08;                  // 8% is 8/800 ("per cent")
    double tip_amount;                       
    double tax_amount;                       // $ of the actual tax charged
    double total_price;                      // subtotal + tip + tax

    // Get user input
    cout << "Welcome to the CSC 134 Grill." << endl;
    cout << "Today's Special: " << meal_name << endl;
    cout << endl;
    cout << "How many would you like? ";
    cin >> num_meals;

    // Do the calculation
    sub_total = meal_price * num_meals;

    // Present the output
    cout << endl;
    cout << "YOUR ORDER" << endl << "------------------------------" << endl;
    cout << num_meals << " x " << meal_name << "\t$" << meal_price << endl;
    cout << "Subtotal: \t\t$" << sub_total << endl;

    return 0; // no errors
}