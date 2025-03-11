#include <stdio.h>

int binarySearch(int arr[], int n, int target);

int main() 
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("enter the number: ");
    scanf("%d", &target);

    int index = binarySearch(arr, n, target);

    if (index != -1)
    {
        printf("element %d found index %d\n", target, index);
    } 
    else 
    {
        printf("element %d not found array\n", target);
    }

    return 0;
}

int binarySearch(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid; 
        }
        else if (arr[mid] < target)
        {
            left = mid + 1; 
        }
        else
        {
            right = mid - 1; 
        }
    }
    return -1; 
}

