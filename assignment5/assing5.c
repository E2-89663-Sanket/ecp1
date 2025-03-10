#include <stdio.h>



void findMaxMin(int arr[], int size, int *max, int *min);


int main() 



{
    int size;
    
    printf("enter size the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    
    printf("enter %d elements:\n", size);
    for (int i = 0; i < size; i++) 
	{
        printf("element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    int max, min;
    
    
    findMaxMin(arr, size, &max, &min);
    
    
    printf("maximum element: %d\n", max);
    printf("minimum element: %d\n", min);
    
    return 0;
}


void findMaxMin(int arr[], int size, int *max, int *min)

{
    *max = *min = arr[0]; 
    
    for (int i = 1; i < size; i++) 
{
        if (arr[i] > *max)
{
            *max = arr[i];
        }
        if (arr[i] < *min) 
{
            *min = arr[i]; 
        }
    }
}

