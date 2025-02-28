#include<stdio.h>
int main()

{
int e,d ;
char ch;
	 printf("enter the employ id: ");
	 scanf("%d",&e);
	 
	 printf("enter the department num :");
	 scanf("%d",&d);
	 
	 printf("enter the designation code:");
	 scanf("%*c%c",&ch);
	
	 if (d==10 && ch =='M')
	 {
		printf("employee id:%d is working in 'marketing' dep as'manager' ", e);

	}
	 else	if (d==20 && ch=='S')
	 {
		 printf("employee id:%d is working in 'management'dep as 'supervisor' ", e); 
	
	 }
	else if (d==30 && ch == 's')
	{
		printf("employee id: %d is working in 'sales'dep as 'security officer'",e);

	}
	 else if (d==40 && ch =='C')
	 {
		 printf("employee id : %d is working in 'designing ' dep as 'clerk'", e);

	 }
		else 
		{
			printf("employee id data not found");
		}

		return 0;


}
