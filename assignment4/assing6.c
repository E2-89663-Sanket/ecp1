#include <stdio.h>


void printPascalTriangle(int n);

int main() 

{
    int rows;

    printf("enter number of rows for pascal triangle  : ");
    scanf("%d", &rows);

    
    printPascalTriangle(rows);

    return 0;
}


void printPascalTriangle(int n) 
{
    for (int i = 0; i < n; i++)
	{
        int value = 1;

        
       
        for (int j = 0; j <= i; j++)
		{
            printf("%4d", value);
            
            value = value * (i - j) / (j + 1);
        }
        printf("\n");
    }
}

