#include <stdio.h>

int main()

{
   
	int n, first = 1, second = 1, next;
    
   
    printf("enter the number: ");
    scanf("%d", &n);
    
   
if (n <= 0) 
	{
        printf(" enter positive integer.\n");
        return 1;
    }
    
   

    printf("fibonacci Series: ");
    for (int i = 1; i <= n; i++) 
	{
        printf("%d", first);
        if (i < n) 
		{
            printf(", ");
        }
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
    
    return 0;
}

