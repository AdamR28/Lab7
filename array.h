#ifndef ARRAY_H
#define ARRAY_H

#include <stdio.h>
#include <stdlib.h>

/**
 * The fillArray method fills the array with random numbers between 1 and 
 * the number entered previously by the user
 *
 * @param myArray Representing the array of integers
 * @param num Representing the upper bounds of the numbers in the array
 */
void fillArray(int * myArray, int num);


/**
 * The deleteSingleValue method first prompts the user to enter a value that should be deleted.<br>
 * Next the method searches through the array to determine if that value was in the array.<br>
 * If the value is not in the array, a message "Value NOT found" is displayed and current number of actual elements is returned.<br>
 * If the value is found it is removed from the array by shifting all elements to the right of the number being deleted left <br>
 * Once the shift has happened a zero is placed in the last index<br>
 *
 * @param myArray Representing the array of integers
 * @param length Representing the actual number of elements in the array
 */
int deleteSingleValue(int * myArray, int length);


/**
 * The printArray method prints the array in the following fashion<br>
 * [value, value, value, ..., value]
 *
 * @param myArray Representing the array of integers to be printed
 * @param length Representing the actual number of elements in the array
 */
void printArray(int * myArray, int length);


#endif
