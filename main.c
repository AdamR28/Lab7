#include <stdio.h>
#include <stdlib.h>
#include "lab7.h"
#include "array.h"
#include "stats.h"

const int MAX = 25;

int main()
{
	int num, choice;
  int myArray[MAX], actual;
  double mean, median, midpoint, stdDev;

  num = readNum();  // lab7.c
  fillArray(myArray, num); // array.c fill the array x = 0 x < MAX with numbers between 1 and num inclusive
  actual = MAX;  // total numbers in the array that are valid

   	do
   	{
		  choice = menu(); // lab7.c

      	switch(choice)
      	{
         	case 1: printArray(myArray, actual); // array.c [ #, #, # ]
					        break;
					
			case 2: actual = deleteSingleValue(myArray, actual); // array.c. 
                break;                     // [10, 20, 30, 40] delete 20
                                             // [10, 30, 40], 0] 
                                             // [10, 30, 40], 0] // delete 10
                                             // [30, 40], 0, 0]

			case 3: mean = computeMean(myArray, actual); // stats.c
                printResults("Mean", mean); // stats.c
             	break;

         	case 4: median = computeMedian(myArray, actual); // stats.c
                  printResults("Median", median); // stats.c
                  break;

			case 5: midpoint = computeMidpoint(myArray, actual); // stats.c
                  printResults("Midpoint", midpoint); // stats.c
                  break;

         	case 6: stdDev = computeStdDev(myArray, actual); // stats.c
                  printResults("Standard Deviation", stdDev); // stats.c
                  break;

			default:printf("All Done\n");

		}// end switch

	}while(choice != 7);
	
	printf("Good Bye\n");
	
	return 0;
}// end main

