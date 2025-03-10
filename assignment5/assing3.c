#include <stdio.h>


void reverse_a(int arr[], int length );


int main() 
{
    int arr[5];
    
	int length = sizeof(arr) / sizeof(arr[0]);

  
    printf("enter 5 elements:\n");
  
	for (int i = 0; i < length; i++) 
	{
       printf("element %d: ", i + 1);
       
	   scanf("%d", &arr[i]);
    }

  
    reverse_a(arr,length);

  
    printf("Reversed array:\n");
    
	for (int i= 0; i < length; i++)
	{
        printf("%d ", arr[i]);
    }
    
	printf("\n");

    return 0;
}


void reverse_a(int arr[] , int length)

{
       int start = 0; 
       int end = length - 1;
       int temp;
   
       
       while (start < end)
	   {
          
         temp = arr[start];
          arr[start] = arr[end];
          arr[end] = temp;
 
          
          start++;
         end--;
     }
}

