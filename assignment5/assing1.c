#include <stdio.h>



int main() 
{
    int marks[5];
   
	int total = 0;
    
	float avr;

    
    printf("enter marks for five subjects:\n");
    
	for (int i = 0; i < 5; i++)
	{
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i]; 
    }

   
    avr = total / 5.0;

    
    printf("total marks: %d\n", total);
    printf("average marks: %.2f\n", avr);

    return 0;
}

