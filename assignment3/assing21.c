#include <stdio.h>

int main()
{
    int n, count = 0, num;
    printf("enter a number: ");
    scanf("%d", &n);
    num = n + 1;
    printf("5 prime numbers %d: ", n);
    
    while (count < 5)
	{
        int prime = 1;
        for (int i = 2; i * i <= num; i++) 
		{
            if (num % i == 0)
			{
                prime = 0;
                break;
            }
        }
         if (prime && num > 1)
		{
            printf("%d ", num);
            count++;
        }
num++;
    }
printf("\n");





    return 0;
}

