// CSC 134
// M6T1
// 04/27/2026
// Haylee Paredes

#include <iostream>
using namespace std;

// Declare functions
void method1();
void method2();

// main
int main() {
    // Count # of cars per day, two different ways
    method1();
    method2();

    return 0;
}

// Method 1: Loop ONLY
void method1() {
    // Count 5 days of cars, get total and average
    cout << "Enter each car count found per day." << endl;
    cout << "Day 0 = Monday, Day 4 = Friday" << endl;
    const int SIZE = 5;
    int count = 0;
    int cars_today;         // current value, to add
    int cars_total = 0;     // add up
    double cars_avg = 0;    // average

    while (count < SIZE) {
        cout << "Day " << count << ": ";
        cin >> cars_today;
        cars_total += cars_today;
        // Move to next day
        count++;
    }
    cout << "Total = " << cars_total << endl;
    cars_avg = (double) cars_total / SIZE;
    cout << "Average = " << cars_avg << endl;
}

// Method 2: Loop with Array
void method2() {
    // Method 2 uses two arrays: names of the days & # of cars found on those days
    cout << "\n--- Method 2: Loop with Arrays & Chart ---" << endl;

    const int SIZE = 5;
    // initialized
    string days[SIZE] = {"M", "T", "W", "Th", "F"};
    // not initialized
    int cars[SIZE];
    int cars_total = 0;
    double cars_avg = 0.0;

    for (int i = 0; i < SIZE; i++) {
        cout << "# on " << days[i] << ": ";
        cin >> cars[i];
    }

    // print output in "tabular" (table) format
    cout << "\nDay\tCars" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << days[i] << "\t" << cars[i] << endl;
        // find the total
        cars_total += cars[i];
    }

    // find total, print results
    cars_avg = (double) cars_total / SIZE;
    cout << "Total = " << cars_total << endl;
    cout << "Average = " << cars_avg << endl;
}