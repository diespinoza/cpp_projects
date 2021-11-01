#include <iostream>

/* 
 *   mid3.cpp -- program to print out the middle of three input values
 *
 *   usage:  ./mid3
 *   input:  three doubles 
 *   output: the middle of the three input values
 *   note:   Do not prompt the user, do not print explanations on output.
 *           In fact, do not change main() at all, and don't use cin or
 *           cout in mid3().
 *  
 *  modified by: Diego Espinoza Rodriguez
 *  modified on: 2/6/2016
 */

using namespace std;

double mid3(double n1, double n2, double n3);    // tell compiler about this

int main()
{
  // NOTE: DO NOT CHANGE ANYTHING IN main()!
  double  a, b, c;                // input values
  double  middle;                 // result

  cin >> a >> b >> c;             // read in three values

  middle = mid3(a, b, c);         // compute the middle

  cout << middle << endl;         // display it on the screen

  return 0;
}

//
// mid3() return the middle of three values passed as arguments
//
double mid3(double n1, double n2, double n3)
{
  //Placeholders for temporary max, middle, and min numbers
  double tempMax, tempMid, tempMin; 

  //Variable to hold the actual middle number
  double midNum; 

  //Compares the first two numbers and set them as temporary max and min
  if (n1 >=  n2) {
    tempMax = n1;
    tempMin = n2;
  } else {
    tempMax = n2;
    tempMin = n1;
  }

  //Compares tempMax to n3 and determines the temporary middle number
  if (tempMax >= n3) {
    tempMid = n3;
  } else {
    tempMid = tempMax;
  }

  //Compares the temporary middle number to the temporary minimun number
  //and determines the actual middle number
  if (tempMid <= tempMin) {
    midNum = tempMin;
  } else {
    midNum = tempMid;
  }

  return midNum;
}
