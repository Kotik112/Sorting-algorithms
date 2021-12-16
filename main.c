/* 
TODO:
- Fix memory leak.
- Fix almost sorted array.
 */

#include "heapsort.h"
#include "selection_sort.h"
#include "mergesort.h"
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
    printf("\t5. Sort using 'Heap Sort'. - Arman\n");
    printf("\t6. Sort using 'Selection Sort'. - Unn\n");
    printf("\t7. Sort using 'Merge Sort'. - Jakob\n"); 
    printf("\t8. Sort using 'qsort()'.\n");
    printf("\t9. Exit program.\n");
    printf("\n");
}

int get_int_input(const char* text) {
    char input[10]; 
   
    printf(text);
    fgets(input, sizeof(input), stdin);
    return atoi(input);
}

/* Comparison function for qsort(). */
int cmpfunc( const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

/* Utility function to print an array of size "length" */
void print_array(int * array, int length) {
    for (int i = 0; i < length; i++) {
        printf("Elem %d is %d \n", i, array[i]);
    }
}

int main(int argc, char **argv) {
    /* Place holder for current working array. */
    unsigned int * current_array = (int *) malloc(sizeof(int) * MAX_ARRAY_SIZE);
    if(current_array == NULL) {
        fprintf(stderr, "Malloc failed to allocate memory.\n");
        return -1;      
    }
    /* Place holder for length of current working array. */
    int array_len;
    /* Variables for storing the time delta for the storting algorithms. */
    clock_t start_t, end_t, total_t;

    while(1) {
        print_menu();
        int user_input = get_int_input("Enter you choice (1-10): ");

        switch (user_input)
        {
        /* Create random array. */
        case 1:
            array_len = get_int_input("Input the length of the array: ");
            if (array_len > MAX_ARRAY_SIZE) {
                fprintf(stderr, "The size of the array cannot exceeen 1 billion.\n");
                return -1;
            }
            create_random_array_int(current_array, array_len);
            //print_array(current_array, array_len);
            break;

        /* Create sorted array. */
        case 2:
            array_len = get_int_input("Input the length of the array: ");
            if (array_len > MAX_ARRAY_SIZE) {
                fprintf(stderr, "The size of the array cannot exceeen 1 billion.\n");
                return -1;
            }
            create_sorted_array_int(current_array, array_len);
            //print_array(current_array, array_len);
            break;

        /* Create reversed array. */
        case 3:     
            array_len = get_int_input("Input the length of the array: ");
            if (array_len > MAX_ARRAY_SIZE) {
                fprintf(stderr, "The size of the array cannot exceeen 1 billion.\n");
                return -1;
            }
            create_reverse_sorted_array_int(current_array, array_len);
            //print_array(current_array, array_len);
            break;

        /* Create "almost" sorted array. */
        case 4:
            array_len = get_int_input("Enter the length of the array: ");
            if (array_len > MAX_ARRAY_SIZE) {
                fprintf(stderr, "The size of the array cannot exceeen 1 billion.\n");
                return -1;
            }
            int elements_to_ignore = get_int_input("Enter the number of elements to not sort from the end of the array: ");
            if (elements_to_ignore >= array_len) {
                fprintf(stderr, "Error! Elements to ignore cannot exceed the array length.\n");
                return -1;
            }
            create_almost_sorted_array_int(current_array, array_len, elements_to_ignore);
            //print_array(current_array, array_len);
            break;

        /* Sort using 'Heap Sort' */
        case 5:
            start_t = (double) clock();
            heap_sort(current_array, array_len);
            end_t = (double) clock();
            total_t = difftime(end_t, start_t);
            printf("Time taken to sort %d elements using 'Heap Sort': %f seconds.\n", array_len, (double) total_t / 1000);
            current_array = NULL;
            //print_array(current_array, array_len);
            break;

        /* Sort using 'Selection Sort' - Unn*/
        case 6:
            start_t = (double) clock();
            selection_sort_int(current_array, array_len);
            end_t = (double) clock();
            total_t = difftime(end_t, start_t);
            printf("Time taken to sort %d elements using 'Selection sort': %f seconds.\n", array_len, (double) total_t / 1000);
            current_array = NULL;
            //print_array(current_array, array_len);
            break;

        /* Sort using 'Merge Sort' */
        case 7:
            start_t = (double) clock();
            merge_sort(current_array, current_array[0], array_len);
            end_t = (double) clock();
            total_t = difftime(end_t, start_t);
            printf("Time taken to sort %d elements using 'Merge Sort': %f seconds.\n", array_len, (double) total_t / 1000);
            current_array = NULL;
            break;

        /* Sort using 'qsort()' */
        case 8:
            start_t = (double) clock();
            qsort(current_array, array_len, sizeof(int), cmpfunc);
            end_t = (double) clock();
            total_t = difftime(end_t, start_t);
            printf("Time taken to sort %d elements using 'qsort()': %lf seconds.\n", array_len, (double) total_t / 1000);
            current_array = NULL;
            break;

        /* Exit program. */
        case 9:
            printf("Exiting program!\n");
            free(current_array);
            exit(0);
        
        default:
            fprintf(stderr, "Invalid choice.\nYour choices are 1 to 9.\n");
            break;
        }
    }
    return 0;
}