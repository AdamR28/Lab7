#include "array.h"
extern const int MAX;

/**
 * The fillArray method fills the array with random numbers between 1 and num inclusive 
 *
 * @param myArray Representing the array of integers
 * @param num Representing the maximum numberbetween 1 and num
 */
void fillArray(int *myArray, int num)
{
	// myArray = malloc(MAX * sizeof(int));
	for (int i = 0; i < MAX; i++)
	{
		myArray[i] = rand() % (num + 1);
		// printf("%d \n",rand()%(num+1));
	}

} // end method

/**
 * The deleteSingleValue method first prompts the user to enter a value that should be deleted.<br>
 * Next the method searches through the array to determine if that value was in the array.<br>
 * If the value is not in the array, a message "Value NOT found" is displayed and current number of actual elements is returned.<br>
 * If the value is found it is removed from the array by shifting all elements to the right of the number being deleted left <br>
 * Once the shift has happened a zero is placed in the last index<br>
 *
 * @param myArray Representing the array of integers
 * @param length Representing the actual number of elements in the array
 * @return int Representing the new actual number of elements in the array
 */
int deleteSingleValue(int *myArray, int length)
{
	int number = 0, error = 0;
	do
	{
		if (error)
		{
			printf("-----------------------------------------------------------------------------\n");
			printf("[ERROR]: Invalid Array item \n");
			printf("-----------------------------------------------------------------------------\n");
		}
		else
		{
			error = 1;
		}

		printf("Please Input Delete Value [Numbe should be 100 or greater]: ");
		scanf("%d", &number);
	} while (number < 100);

	int  idx =0;
	int copy[length];
	for (int i = 0; i < length; i++)
	{
		copy[i] = myArray[i];
		myArray[i] = 0;
	}
	
	for (int i = 0; i < length; i++)
	{
		if(copy[i] != number){
			myArray[idx] = copy[i];
			idx ++;
		}
	}

	return idx;
} // end method

/**
 * The printArray method prints the array in the following fashion<br>
 * [value, value, value, ..., value]
 *
 * @param myArray Representing the array of integers to be printed
 * @param length Representing the actual number of elements in the array
 */
void printArray(int *myArray, int length)
{
	printf("[");
	for (int i = 0; i < length; i++)
	{
		printf(" %d %s", myArray[i], i == length - 1 ? "" : ",");
	}
	printf("]\n");
} // end printArray
