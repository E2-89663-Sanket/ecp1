#include <stdio.h>

int main()


{
    int rows;
    
   
printf("enter the number of rows : ");
scanf("%d", &rows);
    
    
    for (int i = 0; i < rows; i++)
	{
        int coeff = 1;
        for (int j = 0; j <= i; j++)
		{
            printf("%d ", coeff);
            coeff =coeff * (i - j) / (j + 1);
        }
        printf("\n");
    }
    

    return 0;
}

