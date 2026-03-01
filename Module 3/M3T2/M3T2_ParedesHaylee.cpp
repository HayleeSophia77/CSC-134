// CSC-134
// M3T2
// 03/01/2026
// Haylee Paredes

#include <iostream>

// Note: For pseudo-random numbers
#include <cmath>
// Note: For making it truely random
#include <ctime>

using namespace std;

int main() {
    cout << "Hello! Welcome to Dice Roll!" << endl;
    cout << "It's Time to Roll!" << endl;
    // int seed;
    int seed = time(0);
    cout << "Your seed is: " << seed << endl;

    // cout << "What's your lucky number? ";
    // cin >> seed;
    // Note: Seed the RNG
    srand(seed);

    // Note: #'s from 1-6
    const int MAX = 6; 
    // Note: Divide by MAX, & keep the remainder
    // int roll = rand() % MAX;
    // int roll;
    int roll_1, roll_2, total;
    // roll = (rand() % MAX) + 1;
    roll_1 = (rand() % MAX) + 1;

    cout << "You rolled a " << roll_1 << "!" << endl;
    // cout << "and a " << rand() % MAX << "!" << endl;
    // cout << "and a " << rand() % MAX << "!" << endl;

    // roll = (rand() % MAX) + 1;
    roll_2 = (rand() % MAX) + 1;
    cout << "You rolled a " << roll_2 << "!" << endl;

    // roll = (rand() % MAX) + 1;
    // cout << "You rolled a " << roll << "!" << endl;

    total = roll_1 + roll_2;
    cout << "Your total roll is: " << total << endl;

    // Note: Playing craps
    // Note: 7 & 11 = win, 2 & 12 = lose, anything else = comes later
    if (total == 7) {
        cout << "Lucky seven! You win!" << endl;
    }
    else if (total == 11) {
        cout << "Eleven is a winner!" << endl;
    }
    else if (total == 2) {
        cout << "Snake eyes! Too bad, you lose!" << endl;
    }
    else if (total == 3) {
        cout << "Sorry, three is unucky, you lose!" << endl;
    }
    else if (total == 12) {
        cout << "Boxcars! Sorry, you lost!" << endl;
    }
    else {
        cout << "Your point is: " << total << " but we'll do that part later!" << endl;
    }

    return 0;
}