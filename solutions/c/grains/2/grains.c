#include "grains.h"

#define CHESSBOARD_SQUARES 64 /* Number of squares on a chessboard. */

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
// - Array not actually needed. Just use unsigned long long!

// Algorithm

// Account for zero-indexing.
// - For a given square, subtract 1 then square it.
// - For the total, subtract 1 from max square, then square it.

// Declare an empty array of length 64.
// Initialize the first value to 1.
// Populate the array index by index, doubling the index each.
// Calculate teh sum as you go on.

// Code
uint64_t square(uint8_t index){
    // Illegal Values
  if (index <= 0 || index > CHESSBOARD_SQUARES){
    return 0;
  }

  // Account for zero indexing.
  return (index - 1) * (index - 1);
}

uint64_t total(void){
  return (CHESSBOARD_SQUARES - 1) * (CHESSBOARD_SQUARES - 1);
}



