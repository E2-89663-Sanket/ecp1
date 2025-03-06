#include <stdio.h>




void fibonacci(int n);

int main() {
    int n;

    
    printf("enter the number : ");
    scanf("%d",&n);

    
    if (n <= 0)
	{
        printf("please enter + integer.\n");
    } else 
	{
       
        fibonacci(n);
    }

    return 0;
}


void fibonacci(int n)
{
    int first = 0, second = 1, next;

    printf("fibonacci Series:");

    for (int i= 0; i < n;i++)
	{
        printf("%d ",first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}



