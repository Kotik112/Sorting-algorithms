#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "heapsort.h"
#include "array_factory.h"



/* Comparison function for qsort() */
static int cmp( const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

/* Reverse comparison function for qsort() */
static int reverse_cmp( const void *a, const void *b) {
    return *(int*)b - *(int*)a;
}


void create_random_array_int(int * array, int array_len) {
    for(int i = 0; i < array_len; i++)
       array[i]=rand() % 100;
}
void create_sorted_array_int(int * array, int array_len) {
    create_random_array_int(array, array_len);
    qsort(array, array_len, sizeof(int), cmp);
}

void create_reverse_sorted_array_int(int * array, int array_len) {
    create_random_array_int(array, array_len);
    qsort(array, array_len, sizeof(int), reverse_cmp);
}

void create_almost_sorted_array_int(int * array, int array_len, int elements_to_ignore) {
    create_random_array_int(array, array_len);
    int length = array_len - elements_to_ignore;
    qsort(array, length, sizeof(int), cmp);
}

