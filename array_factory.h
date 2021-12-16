#ifndef _ARRAY_FACTORY_H_
#define _ARRAY_FACTORY_H_

#define MAX_ARRAY_SIZE 1000000000 // one billion.

/* Create an array of length size_n with random 1-99 numbers. */
void create_random_array_int(int * array, int array_len);

/* Creates an array of length size_n with random numbers,
            then sorts the array before returning it. */
void create_sorted_array_int(int * array, int array_len);

/* Creates an array of length size_n with random numbers,
            then sorts the array in reverse order. */
void create_reverse_sorted_array_int(int * array, int array_len);

/* Creates an array of length size_n with random numbers,
        then sorts most of the array before returning it. */
/* Note! Possibly bugged! */
void create_almost_sorted_array_int(int * array, int array_len, int elements_to_ignore);


#endif