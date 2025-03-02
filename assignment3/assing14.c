#include <stdio.h>

int main() 
{
   
	int n, i, prime = 1;
    
  
    printf("enter number => ");
    scanf("%d", &n);
    
   
   if (n <= 1)
	{
        prime = 0;
    } else
	{
        for (i = 2; i < n; i++)
		{
            if (n % i == 0)
			{
                prime = 0;
                break;
            }
        }
    }
    
    
    if (prime)
        printf("%d is prime number \n", n);
    else
        printf("%d is not prime number \n", n);


    return 0;
}

