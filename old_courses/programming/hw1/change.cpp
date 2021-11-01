//
// change.cpp
//  purpose: Figures out the number of quarters, dimes, nickels, pennies to
//           dispence for a given amount of cents
//       by: Diego Espinoza Rodriguez
//     date: 1/30/2016
//
#include <iostream>
using namespace std;

// Create constants for each value assigned to a coin
const int QUARTER_VALUE = 25;
const int DIME_VALUE = 10;
const int NICKEL_VALUE = 5;
const int PENNY_VALUE = 1;

int main() {
  int totalChange;
  int remainingChange;
  int quarters;
  int dimes;
  int nickels;
  int pennies;

  // Asks user to input a number of cents
  cout << "Amount of change in cents? ";
  cin >> totalChange;

  // Determines if quarters will fit into the total change
  if (totalChange >= QUARTER_VALUE) {
    // If quarters fit, determines how many quarters to use.
    // Note: Uses fact that the division of two integers will floor
    //      the result and return an integer.
    quarters = totalChange / QUARTER_VALUE;

    // Assigns the value of remainingChange to be remaining change
    remainingChange = totalChange % QUARTER_VALUE;
  } else {
    // If quarters don't fit, none are dispenced
    quarters = 0;
    remainingChange = totalChange;
  }

  // Determines if dimes fit into the remaining change and how many
  if (remainingChange >= DIME_VALUE) {
    dimes = remainingChange / DIME_VALUE;
    remainingChange = remainingChange % DIME_VALUE;
  } else {
    dimes = 0;
  }

  // Determines if nickels will fit into the remaining change and how many
  if (remainingChange >= NICKEL_VALUE) {
    nickels = remainingChange / NICKEL_VALUE;
    remainingChange = remainingChange % NICKEL_VALUE;
  } else {
    nickels = 0;
  }

  // Determines how many pennies fit into the remaining change
  pennies = remainingChange / PENNY_VALUE;

  cout << quarters << " quarters, " << dimes << " dimes, " << nickels
    << " nickels, " << pennies << " pennies" << endl;
}
