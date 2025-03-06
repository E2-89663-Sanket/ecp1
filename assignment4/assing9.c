#include <stdio.h>


int isprime(int num);
void primes(int start, int end);


int main()
{
    int num,start, end;

    
    printf("enter a number : ");
    scanf("%d", &num);
    
    if (isprime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    
    printf("enter start and end of range: ");
    scanf("%d %d", &start,&end);
    
    primes(start, end);

    return 0;
}


int isprime(int num)

{
    if (num < 2) return 0; 
    for (int i =2; i * i <= num; i++)
	{ 
        if (num % i== 0)
			return 0; 
    }
    return 1; 
}


void primes(int start, int end) 
{
    printf("prime numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++) 
	{
        if (isprime(i)) 
		{
            printf("%d ", i);
        }
    }

    printf("\n");
}
