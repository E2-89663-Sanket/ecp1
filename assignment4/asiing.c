#include <stdio.h>

int factorial(int n);





int main() 
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    
    if (num < 0) 
	{
        printf("factorial not defined for - number\n");
    } else {
        printf("factorial %d is %d\n", num, factorial(num));
    }
    
    return 0;
}





int factorial(int n)
{
    int fact= 1;
    for (int i= 1; i <= n; i++)
	{
        fact*= i;
    }
    return fact;
}
