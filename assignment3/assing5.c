#include <stdio.h>

int main() 


{
    int num, i;
    unsigned long long factorial = 1;
    
    printf("enter a number: ");
    scanf("%d", &num);
    
    printf("factorial of %d: ", num);
    
    i = num;
    while (i > 0)
	{
        factorial *= i;
        if (i == num)
            printf("%d", i);
        else
            printf(" * %d", i);
        i--;
    }
    
    printf(" => %llu\n", factorial);
    
    return 0;
}

