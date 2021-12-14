#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "heapsort.h"
#include "array_factory.h"


int * create_random_array(int array_len) {
    int * array = (int*) malloc(sizeof(int) * array_len);
    for(int i = 0; i < array_len; i++)
       array[i]=rand() % 100;
    return array;
}

int * create_sorted_array(int array_len) {
    int * array = create_random_array(array_len);
    heap_sort(array, array_len);
    return array;
}

int * create_reverse_sorted_array(int array_len) {
    int * array = create_random_array(array_len);
    //bubble sort in reverse here?
    return array;
}

int * create_almost_sorted_array(int array_len, int elements_to_ignore) {
    int * array = create_random_array(array_len);
    int length = array_len - elements_to_ignore;
    heap_sort(array, length);
    return array;
}