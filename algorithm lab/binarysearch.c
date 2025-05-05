#include <stdio.h>

int binarysearch(int arr[], int left, int right, int x)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main()
{
    int n, x, arr[100];

    // Taking input for array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Taking input for array elements
    printf("Enter %d sorted elements: \n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Taking input for the element to search
    printf("Enter the element to search: ");
    scanf("%d", &x);

    // Calling binary search function
    int result = binarysearch(arr, 0, n - 1, x);

    // Displaying result
    if (result == -1)
        printf("Element is not present in the array.\n");
    else
        printf("Element is present at index %d.\n", result);

    return 0;
}
