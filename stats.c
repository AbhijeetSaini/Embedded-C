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
 * @file stat.c 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Abhijeet Saini
 * @date September 2020
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

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */


print_statistics(test, SIZE);

}


void print_statistics (unsigned char test [], unsigned int size){

printf("\nGiven array is: \n\n");
print_array(test, size);
sort_array(test, size);
printf("Sorted array is: \n\n");
print_array(test, size);
printf("Median is: %d\n\n", find_median(test, size));
printf("Mean is: %d\n\n", find_mean(test, size));
printf("Max is: %d\n\n", find_maximum(test, size));
printf("Min is: %d\n\n", find_minimum(test, size));

return;

}

void print_array(unsigned char test [], unsigned int size){

for (int i = 0; i < size ; i++) {
printf("%d \n\n", test[i]);
}
return;
}

 

/* Add other Implementation File Code Here */


int find_median(unsigned char test [], unsigned int size){

return test[(size-1)/2];

}

int find_mean(unsigned char test [], unsigned int size){
unsigned int sum = 0;
for (int i = 0; i < size ; i++) {
sum += test[i];
}
return (unsigned char) (sum/size);
}

int find_minimum(unsigned char test [], unsigned int size){

return test[0];

}

int find_maximum(unsigned char test [], unsigned int size){

return test[size-1];

}


void sort_array(unsigned char test [], unsigned int size){
for (int i = 0; i < size ; i++) {
for(int j = i; j < size ; j++){
if (test[j] < test[i]){
unsigned char ch = test[j];
test[j] = test[i];
test[i] = ch;
}
}
}
return;
}


















