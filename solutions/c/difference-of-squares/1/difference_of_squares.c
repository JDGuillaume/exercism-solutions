#include "difference_of_squares.h"

// Problem
// - Find the **difference** between the square of the sum and the sum of the square of the first n numbers.
//    - Square of Sum (5): (1 + 2 + 3 + 4 + 5) ^ 2
//    - Sum of Squares (5): 1 ** 2 + 2 ** 2 + 3 ** 2 + 4 ** 2 + 5 ** 2.

// Examples / Test Cases
// 10 - 3025 - 385

// Data Structure
// - Should be able to work with ints only.

// Algorithm
// Square of Sum
//  - Initialize a sum to 0.
// - Loop over n numbers.
//  - for each number, add the number to the total sum.

// Sum of Squares
// - Initialize a sum to 0.
// - Loop over n numbers.
//  - Square each number and add it to the total sum.

// Main
// - Return the difference between SquareSum - SumOfSquares

// Code
unsigned int sum_of_squares(unsigned int number)
{
  int sum = 0;

  for (; number > 0; number--){
    sum += (number * number);
  }

  return sum;
}

unsigned int square_of_sum(unsigned int number)
{
  int sum = 0;

  for (; number > 0; number--){
    sum += number;
  }

  return sum * sum;
}

unsigned int difference_of_squares(unsigned int number)
{
  return square_of_sum(number) - sum_of_squares(number);
}