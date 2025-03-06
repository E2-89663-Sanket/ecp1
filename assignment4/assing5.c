#include <stdio.h>


void printChar(char ch, int n);


int main()
{
    char ch;
    int n;

    printf(" enter a character: ");
    scanf(" %c",&ch);
    
    printf("enter the numberfor char: ");
    scanf("%d", &n);

   
    printchar(ch, n);

    return 0;
}



void printchar(char ch, int n)
{
    for (int i =0; i< n; i++) 
	{
        printf("%c", ch);
    }
    printf("\n"); 
}
