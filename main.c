#include "heapsort.h"
#include "array_factory.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv) {
    clock_t start_t, end_t, total_t;
    
    int size_n = 0;

    printf("Enter array size: ");
    scanf("%d", &size_n);

    int *array = create_array(size_n);
    //print_array(array, size_n);

    printf("Press any key to sort.\n");
    int temp;
    scanf("%d", &temp);
    start_t = (double) clock();
    heap_sort(array, size_n);
    //print_array(array, size_n);
    end_t = (double) clock();
    printf("SORTED!\n");
    free(array);
    total_t = difftime(end_t, start_t);
    printf("Total time: %f.\n",(double) total_t / 1000);
    return 0;
}