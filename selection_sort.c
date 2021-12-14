#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void swap(int *x_ptr,int *y_ptr) {
    int tmp = *x_ptr;
    *x_ptr = *y_ptr;
    *y_ptr = tmp;
}

/*
static int *create_array(int size_n) {
  int *array = malloc(sizeof(int) * size_n);
  for(int i = 0; i < size_n; i++)
     array[i]=rand() % 1000;
  return array;
}
*/


void sort(int arr[], int n) {
    int i, j, idx;

    for(int i = 0; i < n; i++){
        idx = i;
        for(int j = i; j < n; j++){
            if(arr[j] < arr[idx]) {
                idx = j;
               
            }
            
        }
      
        swap(&arr[idx], &arr[i]);
    }
    
}

void print(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("Element %d :: %d",i, arr[i]);
        printf("\n");
    }
}


