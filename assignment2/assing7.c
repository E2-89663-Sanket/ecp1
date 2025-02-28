#include <stdio.h>




int main()

{
    int year, days;
    printf("Enter a year: ");
scanf("%d", &year);
    // Without logical
    if ((year / 4) * 4 == year)
	{
        if ((year / 100) * 100 == year)
		{
            if ((year / 400) * 400 == year)
			{
                days = 366;
            } else
			{
                days = 365;
            }
        } else
		{
            days = 366;
        }
    } else
	{
        days = 365;
    }

printf("days in the year: %d\n", days);
    
    // logical
    if (year % 400 == 0)
	{
        days = 366;
    }
	else if (year % 100 == 0)
	{
        days = 365;
    }
	else if (year % 4 == 0)
	{
        days = 366;
    }
	else
	{
        days = 365;
    }
   		 printf("days in the year : %d\n", days);
    
    // conditional 
    days = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? 366 : 365;
   		 printf("days in the year: %d\n", days);
    
    return 0;
}

