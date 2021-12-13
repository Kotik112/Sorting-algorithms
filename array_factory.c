#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "heapsort.h"
#include "array_factory.h"


int * create_random_array(int size_n) {
    int * array = malloc(sizeof(int) * size_n);
    for(int i = 0; i < size_n; i++)
       array[i]=rand() % 100;
    return array;
}

int * create_sorted_array(int size_n) {
    int * array = create_random_array(size_n);
    heap_sort(array, size_n);
    return array;
}

int * create_reverse_sorted_array(int size_n) {
    int * array = create_random_array(size_n);
    //bubble sort in reverse here?
    return array;
}

int * create_almost_sorted_array(int size_n) {
    int * array = create_random_array(size_n);
    int length = (int) (size_n * 0.9);  //funkar detta? 90% av size_n
    heap_sort(array, length);
    return array;
}