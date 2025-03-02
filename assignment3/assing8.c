#include <stdio.h>

int main() 

{
    int num, i = 2;
    
    printf("enter a number  : ");
    
	scanf("%d", &num);
    
    printf("%d = ", num);
    
    int first = 1;
    

	while (num > 1)
	{
        while (num % i == 0)
		{
            if (first)
			{
                printf(" * ");
            }
            printf("%d", i);
            num /= i;
            first = 0;
        }
        i++;
    }
    
    printf("\n");


	return 0;
}
