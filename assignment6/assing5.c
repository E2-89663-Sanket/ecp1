#include<stdio.h>


int my_atoi(const char* str) 
{
    int num = 0;
    int sign = 1;
    int i = 0;
    if (str[0] == '-')
	{
        sign = -1;
    }
    while (str[i] != '\0')
	{
        if (str[i] >= '0' && str[i] <= '9') 
		{
            num = num * 10 + (str[i] - '0');
        } else {
            break;
        }
        i++;
    }
    return sign * num;
}

int main() 
{
    char str[] = "12345";
    int num = my_atoi(str);
    printf("%d\n", num); 

    char str2[] = "-6789";
    int num2 = my_atoi(str2);
    printf("%d\n", num2); 

    return 0;
}
