#include <stdio.h>

int isLeapYear(int year);

int getDaysInMonth(int month, int year);


int main() 

{
    int year, month;

    
    printf("enter year: ");
    scanf("%d", &year);

  
    if (isLeapYear(year)) 
	{
        printf("%d is a leap year.\n", year);
    }
	else
	{

        printf("%d is not a leap year.\n", year);
    }

    
    printf("enter month (1-12): ");
    scanf("%d", &month);

    
    int days = getDaysInMonth(month, year);
    if (days != 0) 
	{
        printf("number of days month %d of year %d: %d\n", month, year, days);
    }
	else 
	{
        printf("invalid month!\n");
    }

    return 0;
}


int isLeapYear(int year) 
{
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
	{
        return 1; 
    }

	else 
	{
        return 0; 
    }
}


int getDaysInMonth(int month, int year)
{
    switch (month)
	{
        
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31; 
       
		case 4: case 6: case 9: case 11:
            return 30; 
        

		case 2:
            if (isLeapYear(year))
			{
                return 29; 
            } else 

			{
                return 28; 
            }
        
		


		default:
            
			return 0; 
    }
}













