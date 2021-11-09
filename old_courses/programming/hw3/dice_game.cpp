// dice_roll.cpp
// Purpose: To play a simple dice game called odd/even/same with one player
//          Two 6-sided dice are rolled, and combine to form a score,
//          as follows: The base score is the sum of the dice. If the dice
//          are both even, the roller gets a 2x bonus (i.e., double the score).
//          If both dice are odd, the roller gets a 3x bonus.
//          If both dice are the same value, the roller gets an additional
//          4x bonus (on top of the other bonuses)
//   By:Diego Espinoza Rodriguez

#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

// function definitions
int roll_die(int);
int calc_total(int roll1, int roll2);
void report_score(int roll1, int roll2, int total);

const int SIDES = 6;

int main()
{
  int roll1, roll2, total;

  srand(time(NULL)); // time-based seed

  //Randonmly rolls the die
  roll1 = roll_die(SIDES); 
  roll2 = roll_die(SIDES);

  //Calculates the total
  total = calc_total(roll1,roll2);

  //Reports the score
  report_score(roll1,roll2, total);

  return 0;
}

// Purpose: returns a value between 1 and max
// Arguments: the maximum number to return
// Return value: an integer between 1 and max
int roll_die(int max)
{
  return rand() % max + 1;       
}

// Purpose: calculates the total score from the rolls
// Arguments: the two rolls
// Return value: the total score with conditions taken into account
int calc_total(int roll1,int roll2){
  int total = roll1 + roll2;

  //If both rolls are even, double score 
  if((roll1%2==0) && (roll2%2==0)){
    total = 2*total;
  }
  //If both rolls are off, triple score
  else if((roll1%2!=0) && (roll2%2!=0)){
    total = 3*total;
  }
  //If rolls are the same number, quadruple score
  if(roll1 == roll2){
    total = 4*total;
  }

  return total;        
}

// Purpose: to report the final score
// Arguments: the two rolls and the total score
// Return Value: a sentence statig the two rolls and the final score
void report_score(int roll1, int roll2, int total){
  //Reports the rolls and the total
  cout << "You rolled a "<< roll1 << " and a " << roll2;
  cout << " for a total score of " << total << "."  << endl;
}
