
#include "mergesort.h"

static void merge(int *array, int left, int mid, int right) {
  int i, j, cur;
  int n1 = mid - left + 1;
  int n2 = right - mid;

  int left_tmp[n1], right_tmp[n2];

  for (i = 0; i < n1; i++)
    left_tmp[i] = array[left + i];
  for (j = 0; j < n2; j++)
    right_tmp[j] = array[mid + 1 + j];

  i = 0, j = 0, cur = left;
  while (i < n1 && j < n2) {
    if (left_tmp[i] <= right_tmp[j]) {
      array[cur] = left_tmp[i];
      i++;
    } else {
      array[cur] = right_tmp[j];
      j++;
    } cur++;
  }
  while (i < n1) {
    array[cur] = left_tmp[i];
    i++, cur++;
  }
  while (j < n2) {
    array[cur] = right_tmp[j];
    j++, cur++;
  }
}
void merge_sort(int *array, int left, int right) {
  if (left < right) {
    int mid = left + (right - left) / 2;
    merge_sort(array, left, mid);
    merge_sort(array, mid + 1, right);
    merge(array, left, mid, right);
  }
}