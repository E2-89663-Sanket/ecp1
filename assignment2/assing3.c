#include<stdio.h>
int main()
{
	int num;
	printf("Enter Num : ");
	scanf("%d",&num);
	if(num > 0 )
	{
		printf("Num is +ve \n");
	}

	if( num < 0  )
		printf("Num is -ve"); 

	if( num == 0)
	{
		printf("Num is Zero \n");
	}
		if( num > 0 )
	{
		printf("+Ve num \n");
	}
	else if( num  < 0 )
		printf("Num is -Ve \n");
	else
		printf("Num is  Zero \n");


	return 0;
}
