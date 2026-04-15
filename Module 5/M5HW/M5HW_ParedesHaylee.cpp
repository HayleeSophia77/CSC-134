// CSC 134
// M5HW - Gold
// 4/15/26
// Haylee Paredes

#include <iostream>
#include <iomanip>
using namespace std;

void quest1();
void quest2();
void quest3();
void quest4();
void quest5();

int main() {
    int choice = 0;
    while (choice != 6) {
        cout << "\nMain Menu" << endl;
        cout << "1. Average Rainfall" << endl;
        cout << "2. Block Volume" << endl;
        cout << "3. Roman Numerals" << endl;
        cout << "4. Geometry Calculator" << endl;
        cout << "5. Distance Traveled" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        if (choice == 1) quest1();
        else if (choice == 2) quest2();
        else if (choice == 3) quest3();
        else if (choice == 4) quest4();
        else if (choice == 5) quest5();
        else if (choice == 6) cout << "Goodbye!" << endl;
        else cout << "Please enter a number between 1 and 6." << endl;

    }

    return 0;
}

void quest1() {
    string month1, month2, month3;
    double rain1, rain2, rain3;

    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rain1;

    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rain2;
    
    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rain3;

    double avg = (rain1 + rain2 + rain3) / 3.0;
    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << avg << " inches." << endl;
}

void quest2() {
    double width, length, height;

    cout << "Enter width: ";
    cin >> width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter height: ";
    cin >> height;

    if (width <= 0 || length <= 0 || height <= 0) {
        cout << "All sides must be greater than zero." << endl;
        return;
    }

    double volume = width * length * height;
    cout << fixed << setprecision(2);
    cout << "The volume of the box is " << volume << endl;
}

void quest3() {
    int num;

    cout << "Enter a number (1-10): ";
    cin >> num;

    if (num < 1 || num > 10) {
        cout << "Please enter a number between 1 and 10." << endl;
        return;
    }

    switch (num) {
        case 1: cout << "The Roman numeral version of 1 is I." << endl; break;
        case 2: cout << "The Roman numeral version of 2 is II." << endl; break;
        case 3: cout << "The Roman numeral version of 3 is III." << endl; break;
        case 4: cout << "The Roman numeral version of 4 is IV." << endl; break;
        case 5: cout << "The Roman numeral version of 5 is V." << endl; break;
        case 6: cout << "The Roman numeral version of 6 is VI." << endl; break;
        case 7: cout << "The Roman numeral version of 7 is VII." << endl; break;
        case 8: cout << "The Roman numeral version of 8 is VIII." << endl; break;
        case 9: cout << "The Roman numeral version of 9 is IX." << endl; break;
        case 10: cout << "The Roman numeral version of 10 is X." << endl; break;
    }
}

void quest4() {
    int choice = 0;

    while (choice != 4) {
        cout << "\nGeometry Calculator" << endl;
        cout << "1. Calculate the Area of a Circle" << endl;
        cout << "2. Calculate the Area of a Rectangle" << endl;
        cout << "3. Calculate the Area of a Triangle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        if (choice == 1) {
            double radius;
            cout << "Enter the circle's radius: ";
            cin >> radius;
            if (radius < 0)
                cout << "The radius cannot be less than zero." << endl;
            else
                cout << "The area is " << fixed << setprecision(5) << 3.14159 * radius * radius << endl;
        }
        else if (choice == 2) {
            double length, width;
            cout << "Enter the rectangle's length: ";
            cin >> length;
            cout << "Enter the rectangle's width: ";
            cin >> width;
            if (length < 0 || width < 0)
                cout << "Only enter positive values for length and width." << endl;
            else
                cout << "The area is " << fixed << setprecision(5) << length * width << endl;
        }
        else if (choice == 3) {
            double base, height;
            cout << "Enter the triangle's base: ";
            cin >> base;
            cout << "Enter the triangle's height: ";
            cin >> height;
            if (base < 0 || height < 0)
                cout << "Only enter positive values for base and height." << endl;
            else
                cout << "The area is " << fixed << setprecision(5) << base * height * 0.5 << endl;
        }
        else if (choice == 4) {
            cout << "Returning to main menu." << endl;
        }
        else {
            cout << "The valid choices are 1 through 4. Run the program again and select one of those." << endl;
        }

    }
}

void quest5() {
    double speed;
    int hours;

    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;
    cout << "How many hours has it traveled? ";
    cin >> hours;

    if (speed < 0) {
        cout << "Speed cannot be negative." << endl;
        return;
    }
    if (hours < 1) {
        cout << "Time traveled must be at least 1 hour." << endl;
        return;
    }

    cout << "\nHour    Distance Traveled" << endl;
    cout << "--------------------------------" << endl;

    for (int i = 1; i <= hours; i++) {
        cout << "  " << i << "\t\t" << fixed << setprecision(2) << speed * i << endl;
    }
}