// Merge sort in C
#include "merge_sort.h"

/*merge skelleton and quite broken atm */

static void merge(int *arr, int start, int mid, int end) {

  int n1 = mid - start + 1;
  int n2 = start - end;
  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[start + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[mid + 1 + j];

  int i = 0, j = 0, cur = start;

  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[cur] = L[i];
      i++;
    } else {
      arr[cur] = M[j];
      j++;
    }
    cur++;
  }
  while (i < n1) {
    arr[cur] = L[i];
    i++, cur++;
  }

  while (j < n2) {
    arr[cur] = M[j];
    j++, cur++;
  }
}

static void sort(int *array, int left, int right) {
  if (left < right) {
    int mid = left + (right - left) / 2;
    sort(array, left, mid);
    sort(array, mid + 1, right);
    merge(array, left, mid, right);
  }
}

int merge_sort(int *array, int start, int size_n) {
  merge_sort(array, 0, size_n - 1);
}