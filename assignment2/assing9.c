#include <stdio.h>





int main()


{
    int month, year, days;



    printf("enter month (1-12): ");
    scanf("%d", &month);
    printf("enter year: ");
    scanf("%d", &year);
    



    // using if-else ladder
    if (month ==1 ||month ==3 ||month == 5 ||month ==7 || month ==8 ||month ==10 || month ==12)
	{
        days =31;
    }
	else if (month ==4 || month == 6|| month ==9 || month ==11)
	{
        days =30;
    }
	else if (month== 2)
	{
        if ((year % 40 == 0) || (year % 4== 0 && year% 100 != 0))
		{
            days=29;
        }
		else
		{
            days=28;
        }
    }
	else
	{
        printf("invalid month entered.\n");
       
return 1;
    }
    printf("days in the given month and year: %d\n", days);
    
    // using logical operators
  
    








    return 0;
}

