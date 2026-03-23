// CSC-134
// M4HW - Gold
// Haylee Paredes
// 03/23/2026

#include <iostream>
using namespace std;

int main() {
    // Get # from user
    int num;
    cout << "Enter a number from 1 to 12: ";
    cin >> num;

    // Keep asking for # until valid
    while (num < 1 || num > 12) {
        cout << "Invalid input! \nPlease enter a number from 1 to 12: ";
        cin >> num;
    }

    // Count starts at 1 & ends at 12
    int n = 1;
    while (n <= 12) {
        cout << num << " times " << n << " is " << num * n << "." << endl;
        // Add 1 to n each time so it counts up to 12
        n++;
    }
    return 0;
}