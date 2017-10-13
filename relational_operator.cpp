/*Exercise 1.

Basing on the knowledge of logical operators try to modify the exercise from the lecture.
Write a program that asks the user to input three integer numbers. The first two should
represent the minimum and maximum value of the interval respectively. Then the program
should check if the third number is contained within the interval. The result should be
expressed with sentence and logical resultusing boolean type variable.

eg.
User inputted:
Minimum value: 2
Maximum value: 5
Value to check: 3

Output:

Is the number 3 contained in the interval from 2 to 5 ? Because it's true print out: 1 (True)*/


#include <iostream>

using namespace std;

main() {

    int minValue, maxValue, elementToCheck;
    bool isContained;

    cout << "Please input the minimum value: ";
    cin >> minValue;
    cout << "Please input the maximum value: ";
    cin >> maxValue;
    cout << "Please input the number to check: ";
    cin >> elementToCheck;

    isContained = (minValue <= elementToCheck) && (elementToCheck <= maxValue);
    cout << "Is the number " << elementToCheck << " contained in the interval from " << minValue << " to " << maxValue << " ? " << isContained;

}


