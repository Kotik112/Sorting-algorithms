#ifndef _ARRAY_FACTORY_H_
#define _ARRAY_FACTORY_H_

/* Create an array of length array_len with random 1-99 numbers. */
int * create_random_array_int(int array_len);

/* Creates an array of length array_len with random numbers,
            then sorts the array before returning it. */
int * create_sorted_array_int(int array_len);

/* Creates an array of length array_len with random numbers,
            then sorts the array in reverse order. */
/* NOT COMPLETE! */
int * create_reverse_sorted_array_int(int array_len);

/* Creates an array of length array_len with random numbers,
        then sorts most of the array before returning it. */
int * create_almost_sorted_array_int(int array_len);   
int * create_almost_sorted(int array_len);

#endif