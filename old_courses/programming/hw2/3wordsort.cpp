/* 
 *   3wordsort.cpp -- program to print out three words in alpha order
 *
 *   usage:  ./3wordsort
 *   input:  three words
 *   output: the three words in alphabetical order, separated by spaces
 *   note:   Do not prompt the user; Do not print explanations on output.
 *           In fact, don't modify main().
 *  
 *  modified by: Diego Espinoza Rodriguez
 *  modified on: 2/6/2016
 */

#include <iostream>
using namespace std;

void printInOrder(string s1, string s2, string s3);

int main(){
  string	w1, w2, w3;		// input values

  cin >> w1 >> w2 >> w3;		// read in three values
  printInOrder(w1, w2, w3);	// function does not return anything

  return 0;
}

//
// printInOrder() prints out the three words in alpha order
//		  with spaces between them, no return value
//
void printInOrder(string x, string y, string z){
  string temp1st, temp2nd;
  string first, second, third;


  //Compares the first two words and temporarily orders them
  if (x >=  y) {
    temp1st = y;
    temp2nd = x;
  } else {
    temp1st = x;
    temp2nd = y;
  }

  //Compares greater word to z, determines the temporary middle word and
  //the last word
  if (temp2nd >= z) {
    third = temp2nd;
    temp2nd = z;
  } else {
    third = z;
    second = temp2nd;
  }

  //Compares the temporary middle word to the temporary minimun 1st word
  //and determines their order
  if (temp2nd <= temp1st) {
    first = temp2nd;
    second = temp1st;
  } else {
    second = temp2nd;
    first = temp1st;
  }

  //Prints out the words in order
  cout << first << " " << second << " " << third << endl;
}
