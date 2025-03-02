#include <stdio.h>

int main()

{
    char ch;
    int num, i = 0;
    
   
    printf("enter a character: ");
    scanf(" %c", &ch);
    
    printf("enter a number: ");
    scanf("%d", &num);
    
   
    while (i < num)

	{
        printf("%c", ch);
        i++;
    }
    
    printf("      \n");


    return 0;
}

