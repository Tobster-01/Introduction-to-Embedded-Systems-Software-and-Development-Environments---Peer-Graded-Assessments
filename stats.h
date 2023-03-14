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
 * @file <stats.h> 
 * @brief <C Header>
 *
 * <C File Header>
 *
 * @author <Oluwatobi Odumosu>
 * @date <13th March 2023>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Prints out the elements in the array>
 *
 * <Prints out the elements of an array using a for loop>
 *
 * @param <myArray> <Array of elements to be printed out>
 *
 * @return <List of array members>
 */
void print_array();

/**
 * @brief <Sorts the array in ascending order>
 *
 * <Sorts an array using bubble sort and a for loop>
 *
 * @param <myArray> <Array of elements to be sorted>
 *
 * @return <List of sorted array members>
 */
void sort_array();

/**
 * @brief <Finds the median of a sorted array>
 *
 * <Finds the median of a sorted array whether it has an even or odd number of members>
 *
 * @param <myArray> <Array of elements to be sorted>
 * @param <n> <Number of elements in the array>
 *
 * @return <Median of the array>
 */
void find_median();

/**
 * @brief <Finds the mean of an array>
 *
 * <Finds the mean of an array>
 *
 * @param <myArray> <Array of elements to be sorted>
 * @param <n> <Number of elements in the array>
 *
 * @return <Mean of the array>
 */
void find_mean();

/**
 * @brief <Finds the maximum number in an array>
 *
 * <Finds the maximum number in an array using a for loop>
 *
 * @param <myArray> <Array of numbers>
 * @param <n> <Number of elements in the array>
 *
 * @return <Maximum number of the array>
 */
void find_minimum();

/**
 * @brief <Finds the minimum number in an array>
 *
 * <Finds the minimum number in an array using a for loop>
 *
 * @param <myArray> <Array of numbers>
 * @param <n> <Number of elements in the array>
 *
 * @return <Minimum number of the array>
 */
void find_minimum();

#endif /* __STATS_H__ */
