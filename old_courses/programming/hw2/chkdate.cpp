//
// chkdate.cpp
//    By: Diego Espinoza Rodrigues
//  Date: 2/6/2016
//

#include <iostream>
using namespace std;

const int MINIMUM_YEAR = 1; // Dates below the year 1 are not valid
const int MAX_YEAR = 9999;  // Dates above the year 9999 are not valid

const int JAN = 1, FEB = 2, JUL = 7, AUG = 8, SEP = 9, OCT = 10, NOV = 11,
      DEC = 12;

int main() {
  // Variables for the input
  int day, month, year;

  cin >> month >> day >> year;

  // Checks if the year is valid
  if ((year < MINIMUM_YEAR) || (year > MAX_YEAR)) {
    // If not valid, print N and stop program
    cout << "N \n";
    return 0;
  }

  // Check is the month is valid
  if ((month < JAN) || (month > DEC)) {
    //If not valid, print N and stop program
    cout << "N \n";
    return 0;
  }

  // Check if the day is negative
  if (day < 1) {
    cout << "N \n";
    return 0;
  }

  // If the month is July or before
  if (month <= JUL) {
    // If it is an odd month AKA a month with 31 days
    // Includes: January, March, May and July
    if (month % 2 == 1) {
      // Checks if there are more than 31 days
      if (day > 31) {
        cout << "N \n";
        return 0;
      }
    }
    // If the month is even and not February
    // So April or June
    else if ((month % 2 == 0) && (month != FEB)) {
      // If there are more than 30 days
      if (day > 30) {
        cout << "N \n";
        return 0;
      }
    }
  }
  // If the month is greater than July
  else if (month > JUL) {
    // If the months has 31 days
    if ((month == AUG) || (month == OCT) || (month == DEC)) {
      // Print N if day is more than 31 and stop program
      if (day > 31) {
        cout << "N \n";
        return 0;
      }

    }
    // Months with 30 days
    else if ((month == SEP) || (month == NOV)) {
      // Print N if day is more than 30 and stop program
      if (day > 30) {
        cout << "N \n";
        return 0;
      }
    }
  }

  // Decides what to do with February
  if (month == FEB) {
    // If its a leap year...
    // Divisible by 4 and not by 100 unless divisible by 400
    if (((year % 4 == 0) && (year % 100 > 0)) ||
        (year % 400 == 0)) {
      // If there are over 29 days, print N and stop program
      if (day > 29) {
        cout << "N \n";
        return 0;
      }
    }
    // If its not a leap year...
    // Divisible by 100 or not divisble by 4
    else if ((year % 100 == 0) || (year % 4 > 0)) {
      //If there are over 28 days, print N and stop program
      if (day > 28) {
        cout << "N \n";
        return 0;
      }
    }
  }

  // If every test was passed, print Y
  cout << "Y \n";
  return 0;
}
