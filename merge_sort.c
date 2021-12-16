
#include "merge_sort.h"

void merge_sort(int i, int j, int *array, int *temp) {
	if (j <= i)
		return;
	int mid = (i + j) / 2;
	merge_sort(i, mid, array, temp);
	merge_sort(mid + 1, j, array, temp);

	int left = i, right = mid + 1, cur = 0;

	for (cur = i; cur <= j; cur++) {
		if (left == mid + 1) {
			temp[cur] = array[right];
			right++;
		} else if (right == j + 1) {
			temp[cur] = array[left];
			left++;
		} else if (array[left] < array[right]) {
			temp[cur] = array[left];
			left++;
		} else {
			temp[cur] = array[right];
			right++;
		}
	}
	for (cur = i; cur <= j; cur++)
		array[cur] = temp[cur];
}