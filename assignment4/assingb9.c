#include <stdio.h>


int calculate(char operator, int a, int b, int *result) 
{
    switch (operator) 
	{
        case '+':
            *result = a + b;
            return 0; 
        case '-':
            *result = a - b;
            return 0; 
        case '*':
            *result = a * b;
            return 0; 
        case '/':
            if (b == 0) 
			{
                return -1; 
            }
            *result = a / b;
            return 0; 
        default:
            return -2; 
    }
}



int main() 
{
    int num1, num2, result;
    char operator;
    
    printf("enter first number: ");
    scanf("%d", &num1);
    
    printf("enter second number: ");
    scanf("%d", &num2);
    
    printf("enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    
    int status = calculate(operator, num1, num2, &result);
    
    if (status == 0) 
	{
        printf("result: %d\n", result);
    }
	else if (status == -1) 
	{
        printf("error: division by zero not allowed.\n");
    }
	else if (status == -2) 
	{
        printf("error: Invalid.\n");
    }
    
    return 0;
}

