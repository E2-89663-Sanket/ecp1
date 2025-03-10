#include <stdio.h>

// Function declarations
void selectionSort(int arr[], int size);
void bubbleSort(int arr[], int size);
void printArray(int arr[], int size);

int main() 


{
    int size, choice;

    printf("enter size the array: ");
    scanf("%d", &size);

    int arr[size];

    
    printf("enter %d element:\n", size);
    for (int i = 0; i < size; i++)


	{
        printf("element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    printf("\nshoose sorting method:\n");
    printf("1. selection sort\n");
    printf("2. bubble sort\n");
    printf("enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        selectionSort(arr, size);
        printf("\narray sorted slection sort:\n");
    }
	
	else if (choice == 2) 
	{
        bubbleSort(arr, size);
        printf("\narray sorted bubble sort:\n");
    }
	
	else
	{
        printf("\ninvalid choice!\n");
        return 1;
    }

    
    printArray(arr, size);

    return 0;
}


void selectionSort(int arr[], int size) 

{
    for (int i = 0; i < size - 1; i++) 
{
        int minIndex = i;
        for (int j = i + 1; j < size; j++) 
{
            if (arr[j] < arr[minIndex])
{
                minIndex = j;
            }
        }
        
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}


void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
	

{
        for (int j = 0; j < size - i - 1; j++)
{
            if (arr[j] > arr[j + 1])
{
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

