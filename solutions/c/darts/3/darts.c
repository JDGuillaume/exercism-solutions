#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "darts.h"

uint8_t score(coordinate_t landing_position);
bool is_within_circle(coordinate_t position, float radius);

// Problem
// - Given the x / y coordinates of a given dart toss, return the score.
//  - Outside the Target - 0
//  - Outer Circle - 1
//  - Middle Circle - 5
//  - Inner Circle - 10

//  - Questions
//    - For a point to be within a given circle, I would assume that both the x and y coordinates need to be below the threshold (i.e., at or below the radius).

// Examples
//  - (-9, 9) - Outside of Target = 0
//  - (0, 10) - Inside Outer Circle = 1
//  - (-5, 5) - Inside Middle Circle = 5
//  - (0, -1) - Inside Inner Circle = 10

// Data Structure
//  - Struct

// Algorithm
//  - Mathematical Equation for determining if a point lies inside a circle - (x - center_x) ^ 2 + (y - center_y) ^2 < radius ^2
//    - We need less than or equal to because it could be on the circles line as well.
//  - Create coordinate for center of circle.
//  - Create function for determining if a point is in circle using relevant radius.
//  - Test circles in order of importance (Inner -> Middle -> Outer).

// Code
bool is_within_circle(coordinate_t position, float radius)
{
  // Center of the circles is the point (0, 0).
  return (pow(position.x, 2) + pow(position.y, 2)) <= pow(radius, 2);
}

uint8_t score(coordinate_t landing_position)
{
  if (is_within_circle(landing_position, INNER_CIRCLE_RADIUS)){
    return INNER_CIRCLE_POINTS;
  } else if (is_within_circle(landing_position, MIDDLE_CIRCLE_RADIUS)){
    return MIDDLE_CIRCLE_POINTS;
  } else if (is_within_circle(landing_position, OUTER_CIRCLE_RADIUS)){
    return OUTER_CIRCLE_POINTS;
  } else {
    return 0;
  }
}
