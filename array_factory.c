#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "heapsort.h"
#include "array_factory.h"

static int cmp_int( const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

static char cmp_char( const void *a, const void *b) {
    return *(char*)a - *(char*)b;
}

static int reverse_cmp_int( const void *a, const void *b) {
    return *(int*)b - *(int*)a;
}

static char reverse_cmp_char( const void *a, const void *b) {
    return *(char*)b - *(char*)a;
}

int * create_random_array_int(int array_len) {
    int * array = (int*) malloc(sizeof(int) * array_len);
    for(int i = 0; i < array_len; i++)
       array[i]=rand() % 100;
    return array;
}

static char *create_random_array_char(int size_n) {
    char *array = malloc(sizeof(char) * size_n);
    for(int i = 0; i < size_n; i++)
        array[i] = 'A' + rand() % 26;
    return array;
}

int * create_sorted_array_int(int array_len) {
    int * array = create_random_array_int(array_len);
    qsort(array, array_len, sizeof(int), cmp_int);
    return array;
}

char * create_sorted_array_char(int array_len) {
    char * array = create_random_array_char(array_len);
    qsort(array, array_len, sizeof(char), cmp_char);
    return array;
}

int * create_reverse_sorted_array_int(int array_len) {
    int * array = create_random_array_int(array_len);
    qsort(array, array_len, sizeof(int), reverse_cmp_int);
    return array;
}

char * create_reverse_sorted_array_char(int array_len) {
    char * array = create_random_array_char(array_len);
    qsort(array, array_len, sizeof(char), reverse_cmp_char);
    return array;
}

int * create_almost_sorted_array_int(int array_len, int elements_to_ignore) {
    int * array = create_random_array_int(array_len);
    int length = array_len - elements_to_ignore;
    heap_sort(array, length);
    return array;
}

char * create_almost_sorted_array_char(int array_len, int elements_to_ignore) {
    char * array = create_random_array_char(array_len);
    int length = array_len - elements_to_ignore;
    heap_sort(array, length);
    return array;
}