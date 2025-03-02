#include <stdio.h>

int main() 
{
    int n, i;
    long factorial = 1;
    
    
    printf("enter a positive integer: ");
    scanf("%d", &n);
    
    
    if (n < 0) 
	{
        printf("factorial of negative number not  exist.\n");
    }
	else 
	{
        
        for (i =1; i <= n;i++) 
		{
            factorial *= i;
        }
        
        printf("factorial of %d is %ld\n", n, factorial);
    }
    
    return 0;
}

