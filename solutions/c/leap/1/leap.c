#include "leap.h"
#include <stdio.h>

// Problem
// - We need to determine if a given year is a leap year.

// Examples
// - 1997 was not a leap year -- not divisible by 4.
// - 1900 was not a leap year -- not divisible by 400.
// - 2000 was a leap year!

// Data Structure
//  - Ternary / If Statement - Modulo is doing all the heavy lifting.

// Algorithm
// - A leap year occurs every 4 years, unless that year is divisible by 100.
//    - In that case, it's only a leap year if it's also divisible by 400.

// 1. Determine if a number is evenly divisible by 4.
//  1a. If yes, determine if that number is evenly divisible by 100.
//    I. If yes, determine if that number is evenly divisible by 400 and return the result.
//  1b. If no, return true.
// 2. If not, return false.

// Code
bool leap_year(int year)
{
  return year % 4 == 0 ? year % 100 == 0 ? year % 400 == 0 : true : false;
}