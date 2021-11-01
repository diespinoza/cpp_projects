//
// digits.cpp
//      purpose: report number of digits in an integer
//  modified by: Diego Espinoza Rodriguez
//         date: 1/29/2015
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int input;

  // Requests a number from the user
  cout << "Enter a number: ";
  cin >> input;

  // Determines how many digits the input has
  if (abs(input) >= 100) { // Takes the absolute value and compares it
    cout << "input has three or more digits" << endl;
  } else if (abs(input) >= 10) {
    cout << "input has two digits" << endl;
  } else if (abs(input) >= 0) {
    cout << "input has one digit" << endl;
  }

  // Determines if the input is negative
  if (input < 0) {
    cout << "and input is negative" << endl;
  }

  return 0;
}
