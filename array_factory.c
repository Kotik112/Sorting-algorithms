#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "heapsort.h"
#include "array_factory.h"

/* Comparison function for qsort() */
static int cmp_int( const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

/* Reverse comparison function for qsort() */
static int reverse_cmp_int( const void *a, const void *b) {
    return *(int*)b - *(int*)a;
}

/* Creates an array of length 'array_len', each element will be between 1 and 99. */
int * create_random_array_int(int array_len) {
    int * array = (int*) malloc(sizeof(int) * array_len);   //Vart ska jag fria malloc?
    for(int i = 0; i < array_len; i++)
       array[i]=rand() % 100;
    return array;
}

int * create_sorted_array_int(int array_len) {
    int * array = create_random_array_int(array_len);
    qsort(array, array_len, sizeof(int), cmp_int);
    return array;
}

int * create_reverse_sorted_array_int(int array_len) {
    int * array = create_random_array_int(array_len);
    qsort(array, array_len, sizeof(int), reverse_cmp_int);
    return array;
}

int * create_almost_sorted_array_int(int array_len, int elements_to_ignore) {
    int * array = create_random_array_int(array_len);
    int length = array_len - elements_to_ignore;
    heap_sort(array, length);
    return array;
}
