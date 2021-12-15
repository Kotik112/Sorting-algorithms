#ifndef _ARRAY_FACTORY_H_
#define _ARRAY_FACTORY_H_

/* Create an array of length size_n with random 1-99 numbers. */
int * create_random_array_int(int size_n);

/* Create an array of length size_n with random ASCII characters from the alphabet */
static char *create_random_array_char(int size_n);

/* Creates an array of length size_n with random numbers,
            then sorts the array before returning it. */
int * create_sorted_array_int(int size_n);

/* Creates an array of length size_n with random chars,
            then sorts the array before returning it. */
char * create_sorted_array_char(int array_len);

/* Creates an array of length size_n with random numbers,
            then sorts the array in reverse order. */
/* NOT COMPLETE! */
int * create_reverse_sorted_array_int(int array_len);

/* Creates an array of length size_n with random characters,
            then sorts the array in reverse order. */
char * create_reverse_sorted_array_char(int array_len);

/* Creates an array of length size_n with random numbers,
        then sorts most of the array before returning it. */
int * create_almost_sorted_array_int(int array_len, int elements_to_ignore);

/* Creates an array of length size_n with random characters,
        then sorts most of the array before returning it. */
/* NOT COMPLETE! */
char * create_almost_sorted_array_char(int array_len, int elements_to_ignore);

#endif