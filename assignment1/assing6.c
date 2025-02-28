#include<stdio.h>
int main()



{
	int num1;


	printf("Enter an integer: ");
    scanf("%d", &num1);
    printf("Multiplication table of %d:\n", num1);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num1, i, num1 * i);
    }
    
    return 0;
}

