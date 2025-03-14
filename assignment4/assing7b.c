#include <stdio.h>

void calculate(int a, int b, int *sum, int *product) 
{
    *sum = a + b;
    *product = a * b;
}

int main() 
{
    int num1 = 3, num2 = 4;
    int sum, product;
    
    
    calculate(num1, num2, &sum, &product);
    
    
    printf("sum: %d\n", sum);
    printf("product: %d\n", product);
    
    return 0;
}

