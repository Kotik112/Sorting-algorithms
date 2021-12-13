#include "heapsort.h"
#include "array_factory.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv) {
    int array_size[4];
    if(argc < 1 || argc > 5) {
        fprintf(stderr, "Error! You must specify 1-5 arguments for the length of the arrays.\n");
        return -1;
    }
    else{
        for(int i = 1; i < argc; i++) {
            array_size[i-1] = atoi(argv[i]);
        }
        /* For testing purposes */
        for(int i = 0; i < sizeof(array_size)/sizeof(array_size[0]); i++) {
            printf("%d ", array_size[i]);
            printf("\n");
        }
    }

    clock_t start_t, end_t, total_t;
    
    int size_n = 0;

    printf("Enter array size: ");
    scanf("%d", &size_n);

    int * array = create_random_array(size_n);
    //print_array(array, size_n);

    printf("Press any key to start the timer and sorting.\n");
    int temp;
    scanf("%d", &temp);

    /* Time start */
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