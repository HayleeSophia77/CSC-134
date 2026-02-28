/*
CSC-134
M2HW - Gold
Haylee Paredes
02/27/2026
*/

#include <iostream>
using namespace std;

int main() {
    // Ask how many pizzas ordered, how many slices per pizza, and how many visitors
    // Variables
    int pizzas;
    int slicePerPizza;
    int visitors;

    cout << "Welcome to Question 3, A Pizza Party!";
    cout << "\nHow many pizzas were ordered? ";
    cin >> pizzas;

    cout << "How many slices per pizza were there? ";
    cin >> slicePerPizza;

    cout << "How many visitors attended the party? ";
    cin >> visitors;

    // Calculate
    int totalSlices = pizzas * slicePerPizza;
    int eaten = visitors * 3;
    int leftover = totalSlices - eaten;

    cout << "Leftover slices of pizza: " << leftover << endl;

    return 0;
}