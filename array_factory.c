#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "heapsort.h"
#include "array_factory.h"

int *create_array(int size_n) {
    int * array = malloc(sizeof(int) * size_n);
    for(int i = 0; i < size_n; i++)
       array[i]=rand() % 100;
    return array;
}

