#include <stdio.h>

int linearSearch(int arr[], int n, int target);

int main() 
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    
	int n = sizeof(arr) / sizeof(arr[0]);
    
	int target;

    printf("enter the number to search: ");
    scanf("%d", &target);

    int index = linearSearch(arr, n, target);

    if (index != -1)
	{
        printf("element %d found index %d\n", target, index);
    } else {
        printf("element %d not found inarray\n", target);
    }

    return 0;
}

int linearSearch(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
	{
        if (arr[i] == target)
		{
            return i; 
        }
    }
    return -1; 
}

