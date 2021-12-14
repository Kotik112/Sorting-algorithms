#include "heapsort.h"
#include "selection_sort.h"
#include "array_factory.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_menu(void) {
    printf("*****\t MAIN MENU \t*****\n\n");
    printf("\t1. Create random array.\n");
    printf("\t2. Create sorted array.\n");
    printf("\t3. Create reversed array.\n");
    printf("\t4. Create almost sorted array.\n");
    printf("\t6. Sort using 'Heap Sort'. - Arman\n");
    printf("\t7. Sort using 'Selection Sort'. - Unn\n");
    printf("\t8. Sort using 'Merge Sort'. - Jakob\n"); 
    printf("\t9. Sort using 'qsort()'.\n");
    printf("\t10. Exit program.\n");
    printf("\n");
}

int get_int_input(const char* text) {
    char input[10]; 
   
    printf(text);
    fgets(input, sizeof(input), stdin);
    return atoi(input);
}

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
        /* For testing purposes. */
        for(int i = 0; i < sizeof(array_size); i++) {
            printf("%d ", array_size[i]);
            printf("\n");
        }
    }

 
    while(1) {
        print_menu();
        int user_input = get_int_input("Enter you choice (1-10): ");

        switch (user_input)
        {
        /* Create random array. */
        case 1:
            /* code */
            break;

        /* Create sorted array. */
        case 2:
            /* code */
            break;

        /* Create reversed array. */
        case 3:
            /* code */
            break;

        /* Create "almost" sorted array. */
        case 4:
            /* code */
            break;

        /* Sort using 'Heap Sort' */
        case 5:
            /* code */
            break;

        /* Sort using 'Heap Sort' */
        case 6:
            /* code */
            break;

        /* Sort using 'Heap Sort' */
        case 7:
            /* code */
            break;

        /* Sort using 'Heap Sort' */
        case 8:
            /* code */
            break;

        /* Sort using 'Heap Sort' */
        case 9:
            /* code */
            break;

        /* Exit program. */
        case 10:
            printf("Exiting program!\n");
            exit(0);
        
        default:
            break;
        }
    }
/*    clock_t start_t, end_t, total_t;
    
    int size_n = 0;

    printf("Enter array size: ");
    scanf("%d", &size_n);

    int * array = create_random_array(size_n);
    //print_array(array, size_n);

     printf("Press any key to start the timer and sorting.\n");
    int temp;
    scanf("%d", &temp);

    // Timer start
    start_t = (double) clock();

    //Sort using heap sort
    heap_sort(array, size_n);

    // Timer end
    end_t = (double) clock();
    printf("SORTED!\n");
    free(array);
    total_t = difftime(end_t, start_t);
    printf("Total time: %f.\n",(double) total_t / 1000); */
    return 0;
}