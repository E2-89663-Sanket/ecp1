#include <stdio.h>

int main() 


{
    int choice;
    double num1, num2, result;

    do 
	{
        
printf("\n calculator\n");
printf("1. addition\n");
printf("2. subtraction\n");
printf("3. multiplication\n");
printf("4. division\n");
printf("5. exit\n");
printf("enter your choice ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4)
		{
            
            printf("enter two numbers ");
            scanf("%lf %lf", &num1, &num2);
        }

        switch (choice)
		{
            case 1:
                result = num1 + num2;
                printf("result: %.2lf\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("result %.2lf\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("result: %.2lf\n", result);
                break;


            case 4:
                
				if (num2 != 0)
                    result = num1 / num2;
                else
				{
                    printf("error division by zero not\n");
                    continue;
                }
                printf("result: %.2lf\n", result);
                break;



            case 5:
                printf("exiting the program\n");
                break;
            default:
                printf("please try again.\n");
        }
    } while (choice != 5);



    return 0;
}

