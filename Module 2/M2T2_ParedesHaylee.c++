/*
CIS-134
M2T2 Receipt Calculator
02/16/2026
Haylee Paredes

Our Goal: A correct looking receipt that handles sales tax, assuming that the sales tax rate is 8%.
*/

#include <iostream>
#include <iomanip>
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
    cout << "Tip amount? (min 0) $";
    cin >> tip_amount;

    // Do the calculation
    sub_total = meal_price * num_meals;
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

    return 0; // no errors
}