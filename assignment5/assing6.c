#include <stdio.h>

int removeDuplicates(int arr[], int n);


int main()


{
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    n = removeDuplicates(arr, n);

    printf("after removing duplicates:\n");
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("number of unique elements: %d\n", n);

    return 0;
}

int removeDuplicates(int arr[], int n) 
{
    if (n == 0 || n == 1) 
	{
        return n;
    }

    int temp[n];
    int j = 0;

    for (int i = 0; i < n - 1; i++) 
	{
        if (arr[i] != arr[i + 1]) 
	{
            temp[j++] = arr[i];
        }
    }

   
    temp[j++] = arr[n - 1];

    
    for (int i = 0; i < j; i++)
	{
        arr[i] = temp[i];
    }


	return j; 
}

