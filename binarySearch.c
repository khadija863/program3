#include <stdio.h>

// Function to perform binary search
int binarySearch(int array[], int x, int low, int high) {
  // Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (x == array[mid])
      return mid;

    if (x > array[mid])
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int n, x;

  // Input: Size of the array
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  int array[n];

  // Input: Array elements (assume sorted)
  printf("Enter %d elements in sorted order: ", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  // Input: Target element to search
  printf("Enter the element to search for: ");
  scanf("%d", &x);

  // Perform binary search
  int result = binarySearch(array, x, 0, n - 1);

  // Output: Result
  if (result == -1)
    printf("Not found\n");
  else
    printf("Element is found at index %d\n", result);

  return 0;
}

