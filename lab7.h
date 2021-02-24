#ifndef LAB7_H
#define LAB7_H

#include <stdio.h>
#include <stdlib.h>

/**
 * The readNum method asks the user to enter a positive integer and ensures the number entered is positive and equal to or greater than 100.
 * Positive number is defined as an integer that is equal to or greater than 100
 *
 * @return int Representing a positive number
 */
int readNum();


/**
 * The menu method display the following menu and ensures the choice entered is between
 * 1 and 7 inclusive. <br>
 * <br>
 * Menu choices are: <br>
 * 1) Display the array<br>
 * 2) Delete a single value from the array (by value)<br>
 * 3) Compute the mean of the array<br>
 * 4) Compute the median of the array<br>
 * 5) Compute the midpoint of the array<br>
 * 6) Compute the standard deviation of the array<br>
 * 7) Quit<br>
 *
 * @return int Representing the menu choice guaranteed to be between 1 and 7 inclusive.
 */
int menu();


#endif
