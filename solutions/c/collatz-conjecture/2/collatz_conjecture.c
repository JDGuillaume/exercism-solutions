#include "collatz_conjecture.h"

int steps(int start);
int perform_cc(int number, int step_count);

// Problem
// - Can every number makes it way back to 1?

// - Rules
//    - If a number is even, divide it by 2.
//    - If a number is odd, multiply it by 3 and add 1.

// Example
// (12) -> 6

// - What if number is 0?
// - Return 1

// Data Structure
// - Recursion?

// Algorithm
// - Given a positive integer, return the number of steps it takes to reach 1.
//  - Define base case (number == 1)
//  - Define CC rules
//    - If a number is even, divide it by 2 and return the function + 1
//    - If a number is odd, multiply it by 3 and add 1 and return the function + 1;

// Code

int steps(int start)
{
    // Test Error Case
  if (start <= 0){
    return ERROR_VALUE;
  }
  if (start == 1)
  {
    return 0;
  }
  else if (start % 2 == 0)
  {
    return steps(start / 2) + 1;
  }
  else
  {
    return steps(start * 3 + 1) + 1;
  }
}