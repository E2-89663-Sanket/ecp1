#include <stdio.h>


typedef enum {
    MON, TUE, WED, THU, FRI, SAT, SUN
} dayofweek;






int main()
{
    int day, month, year;
    dayofweek dayofweek;
    
    printf("enter(dd mm yyyy): ");
    scanf("%d %d %d",&day,&month,&year);
    
    
    printf("the week is: ");






    switch (dayofweek)
	{
        case MON: printf("mon\n");
break;

		case TUE: printf("tue\n"); 
		break;
        case WED: printf("wed\n"); 
break;
        case THU: printf("thu\n"); 

break;
        case FRI: printf("fri\n"); 

	break;
        case SAT: printf("sat\n"); 
break;
        case SUN: printf("sun\n"); 
	break;
        default: 
				  printf("invalid date\n");
    }
    






    return 0;
}

