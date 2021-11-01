//
// yoda.cpp
// purpose: Ask user for a 4 words sentence and print it out in reverse order
//      by: Diego Espinoza Rodriguez
//    date:1/30/2016
//
#include <iostream>

using namespace std;

int main() {
  // Creates 4 string variables
  string word1, word2, word3, word4;

  // Asks user to input 4 words and assigns each to a variable
  cout << "Type in four words: ";
  cin >> word1 >> word2 >> word3 >> word4;

  // Outputs each variable in the reverse order
  cout << word4 << " " << word3 << " " << word2 << " " << word1 << endl;
}
