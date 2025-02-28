#include <stdio.h>

int main() {
    int num1, num2, num3;
    float average;

   
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    average = (num1 + num2 + num3) / 3.0;

    printf("The average is: %.5f\n", average);

    return 0;
}

