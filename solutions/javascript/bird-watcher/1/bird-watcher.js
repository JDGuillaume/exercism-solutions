// @ts-check
//
// The line above enables type checking for this file. Various IDEs interpret
// the @ts-check directive. It will give you helpful autocompletion when
// implementing this exercise.

/**
 * Calculates the total bird count.
 *
 * @param {number[]} birdsPerDay
 * @returns {number} total bird count
 */
export function totalBirdCount(birdsPerDay) {
  return birdsPerDay.reduce((sum, accumulator) => sum + accumulator, 0);
}

/**
 * Calculates the total number of birds seen in a specific week.
 *
 * @param {number[]} birdsPerDay
 * @param {number} week
 * @returns {number} birds counted in the given week
 */
export function birdsInWeek(birdsPerDay, week) {
  let NUMBER_OF_DAYS_IN_WEEK = 7;
  let startingPosition = NUMBER_OF_DAYS_IN_WEEK * (week - 1);

  let desiredArray = birdsPerDay.slice(
    startingPosition,
    startingPosition + NUMBER_OF_DAYS_IN_WEEK
  );

  return totalBirdCount(desiredArray);
}

/**
 * Fixes the counting mistake by increasing the bird count
 * by one for every second day.
 *
 * @param {number[]} birdsPerDay
 * @returns {number[]} corrected bird count data
 */
export function fixBirdCountLog(birdsPerDay) {
  for (let count = 0; count < birdsPerDay.length; count++) {
    if (count % 2 === 0) {
      birdsPerDay[count] = birdsPerDay[count] + 1;
    }
  }

  return birdsPerDay;
}
