// CSC 134
// M5T2
// 4/1/26
// Haylee Paredes

#include <iostream>
#include <math.h>
using namespace std;

// Given 2 #'s & print them on a line
void printResult(int number, int result) {
    // cout << number << " squared = " << result << endl;
    cout << number << " : " << result << endl;
}

// Given # & return square of it
int square(int number) {
    int result;
    result = number * number; // Squared
    return result;
}

// Exponential growth func.
int growth(int number) {
    int result = pow((double)2, (double)number); // 2 to the power of number
    return result;
}

int main() {
    // Count #'s and find result for each
    int count = 1;
    int result;

    while (count <= 10) {
        result = square(count);
        // cout << count << " squared = " << result << endl;
        printResult(count, result);
        count++;
    }

    // printResult(1, 2);
    // Exponential growth & then squared
    // int number, result;
    /*
    number = 1;
    while (number <= 10) {
        result = growth(number);
        printResult(number, result);
        number++;
    }
    */
}