#include <stdio.h>
#include <math.h>

int main() 



{
    int num, original, sum = 0, rev = 0, digit, count = 0, temp, armstrong_sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num;
    temp = num;
    
    
    while (temp > 0)
{
     digit = temp % 10;
     sum += digit;
        temp /= 10;
    }
    printf("Sum of digits: %d\n", sum);
    
    
    temp = num;
    while (temp > 0)
	{
     digit = temp % 10;
       	 rev = rev * 10 + digit;
  temp /= 10;
    }
    printf("reversed number: %d\n", rev);
    
    




    if (num == rev)
        printf("%d is  numeric palindrome\n", num);
    else
        printf("%d is not  numeric palindrome\n", num);
    
   



    temp = num;
    while (temp > 0)
	{ 
        count++;
        temp /= 10;
    }
    
    temp = num;
    while (temp > 0)
	{
        digit = temp % 10;
        armstrong_sum += pow(digit, count);
        temp /= 10;
    }
    
    if (armstrong_sum == original)
        printf("%d is armstrong number\n", num);
    else
        printf("%d is not armstrong number\n", num);
    
    return 0;
}

