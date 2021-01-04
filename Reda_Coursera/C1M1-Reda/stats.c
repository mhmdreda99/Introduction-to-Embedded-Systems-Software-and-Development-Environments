/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @author Mohamed Reda (mhmdreda99@github.com)
 * @brief 
 * @version 0.1
 * @date 2021-01-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  unsigned char arr_length = sizeof(test)/sizeof(test[0]); // size of array = size of all elements divided by the size of any elemnt.
  printf("The test array before sorting\n");
  print_array(test, arr_length); 
  // we need to sort the array to find its median correctly
  sort_array(test, arr_length); 
  printf("The test array after sorting\n");
  print_array(test, arr_length);
  print_statistics(test, arr_length); // print the max, min, mean and the median of the given test array
}

void print_statistics(unsigned char arr[], unsigned int arr_length)
{
  printf("Max of given array = %i\n", find_minimum(arr, arr_length)); 
  printf("MIN of given array = %i\n", find_maximum(arr, arr_length));
  printf("Mean of given array = %i\n", find_mean(arr, arr_length));
  printf("Median of given array = %i\n", find_median(arr, arr_length));
}

void print_array(unsigned char arr[], unsigned int arr_length)
{
  unsigned int idx; // loop index
  for(idx = 0; idx < arr_length; idx++)
  {
    printf("%i ", arr[idx]);
  }
  printf("\n"); // print new line for easily reading the outputs. 
}

unsigned char find_median(unsigned char arr[], unsigned int arr_length)
{
  if(arr_length % 2 == 0) // if the array length/size is an even number 
    return ((arr[arr_length/2] + arr[arr_length/2 - 1])/2);
  else // so it's odd number
    return arr[arr_length/2];
}

unsigned char find_mean(unsigned char arr[], unsigned int arr_length)
{
  unsigned int idx; 
  unsigned int sum = 0; 
  unsigned char mean = 0; 
  for(idx = 0; idx < arr_length; idx++)
  {
    sum += arr[idx]; // summing all of the array elements. 
  }
  mean = sum/arr_length; 
  return mean; 
}

unsigned char find_maximum(unsigned char arr[], unsigned int arr_length)
{
  unsigned int idx;  // loop index
  unsigned char maximum = arr[0]; // assume that maximum is the first element.
  for(idx = 1; idx < arr_length; idx++) // begin from the second element.
  {
    if(arr[idx] > maximum)
       maximum = arr[idx]; 
  }
  return maximum; 
}

unsigned char find_minimum(unsigned char arr[], unsigned int arr_length)
{
  unsigned int idx; // loop index
  unsigned char minimum = arr[0]; // assume that minimum is the first element. 
  for(idx = 1; idx < arr_length; idx++) // begin from the second element
  {
    if(arr[idx] < minimum)
       minimum = arr[idx]; 
  }
  return minimum;
}

void sort_array(unsigned char arr[], unsigned int arr_length)
{
  unsigned int outter_idx; // outter loop index
  unsigned int inner_idx; // nested loop index
  unsigned char temp;
  for(outter_idx = 0; outter_idx < arr_length - 1; outter_idx++)
  {
    for(inner_idx = outter_idx + 1; inner_idx < arr_length; inner_idx++)
      {
        if(arr[outter_idx] < arr[inner_idx])
        {
          // swapping the two elements.
          temp = arr[outter_idx];
          arr[outter_idx] = arr[inner_idx];
          arr[inner_idx] = temp;
        } 
      } 
  }
}
