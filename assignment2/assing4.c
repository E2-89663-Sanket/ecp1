#include <stdio.h>




int main()

{
    int num1, num2, max;
    printf("enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
        max = num1;
    else
        max = num2;
    printf("maxi using if-else: %d\n", max);
        max = (num1 > num2) ? num1 : num2;
    printf("maxi using conditional operator: %d\n", max);









    return 0;
}
