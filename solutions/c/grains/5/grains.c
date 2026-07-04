#include "grains.h"

#define CHESSBOARD_SQUARES 64 /* Number of squares on a chessboard. */

void populate_chessboard(void);

// uint64_t square(uint8_t index);
// uint64_t total(void);

// Problem
// - A chessboard has 64 squares.
//  - A servant is given one grain of wheat on the first square, doubling on each successive square.
//  - We need to be able to provide the number of grains of wheat total as well was the number of grains on a given square.

// Notes
// - C is a 0 index language!

// Example / Test Cases
// Square 1 - 1 grain
// Square 2 - 2 grains
// Square 3 - 4 grains

// Data Structure
// - An array

// Algorithm
// - There's only a need to do the calculations once.

// Declare an empty array of length 64.
// Initialize the first value to 1.
// Populate the array index by index, doubling the index each.
// Calculate teh sum as you go on.

// Code
uint64_t chessboard [CHESSBOARD_SQUARES] = {0}; // Initialize all values to 0.
uint64_t sum = 0; // Store the total value of all squares.

void populate_chessboard(void)
{
  // Only do work if it hasn't the chessboard is unpopulated.
  if (chessboard[0] == 0){
    chessboard[0] = 1;
    sum += chessboard[0];

    for (int i = 1; i <= 63; i++)
    {
      uint64_t doubled_value = (chessboard[i - 1] * 2);
      sum += doubled_value;
      chessboard[i] = doubled_value;
    }
  }
}

uint64_t square(uint8_t index){
  populate_chessboard();

  // Illegal Values
  if (index <= 0 || index > CHESSBOARD_SQUARES){
    return 0;
  }

  // Account for zero indexing.
  return chessboard[index - 1];
}

uint64_t total(void){
  return sum;
}