#include <stdio.h>


int getNextFibonacci();

int main() 
{
    int n;

    printf("enter number of fibonacci no : ");
    scanf("%d", &n);

    printf("fibonacci serie :\n");
    for (int i = 0; i < n; i++)
	{
        printf("%d ", getNextFibonacci());
    }

    printf("\n");

    return 0;
}



int getNextFibonacci() 
{
    
	static int first = 0, second = 1; 
    
	int next;

    if (first == 0)
	{
       
		next = first;
        
		first = 1;
        
		return next;
    }

    next = first + second;
    first = second;
    second = next;

    return next;
}

