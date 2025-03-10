#include <stdio.h>


void accept(int arr[], int size);
void print(int arr[], int size);

int main() 
{
    int size;
    
    printf("enter size of array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    accept(arr, size); 
    print(arr, size);  
    
    return 0;
}

void accept(int arr[], int size)
{
    printf("enter %d element:\n", size);
    for (int i = 0; i < size; i++)
	{
        printf("element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void print(int arr[], int size)
{
    printf("array elementa are:\n");
    for (int i = 0; i < size; i++)
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}
