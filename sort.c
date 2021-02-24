#include "sort.h"

void selectionSort(int * myArray, int length)
{
      int search, start, min;
      int temp;
      
      for(start = 0; start < length - 1; start++)
      {
         min = start;
         
         for(search = start + 1; search < length; search++)
         {
            if(myArray[search] < myArray[min])              
				      min = search;
         }// end for search
         
         temp = myArray[start];
         myArray[start] = myArray[min];
         myArray[min] = temp;   
      
      }// end for start
}// end method


/*
0  1 2  3  4  5 6 
2 14 1 15 89 62 7

1 14 2 15 89 62 7
  2 14 15 89 62 7
    7  15 89 62 14
       14 89 62 15
          15 62 89
             62 89       89 62
                         62 89   

*/