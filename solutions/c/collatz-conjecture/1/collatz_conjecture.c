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
// - Declare global step count.
//  - Define base case (number == 1)
//  - Define CC rules
//    - If a number is even, divide it by 2.
//    - If a number is odd, multiply it by 3 and add 1.

// Code

int steps(int start)
{
  return perform_cc(start, 0);
}

int perform_cc(int number, int step_count)
{
  // Test Error Case
  if (number <= 0){
    return ERROR_VALUE;
  }
  if (number == 1)
  {
    return step_count;
  }
  else if (number % 2 == 0)
  {
    return perform_cc(number / 2, ++step_count);
  }
  else
  {
    return perform_cc(number * 3 + 1, ++step_count);
  }
}