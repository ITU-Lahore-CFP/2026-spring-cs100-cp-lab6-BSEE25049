#include "functions.h"
#include <iostream>
using namespace std;

int main() {
    int n;

    // Task A - Sum of squares
    cout << "Enter a number: ";
    if (!(cin >> n)) return 0;
    cout << "Sum of squares: " << sumOfSquares(n) << endl;

    // Task B - Factorial
    cout << "Enter a number: ";
    if (!(cin >> n)) return 0;
    cout << "Factorial of the number is " << findFactorial(n) << endl;

    return 0;
}