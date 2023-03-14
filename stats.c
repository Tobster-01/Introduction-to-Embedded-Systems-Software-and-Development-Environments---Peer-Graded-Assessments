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
 * @file <stats.c>
 * @brief <Code containing instructions>
 *
 * <Code containing all the operations to be performed in this program>
 *
 * @author <Oluwatobi Odumosu>
 * @date <13th March 2023>
 *
 */



#include <stdio.h>

/* Size of the Data Set */
#define SIZE (40)
void print_array();
void find_median();
void sort_array();
int sortedArray[SIZE];
void find_mean();
void find_maximum();
void find_minimum();
void print_statistics();


void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  sort_array(test);
  find_mean(test, SIZE);
  print_statistics();
}
/* Add other Implementation File Code Here */
void print_statistics(){
  find_median(sortedArray, SIZE);
  find_maximum(sortedArray, SIZE);
  find_minimum(sortedArray, SIZE);
}

void print_array(unsigned char myArray[]){
    for(int i=0;i<SIZE;i++){
        printf("%d\n", myArray[i]);
        }
  }
void sort_array(unsigned char myArray[]){
    int temp;
    for(int i=0;i<SIZE;i++){
        for(int j=i+1;j<SIZE;j++){
            if(myArray[i]>myArray[j]){
                temp = myArray[j];
                myArray[j] = myArray[i];
                myArray[i] = temp;
            } else{
                continue;
            }
        }
    }
    for(int i=0;i<SIZE;i++){
        sortedArray[i] = myArray[i];
    }
}

void find_median(int myArray[],int n){
    int median;
    if(n%2 == 0){
        median = (myArray[(n-1)/2] + myArray[(n+1)/2]) / 2;
    } else{
        median = myArray[n/2];
    }
    printf("Median = %d\n",median);
}

void find_mean(unsigned char myArray[], int n){
    int sum = 0;
    float mean;
    for(int i=0;i<SIZE;i++){
        sum = sum + myArray[i];
    }
    mean = sum/n;
    printf("Mean = %f\n",mean);
}

void find_maximum(int myArray[],int n){
    int maxnum = 0;
    for(int i=0;i<n;i++){
            if(myArray[i] > maxnum){
                maxnum = myArray[i];
            }
        }
        printf("Max number = %d\n",maxnum);
}

void find_minimum(int myArray[],int n){
    int minnum = myArray[0];
    for(int i=0;i<n;i++){
            if(myArray[i] < minnum){
                minnum = myArray[i];
            }
        }
        printf("Min number = %d\n",minnum);
}
