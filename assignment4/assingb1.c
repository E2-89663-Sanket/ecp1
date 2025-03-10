#include <stdio.h>


int factorial(int n);



int main() 


{
    int num;

    printf("enter positive integer   : ");
    scanf("%d", &num);

    if (num < 0)
	{
        printf("factorial not defined for negative numbers\n");
    }
	else
	{
        printf("factorial %d is %d\n", num, factorial(num));
    }

    return 0;
}

int factorial(int n) 
{
    if (n == 0 || n == 1) 
	{
        return 1; 
    }
	else
	{
        return n * factorial(n - 1); 

	}
}


