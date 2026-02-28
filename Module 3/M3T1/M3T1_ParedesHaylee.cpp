// CSC-134
// M3T1
// Haylee Paredes
// 2/28/2026

// Get width and length of rectangle from user and find the area.

#include <iostream>
using namespace std;

int main(){
    // Variables
    double len1, wid1, len2, wid2;
    double area1, area2;

    // Ask user for length and width
    cout << "What's the length of the first rectangle? ";
    cin >> len1;
    cout << "What's the width of the first rectangle? ";
    cin >> wid1;
    cout << "What's the length of the second rectangle? ";
    cin >> len2;
    cout << "What's the width of the second rectangle? ";
    cin >> wid2;

    // Find the area
    area1 = len1 * wid1;
    area2 = len2 * wid2;

    // Display the area
    cout << "Area of rectangle 1: "<< area1 << endl;
    cout << "Area of rectangle 2: "<< area2 << endl;

    return 0;
}