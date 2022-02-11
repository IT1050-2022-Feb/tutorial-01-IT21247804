/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  //declare variables
  int no1;
  int no2;
  float average;

  //user inputs
  printf("Enter the first mark:");
  scanf("%d",&no1);
  printf("Enter second mark:");
  scanf("%d",&no2);

  //calculations
  average = (no1 + no2)/2;

  printf("Average is:%.2f\n",average);

  return 0;
}

