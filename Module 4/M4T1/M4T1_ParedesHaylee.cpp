// CSC-134
// M4T1
// Haylee Paredes
// 03/09/2026

// NOTE: This program demonstrates a simple while loop, & displays a list of #'s & their squares.
#include <iostream>
using namespace std;

int main()
{

    // NOTE: Part 1, just say "hi" five times.
    int count = 1;
    while (count <= 5) {
        cout << "Hello number " << count << endl;
        // This is so the loop eventually stops, we don't want an infinite loop.
        count++;
    }

    cout << "That's all for now!" << endl;
    // return 0;

    // Part 2, print #'s 1-10 & their squares ig.
    const int MIN_NUMBER = 1;       // NOTE: Starting # to square
    const int MAX_NUMBER = 10;      // NOTE: Max # to square

    int num = MIN_NUMBER;           // NOTE: Counter

    cout << "Number Number Squared" << endl;
    cout << "------------------------------" << endl;

    while (num <= MAX_NUMBER) {
        cout << num << "\t\t" << (num * num) << endl;
        // NOTE: Increment the counter
        num++;
    }
    return 0;
}