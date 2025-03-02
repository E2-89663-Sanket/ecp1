#include <stdio.h>

int main() 
{
    int num, i;
    
    printf("enter a number  : ");
    scanf("%d", &num);
    
    printf("all factors excluding %d : ", num);
    
    for (i = 1; i < num; i++) 
	{
    if (num % i == 0)
	{
    if (i > 1)
	{
    printf("  ");
            }
            printf("%d", i);
        }
    }
    
    printf("\n");
    



    return 0;
}

