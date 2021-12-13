#include "heapsort.h"
#include "array_factory.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

    int size_n = 0;

    printf("Enter array size: ");
    scanf("%d", &size_n);

    int *array = create_array(size_n);
    print_array(array, size_n);

    heap_sort(array, size_n);
    print_array(array, size_n);

    free(array);

    return 0;
}