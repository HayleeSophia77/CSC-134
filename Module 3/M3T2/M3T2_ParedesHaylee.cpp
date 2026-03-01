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
    int seed;

    cout << "What's your lucky number? ";
    cin >> seed;
    // Note: Seed the RNG
    srand(seed);

    // Note: #'s from 1-6
    const int MAX = 6; 
    // Note: Divide by MAX, & keep the remainder
    // int roll = rand() % MAX;
    int roll;
    roll = (rand() % MAX) + 1;

    cout << "You rolled a " << roll << "!" << endl;
    // cout << "and a " << rand() % MAX << "!" << endl;
    // cout << "and a " << rand() % MAX << "!" << endl;

    roll = (rand() % MAX) + 1;
    cout << "You rolled a " << roll << "!" << endl;

    roll = (rand() % MAX) + 1;
    cout << "You rolled a " << roll << "!" << endl;

    return 0;
}