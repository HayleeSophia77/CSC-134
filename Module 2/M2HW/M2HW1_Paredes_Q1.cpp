/*
CSC-134
M2HW - Gold
Haylee Paredes
02/28/2026
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Variables
    string firstName;
    string lastName;
    double balance;
    double deposit;
    double withdraw;


    cout << "Welcome to Question One Banking Transactions!";

    // Get user name
    cout << "\nEnter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    cout << "Name on account: " << firstName << " " << lastName << endl;

    // Get amounts for user account
    cout << "\nStarting balance: ";
    cin >> balance;
    cout << "Deposit amount: ";
    cin >> deposit;
    cout << "Withdrawal amount: ";
    cin >> withdraw;

    // Calculate
    double finalBal = balance + deposit - withdraw;
    cout << fixed << setprecision(2);

    // Display info.
    cout << "\n";
    cout << "Account Information";
    cout << "\nAccount Owner: " << firstName << " " << lastName << endl;
    cout << "Account #: 2963418" << endl;
    cout << "Final balance: $" << finalBal << endl;

    return 0;
}