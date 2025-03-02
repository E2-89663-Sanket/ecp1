#include<stdio.h>
 int main()
 
{
 
     int month;
     printf("enter the month:");
     scanf("%d",&month);
             switch(month)
			 {       
        case 1:
             printf("Jan => 31 Days \n");
            break;
         case 2:
             printf("Feb has 28/29 Days \n");
           break;
       case 3:
             printf("Mar has 31 Days \n");
            break;
            
        case 4:
            printf("apr has 30 Days \n");
            break;
            
        case 5:
            printf("may has 31 Days \n");
            break;
            
         case 6:
             printf("jun has 30 Days \n");
             break;
             
        case 7:
            printf("jul has 31 Days \n");
            break;
          
         case 8:
             printf("aug has 31 Days \n");
             break;
            
           
         case 9:
             printf("sep has 30 Days \n");
             break;
             
         case 10:
           printf("oct has 31 Days \n");
            break;
            
              case 11:
             printf("November has 30 Days \n");
             break;
       case 12:
	 printf("December has 31 Days \n");
break;
	   default:
printf("invalid month \n");

 }
return 0;
}
