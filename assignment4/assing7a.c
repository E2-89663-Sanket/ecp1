#include <stdio.h>


int sum_res;
int product_res;

void calculate(int a, int b, int *sum, int *product) 
{
    *sum = a + b;
    *product = a * b;
}

int main() 
{
    int num1 = 3, num2 = 4;
    
    
    calculate(num1, num2, &sum_res, &product_res);
    
    
    printf("sum: %d\n", sum_res);
    printf("product: %d\n", product_res);
    
    return 0;
}

