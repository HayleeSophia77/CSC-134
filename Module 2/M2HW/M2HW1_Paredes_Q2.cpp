/*
CSC-134
M2HW - Gold
Haylee Paredes
02/25/2026
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Constants for cost & amount charged
    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;

    // Variables
    double length,  // Crate's length
            width,  // Crate's width
            height, // Crate's height
            volume, // Crate's volume
            cost,   // Crate's cost to build
            charge, // Customer charge for crate
            profit; // Crate's profit

    // Set the desired output formatting for numbers.
    cout << setprecision(2) << fixed << showpoint;

    // Acknowledge question #
    cout << "Welcome to Question 2, A Case Study Improvement!";

    // Prompt the user for the crate's length, width, and height
    cout << "\nEnter the dimensions of the crate (in feet):\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    // Calculate the crate's volume, the cost to produce it, the charge to the customer, and the profit.
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    // Display the calculated data.
    cout << "The volume of the crate is ";
    cout << volume << " cubic feet.\n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
    return 0;
}