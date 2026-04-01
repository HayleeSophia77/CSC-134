// CSC 134
// M5T1
// 3/30/26
// Haylee Paredes

#include <iostream>
#include <string>
using namespace std;

// Declare func.
string formatAnswer(int answer);
void printAnswer(string msg); 

int main() {
    int answer = 5;
    string message;
    message = formatAnswer(answer);
    printAnswer(message);
    return 0;
} 

// Define func.
string formatAnswer (int answer) {
    // String containing answer
    string answerMessage;
    answerMessage = "The answer is ";
    answerMessage += to_string(answer);
    return answerMessage;
} 

void printAnswer(string msg) {
    // Display message
    cout << msg << endl;
}