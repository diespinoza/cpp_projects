//
// adder.cpp
//  purpose: Ask user for eight floating point numbers, add them, and return sum
//       by: Diego Espinoza Rodriguez
//     date:1/29/2016
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float a, b, c, d, e, f, g, h;
  float sum;

  // Asks user to enter in 8 numbers and assigns them to a variable
  cout << "Enter eight floating point numbers:";
  cin >> a >> b >> c >> d >> e >> f >> g >> h;

  sum = (a + b + c + d + e + f + g + h);

  // Prints out the sum of the numbers
  cout << sum << endl;
}
