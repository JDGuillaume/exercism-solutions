#include "queen_attack.h"
#include <stdbool.h>
#include <stdlib.h>

// Problem
// - Given the position of two queens on a chess board, determine if they can attack each other.
//
// - Information
//    - A chessboard is made up of an 8 by 8 array.
//    - Two Queens can attack if:
//      - They are on the same row.
//      - They are on the same column.
//      - They are diagonal from each other.

// Examples / Tests
// - (2,3)(5,6) - Can attack!

// Data Structure
//  - Will likely uses arrays, structs, and enums.

// Algorithm
//  - We don't actually need to create a chessboard.

// - Check to see if each queen is in a valid position.
//    - If either is invalid, return false / can't attack. x
// - Check to see if both queens are on the same row.
// - Check to see if both queens are on the same column.
// - Check to see if both queens are diagonal from each other.
//   - How do we determine if the queens are diagonal?
//    - For each row farther away from the queen, the absolute difference between the queen and the other queen would be the same for both x and y?
//
// - If none of the above are true, then return false / can't attack.

// Code
attack_status_t can_attack(position_t queen_1, position_t queen_2);

bool is_valid_position(position_t queen);

bool is_valid_position(position_t queen)
{
  if (queen.column > 7 || queen.column < 0)
  {
    return false;
  }
  else if (queen.row > 7 || queen.row < 0)
  {
    return false;
  }
  else
  {
    return true;
  }
}

attack_status_t can_attack(position_t queen_1, position_t queen_2)
{
  // Make sure both queens aren't in the same position.
  if (queen_1.column == queen_2.column && queen_1.row == queen_2.row)
  {
    return INVALID_POSITION;
  }

  // Make sure both queens are in a valid position.
  if (!is_valid_position(queen_1) || !is_valid_position(queen_2))
  {
    return INVALID_POSITION;
  }

  // - Check to see if both queens are on the same row.
  if (queen_1.row == queen_2.row)
  {
    return CAN_ATTACK;
  }
  // - Check to see if both queens are on the same column.
  else if (queen_1.column == queen_2.column)
  {
    return CAN_ATTACK;
  }
  // - Check to see if both queens are diagonal from each other.
  else if (abs(queen_1.row - queen_2.row) == abs(queen_1.column - queen_2.column))
  {
    return CAN_ATTACK;
  }
  else
  {
    return CAN_NOT_ATTACK;
  }
}