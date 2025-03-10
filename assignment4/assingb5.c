#include <stdio.h>

void printBinary(int n);


int main() 
{
    int num;

    printf("enter a  number: ");
    scanf("%d", &num);

    printf("binary of %d is : ", num);
    if (num == 0) 
	{
        printf("0");
    }
	else
	{
        printBinary(num);
    }
    printf("\n");

    return 0;
}


void printBinary(int n) 
{
    if (n > 0) 
	{
        printBinary(n / 2); 
        printf("%d", n % 2); 
    }
}

