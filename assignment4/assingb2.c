#include <stdio.h>


int power(int base, int exp);




int main() 

{
    int base, exp;

    printf("enter base: ");
    scanf("%d", &base);
   
	printf("enter exponent: ");
    scanf("%d", &exp);

    if (exp < 0) 
	{
        printf("exponent should be non-negative integer\n");
    }
	else 
	{
        printf("%dis  %d= %d\n", base, exp, power(base, exp));
    }

    return 0;
}







int power(int base, int exp) 
{
    if (exp == 0)
	{
        return 1;
    } 
	else
	{
        return base * power(base, exp - 1); 
    }
}


