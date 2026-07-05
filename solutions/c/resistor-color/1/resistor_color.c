#include "resistor_color.h"

int color_code(resistor_band_t);
resistor_band_t *colors(void);

resistor_band_t allowed_colors[] = {BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE};

// Problem
// - Given a set of resistors, we need a reliable way to look up their numerical value.

// Examples / Test Cases
// black: 0
// brown: 1
// red: 2
// orange: 3
// yellow: 4
// green: 5
// blue: 6
// violet: 7
// grey: 8
// white: 9

// Data Structure
// - An enum would be useful for representing these relationships.

// Algorithm
// - Define an enum that maps each color to a given number. Enums internally map from 0.
// - Define a function to return the allowed colors.
// - Define a function to access a given int for the enum.

// Code
// enum resistor_band_t {
//   BLACK,
//   BROWN,
//   RED,
//   ORANGE,
//   YELLOW,
//   GREEN,
//   BLUE,
//   VIOLET,
//   GREY,
//   WHITE
// };

int color_code(resistor_band_t color)
{
  return color;
}

resistor_band_t *colors(void)
{
  return allowed_colors;
}