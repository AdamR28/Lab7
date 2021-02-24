#include "lab7.h"

extern const int MAX;

/**
 * The readNum method asks the user to enter a positive integer and ensures the number entered is positive and equal to or greater than 100.
 * Positive number is defined as an integer that is equal to or greater than 100
 *
 * @return int Representing a positive number
 */
int readNum()
{
	int number = 0, error = 0;
  do
  {
    if (error)
    {
      printf("-----------------------------------------------------------------------------\n");
      printf("[ERROR]: Please input a number 100 or greater \n");
      printf("-----------------------------------------------------------------------------\n");
    }
    else
    {
      error = 1;
    }

    printf("Your Input [100 or greater]: ");
    scanf("%d", &number);
  } while (number < 100);

  return number;   
}// end method


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
int menu()
{
  int theValue = 0, error = 0;
  do
  {
    if (error)
    {
      printf("-----------------------------------------------------------------------------\n");
      printf("[ERROR]: Please input value between 1 to 7 \n");
      printf("-----------------------------------------------------------------------------\n");
    }
    else
    {
      error = 1;
    }
    printf("\n-----------------------------------------------------------------------------\n");
    printf("MENU \n");
    printf("-----------------------------------------------------------------------------\n");
    printf("The menu choices are \n");
    printf("  1. Print Array\n");
    printf("  2. Delete Item From Array \n");
    printf("  3. Mean of Array \n");
    printf("  4. Median of Array \n");
	printf("  5. Mid Point Of Array\n");
    printf("  6. Standard Deviation of Array \n");
    printf("  7. Quit the program \n");
    printf("-----------------------------------------------------------------------------\n");
    printf("Your Choice [1-7]: ");
    scanf("%d", &theValue);
  } while (theValue <= 0 || theValue>7);

  return theValue;
}// end method






