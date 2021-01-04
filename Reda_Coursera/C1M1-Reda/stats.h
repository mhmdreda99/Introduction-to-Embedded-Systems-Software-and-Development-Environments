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
 * @file stats.h
 * @author Mohamed Reda (mhmdreda99@github.com)
 * @brief 
 * @version 0.1
 * @date 2021-01-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * This function will pass the input array to some statisitcs functions and print the returned 
 * values from these functions
 *
 * @param arr the array which its statistics to be printed 
 * @param arr_length the statisitcs will be caculated based on this length 
 *
 * @return None
 */
void print_statistics(unsigned char arr[], unsigned int arr_length);

/**
 * @brief Given an array of data and a length, prints the array to the screen.
 *
 * Printf function from stdio.h header file will be used to print the output
 * data to the console.
 *
 * @param arr the array to be printed
 * @param arr_length the array will be printed to this length
 *
 * @return None
 */
void print_array(unsigned char arr[], unsigned int arr_length);

/**
 * @brief Given an array of data and a length, returns the median value
 * 
 * To caculate the median, the array shall be sorted
 * Thus, this function will call function sort_array to sort the array at first
 * Then check the arr_length is even or odd
 * if arr_length is even so the median will be the mean of the middle two elements
 * else, the median will be the the value of the array at the middle element. 
 *
 * @param arr the array that its median value will be caculated
 * @param arr_length the array will be indexed till this length
 *
 * @return the calculated median value based on the given array data and length
 */
unsigned char find_median(unsigned char arr[], unsigned int arr_length);

/**
 * @brief Given an array of data and a length, returns the mean
 *
 * To caculate the mean of the array, that means caculating the average
 * and the average of the given array will be cauclated by 
 * sum of the array elements divided by the given array length. 
 *
 * @param arr the array that its mean will be caculated
 * @param arr_length the mean  will be caculated based on this length
 *
 * @return the average value of the given array arr with length arr_length
 */
unsigned char find_mean(unsigned char arr[], unsigned int arr_length);

/**
 * @brief Given an array of data and a length, returns the maximum
 *
 * To get the maximum of given array elements, we need to search for
 * the highest element value of the given array elements.
 *
 * @param arr the array that its maximum is to be found.
 * @param arr_length the array will be indexed till this length 
 *
 * @return the maximum element value of the given array elements. 
 */
unsigned char find_maximum(unsigned char arr[], unsigned int arr_length); 

/**
 * @brief Given an array of data and a length, returns the minimumGiven an array of data and a length, returns the minimum
 *
 * To get the minimum of given array elements, we need to search for 
 * the lowest element value of the given array elements
 *
 * @param arr the array that its minimum is to be found.
 * @param arr_length the array will be indexed till this length. 
 *
 * @return the minimum element value of the given array elements.
 */
unsigned char find_minimum(unsigned char arr[], unsigned int arr_length);

/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest. 
 *
 * The zeroth Element should be the largest value, and the last element (n-1) should be the 
 * smallest value.
 * The array will be sorted using two nested loops approach.
 *
 * @param arr the target array to be sorted.
 * @param arr_length the number of array elements. 
 *
 * @return None
 */
void sort_array(unsigned char arr[], unsigned int arr_length);


#endif /* __STATS_H__ */
