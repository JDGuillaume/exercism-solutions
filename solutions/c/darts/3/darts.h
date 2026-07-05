#ifndef DARTS_H
#define DARTS_H

#define INNER_CIRCLE_RADIUS 1
#define MIDDLE_CIRCLE_RADIUS 5
#define OUTER_CIRCLE_RADIUS 10

#define INNER_CIRCLE_POINTS 10
#define MIDDLE_CIRCLE_POINTS 5
#define OUTER_CIRCLE_POINTS 1

typedef struct {
  float x;
  float y;
} coordinate_t;

uint8_t score(coordinate_t landing_position);
#endif
