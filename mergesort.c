#include "mergesort.h"

static void msort(int i, int j, int *array, int *temp) {
  if (j <= i)
    return;
  int mid = (i + j) / 2;
  msort(i, mid, array, temp);
/*left sort recursively*/
  msort(mid + 1, j, array, temp);
/*right sort recursively*/
  int left = i;
/*idx beginning left sub array*/
  int right = mid + 1;
/*idx beginning right sub array*/
  int cur = 0;
  for (cur = i; cur <= j; cur++) {
    if (left == mid + 1) {
/*if left has reached its limit*/
      temp[cur] = array[right];
      right++;
		} else if (right == j + 1) {
/*if right has reached its limit*/
			temp[cur] = array[left];
    	left++;
  	} else if (array[left] < array[right]) {
/*if left points to smaller element*/
    	temp[cur] = array[left];
    	left++;
  	} else {
/*else right points to smaller element*/
    	temp[cur] = array[right];
    	right++;
  	}
	}
	for (cur = i; cur <= j; cur++)
		array[cur] = temp[cur];
/*copy from temp to array*/
}

void merge_sort(int *array, int array_len) {
	int *temp = (int *) malloc(sizeof(int) * array_len);
	msort(0, array_len - 1, array, temp);
	free(temp);
}