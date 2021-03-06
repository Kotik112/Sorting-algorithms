#include <stdio.h>
#include <time.h>
#include <stdlib.h>

static void selection_sort_swap_int(int *x_ptr,int *y_ptr) {
    int tmp = *x_ptr;
    *x_ptr = *y_ptr;
    *y_ptr = tmp;
}

void selection_sort_int(int arr[], int n) {
    int i, j, idx;

    for(i = 0; i < n; i++){
        idx = i;
        for(j = i; j < n; j++){
            if(arr[j] < arr[idx]) {
                idx = j;
            }
        }
        selection_sort_swap_int(&arr[idx], &arr[i]);
    }
}

void selection_sort_print_int(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("Element %d :: %d",i, arr[i]);
        printf("\n");
    }
}




