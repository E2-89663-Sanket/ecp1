#include <stdio.h>

int main()


{
    int a, b, temp;
     
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("\n");
    while (b != 0) 
	{
        printf("%d %% %d = %d\n", a, b, a % b);
        temp = b;
        b = a % b;
        a = temp;
    }
    
    printf("gcd of the given numbers is %d    \n",   a);




    return 0;
}
