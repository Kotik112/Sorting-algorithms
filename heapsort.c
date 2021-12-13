// Heapsort with complexity of O(n log n)

#include <stdio.h>

#define RUN_TESTS 0

/** Given an index in an array with a heap, return its parent index. */
static int heap_node_parent(int child_idx) {
    return (child_idx-1)/2;
}

/** Given an index in an array with a heap, return its left child's index. */
static int heap_node_left_child(int parent_idx) {
    return 2*parent_idx+1;
}

/** Given an index in an array with a heap, return its right child's index. */
static int heap_node_right_child(int parent_idx) {
    return 2*parent_idx+2;
}

/** Swap two elements within an array. */
static void array_swap(int* array, int idx_a, int idx_b) {
    int temp = array[idx_b];
    array[idx_b] = array[idx_a];
    array[idx_a] = temp;
}

/** Turns an array into a "tree" of sorts, where the parent is always larger 
    than the children. */ 
static void heapify(int* array, int length, int idx) {
    //int root = array[0]; 
    int largest = idx; //initialize as root
    int left = heap_node_left_child(idx);
    int right = heap_node_right_child(idx);


    // If left child exist and is larger than current largest, make left idx the largest
    if (left < length && array[left] > array[largest]) {
        largest = left;
    }

    // Same, but with the the right child
    if (right < length && array[right] > array[largest]) {
        largest = right;
    }

    if(largest != idx) {
        array_swap(array, idx, largest);
        heapify(array, length, largest);
    }
}


void heap_sort(int* array, int length) {
    // Build heap from middle of the array to the beginning (effictively doing the whole array)
    for (int i = length / 2 -1; i >= 0; i--) {
        heapify(array, length, i);
    }
    
    // Move from end of array forward progressively
    for (int end = length - 1; end >= 0; end--) {
        // Put biggest number (at the front) to the end
        array_swap(array, 0, end);
        
        //Heapify the rest of the array, again. 
        heapify(array, end, 0);
    }
    
}

/* Utility function to print an array of size "length" */
void print_array(int* array, int length) {
    for (int i = 0; i < length; i++) {
        printf("Elem %d is %d \n", i, array[i]);;
    }
}
    

/* int main(int argc, char *argv) {
    

    if (RUN_TESTS) {

        // ----------------------------------

        printf("Testing node's children\n");

        if (heap_node_left_child(0) != 1) {
            printf("Error 1 - Node at index 0 should have left child at idx 1");
            return -1;
        }

        if (heap_node_right_child(0) != 2) {
            printf("Error 2 - Node at index 0 should have left child at idx 2");
            return -1;
        }

        if (heap_node_left_child(2) != 5) {
            printf("Error 3 - Node at index 2 should have left child at idx 5");
            return -1;
        }

        if (heap_node_right_child(2) != 6) {
            printf("Error 4 - Node at index 2 should have right child at idx 6");
            return -1;
        }

        printf("Done!\n\n");


        // ----------------------------------


        printf("Testing node's parent\n");

        if (heap_node_parent(1) != 0) {
            printf("Error 5 - Node at index 0 should be parent for left child at idx 1");
            return -1;
        }

        if (heap_node_parent(2) != 0) {
            printf("Error 6 - Node at index 0 should be parent for left child at idx 2");
            return -1;
        }

        if (heap_node_parent(5) != 2) {
            printf("Error 7 - Node at index 2 should be parent for left child at idx 5");
            return -1;
        }

        if (heap_node_parent(6) != 2) {
            printf("Error 8 - Node at index 2 should be parent for right child at idx 6");
            return -1;
        }

        printf("Done!\n\n");

    
        // ----------------------------------


        printf("Testing heapify.\n");

        int test_heap[] = {5, 10, 12, 1, 9, 4, 6, 45, 3, 2}; // 10 elems

        for (int i = 4; i >= 0; i--) {
            heapify(test_heap, 10, i);
        }

        for (int i = 0; i < 10; i++) {
            
        }

        printf("Done!\n\n");
        
        // ----------------------------------


        printf("Testing sort.\n");

        int test_heap_2[] = {8, 5, 10, 7, 12, 13, 1, 9, 20, 4, 31, 6, 41, 45, 3, 200}; // 16 elems

        heap_sort(test_heap_2, 16);

        print_array(test_heap_2, 16);
        
        printf("Done!\n\n");

        size_t length = sizeof(test_heap_2, test_heap_2[0]);
        print_array(test_heap_2, length); 
    }


       
    return 0;
}
 */