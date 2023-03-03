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
 * @file <ahmed_coursera> 
 * @brief <second commit editing stage >
 *
 * <Add Extended Description Here>
 *
 * @author <Ahmed Essam>
 * @date <2/3/2023 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {
  unsigned char test[SIZE] = {34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};


  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_array(test,SIZE);
  print_statistics(test,SIZE);
  sort_array(test,SIZE);


}
/* Add other Implementation File Code Here */

////
////
////
////
//// func 5
float find_mean(unsigned char* array,unsigned int array_size){
  /* Other Variable Declarations Go Here */
    unsigned int sum,i;
    float avg;
    sum=avg=0;
  /* Statistics and Printing Functions Go Here */
    for (i=0;i<array_size;i++){
      	sum=sum+array[i];
    }
  
    avg=(float)sum/i;
    
    return avg; 
}

////////////////////function3
unsigned char print_array(unsigned char* array,unsigned int array_size){
int i;
  printf("array=[");
for(i=0;i<array_size;i++){
  printf("%d ",array[i]);
   }
  printf("]\n");

}

////////////////////func 4
float find_median(unsigned char* array, unsigned int array_size){

// median is (n/2)+1 element in the array for even array
 float median;
//even
if (array_size%2==0){ 
 median=(float)(array[array_size/2-1]+ array[array_size/2])/2;
//odd
}else{
 median=array[(array_size-1)/2];
}
	return median;
}

////////////////////func 6
unsigned char find_maximum(unsigned char* array,unsigned int array_size){
int i;
unsigned int max;
max=0;
for(i=0;i<array_size;i++){
	if( array[i]>max){
		max=array[i];
	}
}
return max;
}
////////////////func 7
unsigned char find_minimum(unsigned char* array,unsigned int array_size){
int i;
unsigned int min;

for(i=0;i<array_size;i++){
	if( array[i]<min){
		min=array[i];
	}
}
return min;
}
///////////////func 2 
void print_statistics(unsigned char* array,unsigned int array_size){

printf("average of array values is %f\n",find_mean(array,array_size) );
printf("median of array values is %f\n",find_median(array,array_size));

printf("maximum number in the array = %d\n",find_maximum(array,array_size));
printf("minimum number in the array = %d\n", find_minimum(array,array_size));


}

///////////////func 8
unsigned char sort_array(unsigned char* array,unsigned int array_size){

int i,c,original_size,max_index,k;
unsigned char new_array[array_size]; // array_size is the maximum size the new_array can reach
unsigned int max;
original_size=array_size;
for(i=0;i<40;i++){
max=0;
//
for(c=0;c<array_size;c++){
	if( array[c]>max){
		max=array[c];
		max_index=c;
			}
			}
// first you got the max number that need to be >>added to the new_array,, 
new_array[i]=max;

//you need to delete the max num from the original array...
//also, reduce size of orig. array by 1
//second copy next element value to current value in original array
for(k=max_index;k<array_size-1;k++){
array[k]=array[k+1];
}
/* Decrement array size by 1 */
array_size--;

   }
print_array(new_array,original_size);
}


