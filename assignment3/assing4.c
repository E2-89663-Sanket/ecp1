#include <stdio.h>

int main() 
{
    int num, i = 1;
    unsigned long long factorial = 1;
    
    printf("enter a number: ");
    scanf("%d", &num);
    
    printf("factorial of %d: ", num);
    
    while (i <= num)


	{
        factorial *= i;
        if (i == 1)
            printf("%d", i);
        else
            printf(" * %d", i);
        i++;
    }
    
    printf(" => %llu\n", factorial);
    
    return 0;
}

