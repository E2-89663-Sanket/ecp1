#include <stdio.h>


int findMax(int arr[], int size);

int findMin(int arr[], int size);

int main() 



{
    int size;

    printf("enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    
    printf("enter %d elements:\n", size);
   
	for (int i = 0; i < size; i++)
	{
        printf("element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

   

    int max = findMax(arr, size);
    int min = findMin(arr, size);

    printf("maximum element: %d\n", max);
    printf("minimum element: %d\n", min);

    return 0;
}


int findMax(int arr[], int size)
{
    
	int max = arr[0];
    
	for (int i = 1; i < size; i++)
	{
        if (arr[i] > max)
		{
            max = arr[i];
        }
    }
    return max;
}


int findMin(int arr[], int size)
{
    
	int min = arr[0];
    
	for (int i = 1; i < size; i++)
	{
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

