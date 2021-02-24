#include <stdio.h>
#include <math.h>
#include "stats.h"
#include "sort.h"

double computeMean(int *myArray, int length)
{
  int sum = 0;
  for (int i = 0; i < length; i++)
  {
    sum += myArray[i];
  }
  return (double)sum / length;
}

double computeMedian(int *myArray, int length)
{
  selectionSort(myArray, length);
  if (length % 2 == 0)
  {
    return (double)(myArray[(length / 2) - 1] + myArray[(length / 2)]) / 2;
  }
  else
  {
    return myArray[length / 2];
  }
}

double computeMidpoint(int *myArray, int length)
{

  selectionSort(myArray, length);
  return (double)(myArray[length - 1] + myArray[0]) / 2;
}

double computeStdDev(int *myArray, int length)
{

  double mean = computeMean(myArray, length);
  double deviations[length];
  double sum_value=0;
  for (int i = 0; i < length; i++)
  {
    deviations[i] = (double)myArray[i] - mean;
    deviations[i] = deviations[i]*deviations[i];
    sum_value +=deviations[i];
  }
  sum_value = (double)sqrt(sum_value/(length-1));

  return sum_value;
}

void printResults(char *name, double value)
{
  printf("\n%s of Array is : %.2f \n\n", name, value);
}